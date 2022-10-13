#include <stdio.h>
#include <stdlib.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	int fd;
	char buf[60];

	fd = open("myfile.txt", O_CREAT, O_WRONLY, 0600);

	if (fd == -1)
	{
		printf("Failed to create and open file.\n");
		exit(1);
	}
	write(fd, "and that piece of art is useful
			\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
	close(fd);
	/* Read */
	fd = open("myfile.txt", O_RDONLY);
	if (fd == -1)
	{
		printf("Failed to open and read file.\n");
		exit(1);
	}
	read(fd, buf, 59);
	buf[13] = '\0';
	close(fd);
	printf("buf: %s\n", buf);
	return (1);
}
