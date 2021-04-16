#include <stdio.h>
#include <string.h>
char	*ft_strstr(char *str, char *to_find);

int main (void)
{
	char s1[100] = "Testando 3789";
	char s2[] = "37";
	char *x;
	x = ft_strstr(s1, s2);
	printf("%s", x);
}