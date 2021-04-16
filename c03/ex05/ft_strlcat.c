/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-souz <ade-souz@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 22:26:28 by ade-souz          #+#    #+#             */
/*   Updated: 2021/04/08 13:53:48 by ade-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int s;

	s = 0;
	while (*dest != '\0' && s < size)
	{
		s++;
		dest++;
	}
	while (*src != '\0' && s + 1 < size)
	{
		*dest = *src;
		dest++;
		src++;
		s++;
	}
	if (s < size)
		*dest = '\0';
	while (*src != '\0')
	{
		src++;
		s++;
	}
	return (s);
}
