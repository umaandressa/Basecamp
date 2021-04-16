#include <stdio.h>
#include <string.h>

unsigned int    strlcat(char *dst, const char *src, unsigned int size);

unsigned int    ft_strlcat(char *dest, char *src, unsigned int size);

int                main(void)
{
    unsigned int    size = 15;
    char            src[11] = "Sao Paulo";
    char            dest[26] = "Quarenta e Dois";
    char            ft_src[30] = "Sao Paulo";
    char            ft_dest[26] = "Quarenta e Dois";

  printf("src: %s\n", src);
    printf("strlcat: %o\n", strlcat(dest, src, size));
  printf("dest: %s\n", dest);
  printf("ft_src: %s\n", ft_src);
    printf("ft_strlcat: %o\n", ft_strlcat(ft_dest, ft_src, size));
  printf("ft_dest: %s\n", ft_dest);

    return (0);
}