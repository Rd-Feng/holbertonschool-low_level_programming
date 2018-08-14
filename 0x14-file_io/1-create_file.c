#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * create_file - create a file
 * @filename: file name
 * @text_content: content in file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len, count;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);
	if (text_content)
	{
		while (text_content[len])
			len++;
		count = write(fd, text_content, len);
		if (count < 0)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
