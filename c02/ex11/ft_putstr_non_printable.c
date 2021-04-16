/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-souz <ade-souz@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 18:51:00 by ade-souz          #+#    #+#             */
/*   Updated: 2021/04/12 14:56:57 by ade-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	aux;
	char			hex0;
	char			hex1;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
		{
			aux = (unsigned char)str[i];
			hex0 = "0123456789abcdef"[aux / 16];
			hex1 = "0123456789abcdef"[aux % 16];
			write(1, "\\", 1);
			write(1, &hex0, 1);
			write(1, &hex1, 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
