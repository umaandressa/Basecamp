/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _dev2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-souz <ade-souz@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 17:49:28 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/04/10 23:14:47 by ade-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <unistd.h>
#include <stdio.h>

int ft_atoi(char *str);

int	main(void)
{
	char str[] = "    ---+--+1234ab567";
	// printf("%s", str);
	ft_atoi(str);
	return (0);
}
