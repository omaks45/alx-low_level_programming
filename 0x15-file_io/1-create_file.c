#include "main.h"
/**
* _strlen - finds length of string
* @str: pointer to the string
*
* Return: length of string
*/
int _strlen(char *str)
{
	int i;

	for  (i = 0; str[i]; i++)
		;
	return (i);
}
/**
* create_file - creates a file
* @filename: file to be created
* @text_content: Null terminated string to write to the file
*
* Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t lent = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1 || lent == -1)
		return (-1);
	if (text_content != NULL)
		lent = write(fd, text_content, _strlen(text_content));
	close(fd);
	return (1);
}
