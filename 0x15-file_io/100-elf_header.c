#include <unistd.h>
#include <fcntl.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define EI_NIDENT 16

typedef struct {
    uint8_t e_ident[EI_NIDENT];
    uint16_t e_type;
    uint16_t e_machine;
    uint32_t e_version;
    uint64_t e_entry;
    uint64_t e_phoff;
    uint64_t e_shoff;
    uint32_t e_flags;
    uint16_t e_ehsize;
    uint16_t e_phentsize;
    uint16_t e_phnum;
    uint16_t e_shentsize;
    uint16_t e_shnum;
    uint16_t e_shstrndx;
} Elf64_Ehdr;

/**
 * _putchar - write a character to the standard output
 * @c: the character to write
 * Return: 1 on success, -1 on error
 */
int _putchar(char c) {
    return write(1, &c, 1);
}

/**
 * display_error - display an error message and exit with status code 98
 * @message: the error message to display
 */
void display_error(const char *message) {
    ssize_t len = strlen(message);
    write(2, message, len);
    exit(98);
}

/**
 * display_elf_header - read and display information from an ELF header
 * @filename: the name of the ELF file to analyze
 */
void display_elf_header(const char *filename) {
    int fd = open(filename, O_RDONLY);
    if (fd == -1)
        display_error("Error opening file\n");

    Elf64_Ehdr header;
    ssize_t bytes_read = read(fd, &header, sizeof(Elf64_Ehdr));
    if (bytes_read != sizeof(Elf64_Ehdr))
        display_error("Error reading ELF header\n");

    if (header.e_ident[0] != 0x7f || memcmp(header.e_ident + 1, "ELF", 3) != 0)
        display_error("Not an ELF file\n");

    _putchar('M');
    _putchar('a');
    _putchar('g');
    _putchar('i');
    _putchar('c');
    _putchar(':');
    _putchar(' ');
    for (int i = 0; i < EI_NIDENT; i++) {
        char hex[3];
        sprintf(hex, "%02x", header.e_ident[i]);
        write(1, hex, 2);
        if (i < EI_NIDENT - 1)
            _putchar(' ');
    }
    _putchar('\n');

    char class_str[20];
    snprintf(class_str, sizeof(class_str), "Class: %d-bit\n", header.e_ident[4] == 1 ? 32 : 64);
    write(1, class_str, strlen(class_str));

    char data_str[40];
    snprintf(data_str, sizeof(data_str), "Data: %s\n", header.e_ident[5] == 1 ? "2's complement, little endian" : "2's complement, big endian");
    write(1, data_str, strlen(data_str));

    char version_str[20];
    snprintf(version_str, sizeof(version_str), "Version: %d\n", header.e_ident[6]);
    write(1, version_str, strlen(version_str));

    char os_abi_str[20];
    snprintf(os_abi_str, sizeof(os_abi_str), "OS/ABI: %d\n", header.e_ident[7]);
    write(1, os_abi_str, strlen(os_abi_str));

    char abi_version_str[30];
    snprintf(abi_version_str, sizeof(abi_version_str), "ABI Version: %d\n", header.e_ident[8]);
    write(1, abi_version_str, strlen(abi_version_str));

    char type_str[20];
    snprintf(type_str, sizeof(type_str), "Type: %d\n", header.e_type);
    write(1, type_str, strlen(type_str));

    char entry_point_str[40];
    snprintf(entry_point_str, sizeof(entry_point_str), "Entry point address: 0x%lx\n", (unsigned long)header.e_entry);
    write(1, entry_point_str, strlen(entry_point_str));

    close(fd);
}

int main(int argc, char *argv[]) {
    if (argc != 2)
        display_error("Usage: elf_header elf_filename\n");

    display_elf_header(argv[1]);

    return (0);
}

