#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: file's name to be read
 * @letters: number of letters to read and print
 * Return: the number of letters printed, or 0 if it failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int j, fd, y;
	char *buf;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);
	j = read(fd, buf, letters);
	if (j < 0)
	{
		free(buf);
		return (0);
	}
	buf[j] = '\0';
	close(fd);
	y = write(STDOUT_FILENO, buf, j);
	if (y < 0)
	{
		free(buf);
		return (0);
	}
	free(buf);
	return (y);
}
