/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-souz <ade-souz@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 19:46:33 by ade-souz          #+#    #+#             */
/*   Updated: 2021/04/16 15:53:19 by ade-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int					ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (str);
}

char				*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*src;
	int					i;

	src = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!src)
		return (0);
	i = 0;
	while (i < ac)
	{
		src[i].size = ft_strlen(av[i]);
		src[i].str = malloc(src[i].size + 1);
		src[i].copy = malloc(src[i].size + 1);
		ft_strcpy(src[i].str, av[i]);
		ft_strcpy(src[i].copy, av[i]);
		++i;
	}
	src[i].str = 0;
	return (src);
}
