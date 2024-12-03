#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

int	main(void)
{
	int		fd;
	void	buf[42];
	size_t	count;

	fd = open("input.txt", O_RDONLY);
	read(fd, buf, count);
}
