#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * read_textfile - reads a text file and prints it to POSIX standard output
 * @filename: file name
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print,
 * 0 if file name is NULL or program fails to write expected amount of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t count = 0;
	int fd;
	char *buffer = malloc(letters + 1);

	if (filename && buffer && letters > 0)
	{
		fd = open(filename, O_RDONLY);
		if (fd >= 0)
		{
			count = read(fd, buffer, letters);
			letters = write(STDOUT_FILENO, buffer, count);
			free(buffer);
			close(fd);
			if ((size_t)count > letters)
				count = 0;
		}
	}
	return (count);
}
