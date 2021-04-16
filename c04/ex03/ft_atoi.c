/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-souz <ade-souz@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 13:52:04 by ade-souz          #+#    #+#             */
/*   Updated: 2021/04/11 00:16:08 by ade-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int numero;
	int menos;

	menos = 0;
	numero = 0;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			menos++;
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		if (numero == 0)
			numero = *str - '0';
		else
			numero = numero * 10 + *str - '0';
		str++;
	}
	if (menos % 2 == 1)
		numero = -numero;
	return (numero);
}
