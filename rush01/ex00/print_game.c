/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_game.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-souz <ade-souz@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 15:21:41 by ade-souz          #+#    #+#             */
/*   Updated: 2021/04/11 20:24:27 by ade-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

extern char *g_matriz[6][6];

void	print_game(void)
{
	int		l;
	int		c;

	l = 1;
	while (l < 5)
	{
		c = 1;
		while (c < 5)
		{
			write(1, g_matriz[l][c], 4);
			write(1, " ", 1);
			c++;
		}
		write(1, "\n", 1);
		l++;
	}
}
