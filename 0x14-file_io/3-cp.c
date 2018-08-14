#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#define BUFFER_SIZE 1024
/**
 * handle_rdwr_error - handle read write error
 * @src: source file fd
 * @dest: dest file fd
 */
void handle_rdwr_error(int src, int dest, int errcode)
{
	close(src);
	close(dest);
	exit(errcode);
}
/**
 * main - copies the content of a file to another file
 * @argc: argument count
 * @args: arguments
 *
 * Return: 0 on success.
 */
int main(int argc, char **args)
{
	int src, dest; /* file descripters */
	char buffer[BUFFER_SIZE] = {0};
	int rd_count, wr_count;
	int src_status, dest_status;

	if (argc != 3)
	{
		dprintf(STDOUT_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	src = open(args[1], O_RDONLY);
	dest = open(args[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (src < 0 || dest < 0)
	{
		if (src < 0)
			handle_rdwr_error(src, dest, 98);
		if (dest < 0)
			handle_rdwr_error(src, dest, 99);
	}
	do {
		rd_count = read(src, buffer, BUFFER_SIZE);
		if (rd_count < 0)
			handle_rdwr_error(src, dest, 98);
		wr_count = write(dest, buffer, rd_count);
		if (wr_count < 0)
			handle_rdwr_error(src, dest, 99);
	} while (rd_count);
	src_status = close(src);
	if (src_status == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src);
	dest_status = close(dest);
	if (dest_status == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest);
	if (src_status == -1 || dest_status == -1)
		exit(100);
	else
		return (0);
}
