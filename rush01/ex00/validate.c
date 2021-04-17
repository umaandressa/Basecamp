/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-souz <ade-souz@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 19:20:30 by ade-souz          #+#    #+#             */
/*   Updated: 2021/04/11 20:02:38 by ade-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int g_rule[16];

int		space(char c)
{
	return (c == ' ' || (9 <= c && c <= 13));
}

int		validate(char *rule)
{
	int n;

	n = 0;
	while (*rule)
	{
		if (*rule && space(*rule))
			++rule;
		else if ('1' <= *rule && *rule <= '4')
		{
			if (n == 16 || (*(rule + 1) && !space(*(rule + 1))))
				return (0);
			g_rule[n] = *rule - '0';
			n++;
			rule++;
		}
		else
		{
			return (0);
			++rule;
		}
	}
	return (n == 16);
}
