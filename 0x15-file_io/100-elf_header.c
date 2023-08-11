#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
*main - entry point
*display_elf_header_info - reads ELF header from file discriptor
*@fd: file discriptor
*Return: open ELF file
*/

void display_elf_header_info(int fd);
void error_exit(const char *message, const char *filename, int code);

int main(int argc, char *argv[])
{
int fd;
if (argc != 2)
{
fprintf(stderr, "Usag: %s elf_filename\n", argv[0]);
exit(98);
}

fd = open(argv[1], O_RDONLY);
if (fd == -1)

{
error_exit("Error: Can't read from file %s", argv[1], 98);
}

display_elf_header_info(fd);

close(fd);

return (0);

}

/**
*error_exit - prints error message
*@message: error message
*@filename: name of the file
*@code: error code to be printed
*/

void error_exit(const char *message, const char *filename, int code)
{
fprintf(stderr, message, filename);
fprintf(stderr, "\n");
exit(code);
}

/**
*display_elf_header_info -reads and extracts ELF header info
*@fd: input valur
*/
void display_elf_header_info(int fd)
{
unsigned char elf_header[16];
ssize_t bytes_read = read(fd, elf_header, sizeof(elf_header));
if (bytes_read != sizeof(elf_header))
{
error_exit("Error: Can't read ELF header from file", "", 98);
}

printf("Magic: %02x %02x %02x %02x\n",
elf_header[0], elf_header[1], elf_header[2], elf_header[3]);
printf("Class: %d-bit\n", elf_header[4] == 1 ? 32 : 64);
printf("Data: %s-endian\n", elf_header[5] == 1 ? "little" : "big");
printf("Version: %d\n", elf_header[6]);
printf("OS/ABI: %d\n", elf_header[7]);
printf("ABI Version : %d\n", elf_header[8]);
printf("Type : %d\n", *(unsigned short *)(elf_header + 16));
printf("Entry point address: %#x\n", *(unsigned int *)
(elf_header + 24));
}
