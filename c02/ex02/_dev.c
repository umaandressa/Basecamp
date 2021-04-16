/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _dev.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-souz <ade-souz@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 17:40:31 by ade-souz          #+#    #+#             */
/*   Updated: 2021/04/06 19:45:11 by ade-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int ft_str_is_alpha(char *str);

int	main(void)
{
	char src[11] = "aaa";
	int x;
	x = ft_str_is_alpha(src);
	printf("...%i...", x);
}