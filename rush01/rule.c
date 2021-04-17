/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rule.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-souz <ade-souz@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 20:16:54 by ade-souz          #+#    #+#             */
/*   Updated: 2021/04/11 20:35:12 by ade-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

extern char *g_matriz[6][6];
extern char *g_rule[16];

void	rule(void)
{
	int c;
	int l;

	l = 0;
	g_matriz[0][1] = g_rule[0];
	g_matriz[0][2] = g_rule[1];
	g_matriz[0][3] = g_rule[2];
	g_matriz[0][4] = g_rule[3];
	g_matriz[5][1] = g_rule[4];
	g_matriz[5][2] = g_rule[5];
	g_matriz[5][3] = g_rule[6];
	g_matriz[5][4] = g_rule[7];
	g_matriz[1][0] = g_rule[8];
	g_matriz[2][0] = g_rule[9];
	g_matriz[3][0] = g_rule[10];
	g_matriz[4][0] = g_rule[11];
	g_matriz[1][5] = g_rule[12];
	g_matriz[2][5] = g_rule[13];
	g_matriz[3][5] = g_rule[14];
	g_matriz[4][5] = g_rule[15];
	while (l < 6)
	{
		c = 0;
		while (c < 6)
		{
			write(1, g_matriz[l][c], 4);
		}
		write(1, "\n", 1);
		l++;
	}
}