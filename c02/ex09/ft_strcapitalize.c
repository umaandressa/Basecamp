/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-souz <ade-souz@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 18:51:00 by ade-souz          #+#    #+#             */
/*   Updated: 2021/04/12 14:20:51 by ade-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		number(char c)
{
	if ('0' <= c && c <= '9')
		return (1);
	return (0);
}

int		lowercase(char c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	return (0);
}

int		uppercase(char c)
{
	if ('A' <= c && c <= 'Z')
		return (1);
	return (0);
}

int		word(char c)
{
	if (number(c))
		return (1);
	if (uppercase(c))
		return (1);
	if (lowercase(c))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int first;

	i = 0;
	first = 1;
	while (str[i])
	{
		if (!word(str[i]))
			first = 1;
		else
		{
			if (first && lowercase(str[i]))
				str[i] = str[i] - 32;
			else if (!first && uppercase(str[i]))
				str[i] = str[i] + 32;
			first = 0;
		}
		++i;
	}
	return (str);
}
