#include "get_next_line.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int	main()
{
	int fd = open("text.txt", O_RDONLY);
	int fd2 = open("text1.txt", O_RDONLY);
	
	
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd2));
	printf("%s", get_next_line(fd));
	
	return (0);
}
