#include "main.h"
/**
* read_textfile - reads a text file and prints it to the POSIX standard output.
* @filename: name of file to be read
* @letters: numbers to read and print
*
* Return: the actual number of letters it could read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *Buffer;
	ssize_t filer, filew;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	Buffer = malloc(sizeof(char) * letters);
	if (Buffer == NULL)
	{
		close(fd);
		return (0);
	}
	filer = read(fd, Buffer, letters);
	close(fd);
	if (filer == -1)
	{
		free(Buffer);
		return (0);
	}
	filew = write(STDOUT_FILENO, Buffer, filer);
	free(Buffer);
	if (filer != filew)
		return (0);
	return (filew);
}
