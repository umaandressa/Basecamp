/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-souz <ade-souz@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 22:37:00 by ade-souz          #+#    #+#             */
/*   Updated: 2021/04/15 01:46:58 by ade-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	char *dest2;

	dest2 = dest;
	while (*dest2 != '\0')
	{
		dest2++;
	}
	while (*src != '\0')
	{
		*dest2 = *src;
		dest2++;
		src++;
	}
	*dest2 = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int			i;
	int			len;
	char		*all;

	len = 0;
	i = 0;
	if (size == 0)
	{
		all = ((char*)malloc(1));
		all[0] = 0;
		return (all);
	}
	while (i < size)
		len += ft_strlen(strs[i++]);
	all = malloc((len + (size - 1) * ft_strlen(sep) + 1) * sizeof(char));
	i = 0;
	while (i < size)
	{
		all = ft_strcat(all, strs[i]);
		if (i < size - 1)
			all = ft_strcat(all, sep);
		i++;
	}
	return (all);
}
