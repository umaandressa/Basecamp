#include <stdio.h>

void ft_putnbr_base(int nbr, char *base);

int main(void)
{
	int nbr = 256;
	char *base = "0123456789";
	ft_putnbr_base(nbr, base);	
}