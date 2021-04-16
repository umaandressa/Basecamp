#include <unistd.h>
#include <string.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char src[11] = "Ola, Mundo!";
	char a[11];
	ft_strncpy(a, src, 12);
	write(1, &a, 10);
}