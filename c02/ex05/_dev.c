/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _dev.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-souz <ade-souz@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 17:40:31 by ade-souz          #+#    #+#             */
/*   Updated: 2021/04/06 19:48:24 by ade-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int ft_str_is_uppercase(char *str);

int	main(void)
{
	char src[11] = "OL";
	int x;
	x = ft_str_is_uppercase(src);
	printf("...%i...", x);
}
