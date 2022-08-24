#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of the file
 * @letters: the number of letters it should read and print
 *
 * Return: return the actual number of letters it could read and print or 0
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f, r;
	size_t i;
	char *b;

	if (filename == NULL)
		return (0);
	b = malloc((letters + 1) * sizeof(size_t));
	if (!b)
	{
		free(b);
		return (0);
	}
	f = open(filename, O_RDONLY);
	if (f == -1)
	{
		free(b);
		return (0);
	}
	r = read(f, b, letters);
	if (r == -1)
	{
		free(b);
		return (0);
	}
	b[letters] = '\0';
	close(f);
	for (i = 0; i < letters; i++)
		_putchar(b[i]);

	return (letters);
}
