#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

char *create_buffer(void);
void close_file(int fd);

/**
*create_buffer - Allocates 1024 bytes for a buffer.
*Return: A pointer to the newly-allocated buffer.
*Description: program copies content from one file to other
*/
char *create_buffer(void)
{
char *buffer;

buffer = malloc(sizeof(char) * 1024);

if (buffer == NULL)
{
dprintf(STDERR_FILENO, "Error: Can't allocate memory for buffer\n");
exit(99);
}
return (buffer);
}

/**
*close_file - Closes file descriptors.
*@fd: The file descriptor to be closed.
*Description: program copies content from one file to other
*/
void close_file(int fd)
{
if (close(fd) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}

/**
*main - Copies the content of a file to another file
*@argc: the number of arguments supplied
*@argv: an array of pointers to the arguments
*
*Return: 0 on success
*
*Description: if the argument count is incorrect - exit code 97
*if file_from does not exist or cannot be read - exit code 98
*if file_to cannot be created or written to - exit code 99
*if file_to or file_from cannot be closed - exit 100
*/
int main(int argc, char *argv[])
{
int from, to, r, w;
char *buffer;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

buffer = create_buffer();

from = open(argv[1], O_RDONLY);
if (from == -1)

{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
free(buffer);
exit(98);
}

to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
if (to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
free(buffer);
close_file(from);
exit(99);
}

do {
r = read(from, buffer, 1024);
if (r == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
free(buffer);
close_file(from);
close_file(to);
exit(98);
}


w = write(to, buffer, r);
if (w == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
free(buffer);
close_file(from);
close_file(to);
exit(99);
}
} while (r > 0);

free(buffer);
close_file(from);
close_file(to);

return (0);
}
