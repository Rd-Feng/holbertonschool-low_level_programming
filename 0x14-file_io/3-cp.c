#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#define BUFFER_SIZE 1024
/**
 * main - copies the content of a file to another file
 * @argc: argument count
 * @args: arguments
 *
 * Return: 0 on success.
 */
int main(int argc, char **args)
{
	int src = -1, dest = -1; /* file descripters */
	char buffer[BUFFER_SIZE] = {0};
	int rd_count, wr_count;
	int status;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	src = open(args[1], O_RDONLY);
	if (src < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			args[1]);
		exit(98);
	}
	dest = open(args[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (dest < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", args[2]);
		exit(99);
	}
	do {
		rd_count = read(src, buffer, BUFFER_SIZE);
		if (rd_count < 0)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", args[1]);
			exit(98);
		}
		if (rd_count > 0)
		{
			wr_count = write(dest, buffer, rd_count);
			if (wr_count < 0)
			{
				dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", args[2]);
				exit(99);
			}
		}
	} while (rd_count);
	status = close(src);
	if (status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src);
		exit(100);
	}
	status = close(dest);
	if (status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest);
		exit(100);
	}
	return (0);
}
