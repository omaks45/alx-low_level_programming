#include "main.h"
/**
* access_io_fptr - checks if a file can be opened or closed
* @permission: closing and opening
* @fptr: file descriptor of the file to be opened
* @fd: file descriptor
* @filename: name of file
*
* Return: void
*/
void access_io_fptr(int fptr, int fd, char *filename, char permission)
{
	if (permission == 'c' && fptr == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", fd);
		exit(100);
	}
	else if (permission == 'o' && fptr == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", filename);
		exit(98);
	}
	else if (permission == 'w' && fptr == -1)
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", filename);
}

/**
* main - copies the content of a file to another file
* @argc: argument count
* @argv: argument passed in the array
*
* Return: 1 on success, otherwise exit.
*/
int main(int argc, char *argv[])
{
	int fd1, fd2, close_fd1, close_fd2;
	ssize_t message = 1024, fptr1;
	char buffer[1024];
	unsigned int permission = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(argv[1], O_RDONLY);
	access_io_fptr(fd1, -1, argv[1], 'o');
	fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, permission);
	access_io_fptr(fd2, -1, argv[2], 'w');

	while (message == 1024)
	{
		message = read(fd1, buffer, sizeof(buffer));
		if (message == -1)
			access_io_fptr(-1, -1, argv[1], 'o');
		fptr1 = write(fd2, buffer, message);
		if (fptr1 == -1)
			access_io_fptr(-1, -1, argv[2], 'w');
	}

	close_fd1 = close(fd1);
	access_io_fptr(close_fd1, fd1, NULL, 'c');
	close_fd2 = close(fd2);
	access_io_fptr(close_fd2, fd2, NULL, 'c');
	return (0);
}
