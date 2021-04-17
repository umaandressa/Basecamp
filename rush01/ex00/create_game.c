/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_game.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-souz <ade-souz@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 15:21:41 by ade-souz          #+#    #+#             */
/*   Updated: 2021/04/11 20:40:35 by ade-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*g_matriz[6][6];

void	create_game(void)
{
	int		l;
	int		c;

	l = 0;
	c = 0;
	while (l < 6)
	{
		c = 0;
		while (c < 6)
		{
			if ((l == 0 && (c == 0 || c == 5)) ||
				(l == 5 && (c == 0 || c == 5)))
				g_matriz[l][c] = "    ";
			else
				g_matriz[l][c] = "1234";
			write(1, g_matriz[l][c], 4);
			write(1, " ", 1);
			c++;
		}
		write(1, "\n", 1);
		l++;
	}
}
