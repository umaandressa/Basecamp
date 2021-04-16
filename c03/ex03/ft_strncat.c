/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-souz <ade-souz@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 22:26:28 by ade-souz          #+#    #+#             */
/*   Updated: 2021/04/07 19:48:44 by ade-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned	i;
	char		*dest2;

	i = 0;
	dest2 = dest;
	while (*dest2 != '\0')
	{
		dest2++;
	}
	while (*src != '\0' && i < nb)
	{
		*dest2 = *src;
		dest2++;
		src++;
		i++;
	}
	*dest2 = '\0';
	return (dest);
}
