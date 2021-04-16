#include <unistd.h>
#include <string.h>

char *ft_strcpy(char *dest, char *src);

int	main(void)
{
	char src[8] = "Andressa";
	char a[3];
	ft_strcpy(a, src);
	write(1, &a, 8);
}