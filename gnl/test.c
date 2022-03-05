#include "get_next_line.h"
#include <stdio.h>
#define BUFFER_SIZE 42
#include <fcntl.h>

int	main(void)
{
	int fd = open("txt", O_RDONLY);
	char *ret = get_next_line(fd);
	while (ret)
	{
		printf("%s", ret);
		ret = get_next_line(fd);
	}
	free(ret);
	close(fd);
}
