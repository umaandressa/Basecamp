/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _dev.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-souz <ade-souz@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 17:40:31 by ade-souz          #+#    #+#             */
/*   Updated: 2021/04/06 19:08:59 by ade-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <bsd/string.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char a1[50] = "ola mundo! TEStando O programa 123...";
	char a2[50];

	char *pa1 = a1;
	char *pa2 = a2;
	unsigned int x;
	
	//char *y;
	
	//y = strcpy(pa2, pa1);	
	x = ft_strlcpy(pa2, pa1, 37);
	printf("%s", a2);
	printf("%u", x);
	return (0);

//     char str[] = "aA1!";
    
//     printf ("%s \n", str);
//     ft_strupcase(str);
//     printf ("%s \n", str);
//     return (0);
}

