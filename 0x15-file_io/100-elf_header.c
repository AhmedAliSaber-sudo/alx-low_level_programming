#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

#define ERR_EXIT_CODE 98

/**
 * print_elf_header - print elf header of a file.
 * @ehdr: poitner.
 */

void print_elf_header(Elf64_Ehdr *ehdr)
{
	printf("Magic:   ");
	for (int i = 0; i < EI_NIDENT; i++) {
		printf("%02x ", ehdr->e_ident[i]);
	}
	printf("\n");

	printf("Class:                             ");
	switch (ehdr->e_ident[EI_CLASS])
	{
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("Invalid class\n");
			break;
	}

	printf("Data:                              ");
	switch (ehdr->e_ident[EI_DATA]) {
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("Invalid data encoding\n");
			break;
	}

	printf("Version:                           %d", ehdr->e_ident[EI_VERSION]);
	if (ehdr->e_ident[EI_VERSION] == EV_CURRENT)
	{
		printf(" (current)\n");
	} 
	else
	{
		printf("\n");
	}

	printf("OS/ABI:                            ");
	switch (ehdr->e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("Sun Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("SGI Irix\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("FreeBSD\n");
			break;
		default:
			printf("<unknown: %x>\n", ehdr->e_ident[EI_OSABI]);
			break;
	}

	printf("ABI Version:                       %d\n", ehdr->e_ident[EI_ABIVERSION]);

	printf("Type:                              ");
	switch (ehdr->e_type) {
		case ET_NONE:
			printf("No file type\n");
			break;
		case ET_REL:
			printf("Relocatable file\n");
			break;
		case ET_EXEC:
			printf("Executable file\n");
			break;
		case ET_DYN:
			printf("Shared object file\n");
			break;
		case ET_CORE:
			printf("Core file\n");
			break;
		default:
			if ((ehdr->e_type >= ET_LOPROC) && (ehdr->e_type <= ET_HIPROC)) {
				printf("<processor specific>: %x\n", ehdr->e_type);
				break;
			}

			if ((ehdr->e_type >= ET_LOOS) && (ehdr->e_type <= ET_HIOS)) {
				printf("<operating system specific>: %x\n", ehdr->e_type);
				break;
			}

			if ((ehdr->e_type >= ET_LOUSER) && (ehdr->e_type <= ET_HIUSER)) {
				printf("<application specific>: %x\n", ehdr->e_type);
				break;
			}

			if ((ehdr->e_type >= ET_LOPROC) && (ehdr->e_type <= ET_HIPROC)) {
				printf("<processor specific>: %x\n", ehdr->e_type);
				break;
			}

			if ((ehdr->e_type >= ET_LOOS) && (ehdr->e_type <= ET_HIOS)) {
				printf("<operating system specific>: %x\n", ehdr->e_type);
				break;
			}

			if ((ehdr->e_type >= ET_LOUSER) && (ehdr->e_type <= ET_HIUSER)) {
				printf("<application specific>: %x\n", ehdr->e_type);
				break;
			}

			if ((ehdr->e_type >= ET_LOPROC) && (ehdr->e_type <= ET_HIPROC)) {
				printf("<processor specific>: %x\n", ehdr->e_type);
				break;
			}

			if ((ehdr->e_type >= ET_LOOS) && (ehdr->e_type <= ET_HIOS)) {
				printf("<operating system specific>: %x\n", ehdr->e_type);
				break;
			}

			if ((ehdr->e_type >= ET_LOUSER) && (ehdr->e_type <= ET_HIUSER)) {
				printf("<application specific>: %x\n", ehdr->e_type);
				break;
			}

			printf("UNKNOWN: %x\n", ehdr->e_type);
			break;
	}

	printf("Entry point address:               0x%lx\n", ehdr->e_entry);
}

/**
 * main - entry point.
 * @argc: number of argument,
 * @argv: array of argument.
 * Return: 0 on sucess.
 */

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: elf_header elf_filename\n");
		exit(ERR_EXIT_CODE);
	}

	int fd = open(argv[1], O_RDONLY);
	
	if (fd == -1)
	{
		perror("open");
		exit(ERR_EXIT_CODE);
	}

	Elf64_Ehdr ehdr;
	if (read(fd, &ehdr, sizeof(ehdr)) != sizeof(ehdr))
	{
		fprintf(stderr, "Failed to read ELF header\n");
		exit(ERR_EXIT_CODE);
	}

	if (ehdr.e_ident[EI_MAG0] != ELFMAG0 ||
			ehdr.e_ident[EI_MAG1] != ELFMAG1 ||
			ehdr.e_ident[EI_MAG2] != ELFMAG2 ||
			ehdr.e_ident[EI_MAG3] != ELFMAG3)
	{
		fprintf(stderr, "Not an ELF file\n");
		exit(ERR_EXIT_CODE);
	}

	print_elf_header(&ehdr);

	close(fd);

	return 0;
}

