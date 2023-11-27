#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#define BUF_SIZE 1024

/**
 * print_error - Prints error message and exits with a specific code.
 * @msg: The error message to print.
 * @code: The exit code.
 */
void print_error(const char *msg, int code)
{
	dprintf(STDERR_FILENO, "%s\n", msg);
	exit(code);
}

/**
 * copy_file - Copies the content of one file to another.
 * @file_from: Source file.
 * @file_to: Destination file.
 */
void copy_file(int file_from, int file_to)
{
	ssize_t bytes_read, bytes_written;
	char buffer[BUF_SIZE];

	while ((bytes_read = read(file_from, buffer, BUF_SIZE)) > 0)
	{
		bytes_written = write(file_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
			print_error("Error: Can't write to file", 99);
	}

	if (bytes_read == -1)
		print_error("Error: Can't read from file", 98);
}

/**
 * main - Copies the content of a file to another file.
 * @argc: Number of arguments passed to the program.
 * @argv: Array of arguments passed to the program.
 * Return: Upon successful execution, returns 0.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;

	if (argc != 3)
		print_error("Usage: cp file_from file_to", 97);

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		print_error("Error: Can't read from file", 98);

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
		print_error("Error: Can't write to file", 99);

	copy_file(file_from, file_to);

	if (close(file_from) == -1 || close(file_to) == -1)
		print_error("Error: Can't close file descriptor", 100);

	return (0);
}
