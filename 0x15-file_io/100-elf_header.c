#include "main.h"
#include <elf.h>

/**
 * print_error - prints an error message to stderr
 * @msg: the error message to print
 */
void print_error(char *msg)
{
	dprintf(2, "Error: %s\n", msg);
	exit(98);
}

/**
 * read_elf_header - reads the ELF header from the given file descriptor
 * @fd: the file descriptor of the ELF file
 *
 * Return: a pointer to the ELF header struct
 */
Elf64_Ehdr *read_elf_header(int fd)
{
	static Elf64_Ehdr elf_header;
	ssize_t r_bytes;

	r_bytes = read(fd, &elf_header, sizeof(elf_header));
	if (r_bytes == -1)
		print_error("Read failed");
	if (r_bytes != sizeof(elf_header))
		print_error("File too small");
	if (elf_header.e_ident[EI_MAG0] != ELFMAG0 ||
		elf_header.e_ident[EI_MAG1] != ELFMAG1 ||
		elf_header.e_ident[EI_MAG2] != ELFMAG2 ||
	    elf_header.e_ident[EI_MAG3] != ELFMAG3)
		print_error("File is not an elf file");
	return (&elf_header);
}

/**
 * print_elf_header - prints the info contained in the given ELF header
 * @elf_header: a pointer to the ELF header struct
 */
void print_elf_header(Elf64_Ehdr *elf_header)
{
	int i;

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", elf_header->e_ident[i]);
	printf("\n");
	printf("  Class:                             %s\n",
			elf_header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
	printf("  Data:                              %s\n",
			elf_header->e_ident[EI_DATA] == ELFDATA2LSB ?
			"2's complement, little endian" :
			"2's complement, big endian");
	printf("  Version:                           %d%s\n",
			elf_header->e_ident[EI_VERSION],
			elf_header->e_ident[EI_VERSION] == EV_CURRENT ?
			" (current)" : "");
	printf("  OS/ABI:                            %s\n",
			elf_header->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" :
			elf_header->e_ident[EI_OSABI] == ELFOSABI_HPUX ? "UNIX - HP-UX" :
			elf_header->e_ident[EI_OSABI] == ELFOSABI_NETBSD ? "UNIX - NetBSD" :
			elf_header->e_ident[EI_OSABI] == ELFOSABI_LINUX ? "UNIX - Linux" :
			elf_header->e_ident[EI_OSABI] == ELFOSABI_SOLARIS ? "UNIX - Solaris" :
			elf_header->e_ident[EI_OSABI] == ELFOSABI_AIX ? "UNIX - AIX" :
			elf_header->e_ident[EI_OSABI] == ELFOSABI_IRIX ? "UNIX - IRIX" :
			elf_header->e_ident[EI_OSABI] == ELFOSABI_FREEBSD ? "UNIX - FreeBSD" :
			elf_header->e_ident[EI_OSABI] == ELFOSABI_TRU64 ? "UNIX - TRU64" :
			elf_header->e_ident[EI_OSABI] == ELFOSABI_ARM ? "UNIX - ARM architecture" :
			elf_header->e_ident[EI_OSABI] == ELFOSABI_STANDALONE ? "Standalone App" :
			"unknown");
	printf("  ABI Version:                       %d\n",
			elf_header->e_ident[EI_ABIVERSION]);
	printf("  Type:                              %s\n",
			elf_header->e_type == ET_NONE ? "NONE (No file type)" :
			elf_header->e_type == ET_REL ? "REL (Relocatable file)" :
			elf_header->e_type == ET_EXEC ? "EXEC (Executable file)" :
			elf_header->e_type == ET_DYN ? "DYN (Shared object file)" :
			elf_header->e_type == ET_CORE ? "CORE (Core file)" : "unknown");
	printf("  Entry point address:               %#x\n",
			(unsigned int)(elf_header->e_entry & 0xFFFFFFFF));
}

/**
 * main - prints an elf file's headers
 * @ac: argument count
 * @av: argument vector
 *
 * Return: Always 0 (success)
 */
int main(int ac, char **av)
{
	Elf64_Ehdr *elf_header_info;
	int fd;

	if (ac != 2)
		print_error("Usage: elf_header elf_filename\n");
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
		print_error("Error: Can't read from this file\n");
	elf_header_info = read_elf_header(fd);
	print_elf_header(elf_header_info);
	return (0);
}
