/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dev.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-souz <ade-souz@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 19:17:26 by ade-souz          #+#    #+#             */
/*   Updated: 2021/04/14 19:48:35 by ade-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strdup(char *src);

int main(void)
{
	char *src = "andressa";
	char *x;
	x = ft_strdup(src);
	
	printf("%s", x);
		
}