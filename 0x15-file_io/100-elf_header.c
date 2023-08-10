#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
*print_usage_and_exit -if the file is not an ELF file - exit code 98
*Return: void
*/

void print_usage_and_exit(void)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

/**
 *error_exit - the error to be generated if not ELF or error
 *@message: error message to be printed
 *@filename: file name of that generates error
 *@code: status code 98
*/
void error_exit(const char *message, const char *filename, int code)
{
dprintf(STDERR_FILENO, message, filename);
dprintf(STDERR_FILENO, "\n");
exit(code);
}

/**
 *copy_file - function that copies file contents to another file
 *@file_from: file to be copies from
 *@file_to: file to be copies to
*/

void copy_file(const char *file_from, const char *file_to)

int fd_from;
int fd_to;

{
int fd_from = open(file_from, O_RDONLY);
if (fd_from == -1)
{
error_exit("Error: Can't read from file %s", file_from, 98);
}

int fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
if (fd_to == -1)
{
close(fd_from);
error_exit("Error: Can't write to %s", file_to, 99);
}

char buffer[1024];
ssize_t bytes_read;
ssize_t bytes_written;
int fd_from;
int fd_to;


while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0)
{
bytes_written = write(fd_to, buffer, bytes_read);
if (bytes_written != bytes_read)
{
close(fd_from);
close(fd_to);
error_exit("Error: Can't write to %s", file_to, 99);
}
}

if (bytes_read == -1)
{
close(fd_from);
close(fd_to);
error_exit("Error: Can't read from file %s", file_from, 98);
}
 
if (close(fd_from) == -1 || close(fd_to) == -1)
{
error_exit("Error: Can't close fd", "", 100);
}
}

/**
 *main - entry point to display contents of ELF file
 *@argc: argument count
 *@argv: argument varibale
 *Return: coontents of the ELF FILE else 98 code
*/

int main(int argc, char *argv[])
{
if(argc != 3)
{
print_usage_and_exit();
}

char *file_from;
char *file_to;

file_from = argv[1];
file_to = argv[2];

copy_file(file_from, file_to);

return (0);
}
