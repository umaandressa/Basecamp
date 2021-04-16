/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-souz <ade-souz@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 22:26:28 by ade-souz          #+#    #+#             */
/*   Updated: 2021/04/09 01:24:45 by ade-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char *result;
	char *look_f;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0' && *to_find != '\0')
	{
		if (*str != *to_find)
			str++;
		else
		{
			result = str;
			look_f = to_find;
			while (*str == *to_find && *to_find != '\0')
			{
				str++;
				to_find++;
			}
			if (*to_find == '\0')
				return (result);
			to_find = look_f;
		}
	}
	return (0);
}
