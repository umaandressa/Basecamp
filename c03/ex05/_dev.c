#include <stdio.h>
#include <bsd/string.h>
#include <stdlib.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
char	*ft_strncat(char *dest, char *src, unsigned int nb);

int main (void)
{
	char			*s1;
	char			*s2;
	// char s1[13] = "Testando 378";
	// char s2[] = "tando";
	// char *x;
	unsigned int x;
	s2 = "ghijkl";
	s1 = strcpy(calloc(13, sizeof(char)), "abcdef");
	printf("%s\n", s1);
	x = strlcat(s1, s2, 4);
	printf("%s\n", s1);
	printf("%u\n", x);
}