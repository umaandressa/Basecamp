/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-souz <ade-souz@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 22:26:28 by ade-souz          #+#    #+#             */
/*   Updated: 2021/04/07 19:14:57 by ade-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
