/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-souz <ade-souz@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 19:50:30 by ade-souz          #+#    #+#             */
/*   Updated: 2021/04/15 02:22:46 by ade-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int i;
	int size;
	int *numeros;

	i = 0;
	size = max - min;
	if (size <= 0)
		return (0);
	numeros = malloc(size * sizeof(int));
	while (i < size)
	{
		numeros[i] = min;
		min++;
		i++;
	}
	return (numeros);
}
