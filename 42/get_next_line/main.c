#include "get_next_line.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int	main()
{
	int fd = open("text.txt", O_RDONLY);
	int fd2 = open("text1.txt", O_RDONLY);
	
	
	printf("line 1 : %s\n", get_next_line(fd));
	printf("fd2 line 1: %s", get_next_line(fd2));
	// printf("\n");
	// printf("line 2 : %s\n", get_next_line(fd));
	// printf("fd2 line 2: %s", get_next_line(fd2));
	
	return (0);
}
