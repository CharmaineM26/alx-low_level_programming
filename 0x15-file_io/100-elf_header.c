#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

void print_usage_and_exit(void);
void error_exit(const char *message, const char *filename, int code);
int open_source_file(const char *file_from);
int open_destination_file(const char *file_to, mode_t mode);
void copy_file(int fd_from, int fd_to);
ssize_t read_and_write(int fd_from, int fd_to);

/**
*main - entry point to display contents of ELF file
*@argc: argument count
*@argv: argument varibale
*Return: contents of the ELF FILE else 98 code
*/

int main(int argc, char *argv[])
{
char *file_from;
char *file_to;
int fd_from;
int fd_to;

if (argc != 3)
{
print_usage_and_exit();
}

file_from = argv[1];
file_to = argv [2];
 
fd_from = open_source_file(file_from);
fd_to = open_destination_file(file_to, S_IRUSR | S_IWUSR | S_IRGRP
| S_IROTH);
copy_file(fd_from, fd_to);

close(fd_from);
close(fd_to);

return (0);
}


/**
*print_usage_and_exit - if the file is not an ELF file - exit code 97
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
*Return: returns file descriptor
*/

void error_exit(const char *message, const char *filename, int code)
{
dprintf(STDERR_FILENO, message, filename);
dprintf(STDERR_FILENO, "\n");
exit(code);
}

/**
*open_source_file - opens sources file specified by file_from
*@file_from: the specified file
*Return: returns file descriptor
*/
int open_source_file(const char *file_from)
{
int fd_from;

fd_from = open(file_from, O_RDONLY);
if (fd_from == -1)
{
error_exit("Error: Can'tread from file %s", file_from, 98);
}
return (fd_from);
}

/**
*open_destination_file - opens destination file
*@file_to: destination file
*@mode: file permissions mode
*Return: file descriptor
*/
int open_destination_file(const char *file_to, mode_t mode)
{
int fd_to;
fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, mode);
if (fd_to == -1)
{
error_exit("Error: Can't write to %s", file_to, 99);
}
return (fd_to);
}


/**
*copy_file - function that copies file contents to another file
*@fd_from: file to be copies from
*@fd_to: file to be copies to
*Returns: file descriptor
*/
void copy_file(int fd_from, int fd_to)
{
ssize_t bytes_read;
while ((bytes_read = read_and_write(fd_from, fd_to)) > 0)
{

}
}

/**
*read_and_write - reads data from source and copies to destination
*@fd_from: file data is read from
*@fd_to: file data to copied to
*Return: file descriptor
*/
ssize_t read_and_write(int fd_from, int fd_to)
{
char buffer[1024];
ssize_t bytes_written;
 
ssize_t bytes_read = read(fd_from, buffer, sizeof(buffer));
if (bytes_read == -1)
{
error_exit("Error: can't read from source file", "", 98);
}
bytes_written = write(fd_to, buffer, bytes_read);
if (bytes_written != bytes_read)
{
error_exit("Error: Can't write to destination file", "", 99);
}

return (bytes_read);
}
