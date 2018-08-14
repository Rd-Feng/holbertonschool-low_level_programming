#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * append_text_to_file - appends a text at the end of a file
 * File is not created and count as a failure if it DNE.
 *
 * @filename: file name
 * @text_content: text to append
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0, count;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
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
