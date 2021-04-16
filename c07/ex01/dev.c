/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dev.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-souz <ade-souz@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 19:17:26 by ade-souz          #+#    #+#             */
/*   Updated: 2021/04/15 03:05:21 by ade-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int *ft_range(int min, int max);

int main(void)
{
	// char *src = "andressa";
	int *x;
	x = ft_range(1 , 10);
	while (*x)
	{
		printf("%i", *x);
		x++;
	}	
}