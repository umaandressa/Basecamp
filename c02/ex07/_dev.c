/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _dev.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-souz <ade-souz@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 17:40:31 by ade-souz          #+#    #+#             */
/*   Updated: 2021/04/06 19:03:44 by ade-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char *ft_strupcase(char *str);

int	main(void)
{
	char a1[50] = "ola mundo! TEStando O programa 123...";
	char a2[50];

	char *pa1 = a1;
	char *pa2 = a2;
		
	pa2 = ft_strupcase(pa1);
	printf("%s", pa2);
	return (0);

    // char str[] = "aA1!";
    
    // printf ("%s \n", str);
    // ft_strcapitalize(str);
    // printf ("%s \n", str);
    // return (0);
}

