/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_teste.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-souz <ade-souz@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 13:52:04 by ade-souz          #+#    #+#             */
/*   Updated: 2021/04/04 00:59:39 by ade-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int x;
	int p;

	p = 0;
	while (p < size - 1)
	{
		i = p + 1;
		while (i < size)
		{
			if (tab[i] < tab[p])
			{
				x = tab[p];
				tab[p] = tab[i];
				tab[i] = x;
			}
			i++;
		}
		p++;
	}
}
