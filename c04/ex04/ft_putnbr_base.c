/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-souz <ade-souz@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 16:46:59 by ade-souz          #+#    #+#             */
/*   Updated: 2021/04/12 22:02:29 by ade-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	convert(int nbr, char *base, int nbase)
{
	if (nbr == -2147483648)
	{
		convert(nbr / nbase, base, nbase);
		ft_putchar(base[-(nbr % nbase)]);
		return ;
	}
	else if (nbr < 0)
	{
		nbr = -nbr;
		ft_putchar('-');
	}
	if (nbr > nbase - 1)
		convert(nbr / nbase, base, nbase);
	ft_putchar(base[nbr % nbase]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;
	int	j;
	int nbase;

	i = 0;
	nbase = 0;
	while (base[i] != '\0')
		i++;
	if (i < 2)
		return ;
	nbase = i;
	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] != base[j])
				j++;
			else
				return ;
		}
		i++;
	}
	convert(nbr, base, nbase);
}
