#include <stdio.h>
#include <string.h>
// int	ft_strcmp(char *s1, char *S2);

int main(void)
{
	char s1[] = "AB";
	char s2[] = "AAAAAAA";

	printf("%d\n", strcmp(s2, s1));
}
