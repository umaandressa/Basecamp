/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _dev.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-souz <ade-souz@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 17:40:31 by ade-souz          #+#    #+#             */
/*   Updated: 2021/04/06 00:10:01 by ade-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char *ft_strcapitalize(char *str);

int	main(void)
{
	// char a1[60] = "oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	// char a2[60];

	// char *pa1 = a1;
	// char *pa2 = a2;
		
	// pa2 = ft_strupcase(pa1);
	// printf("%s", a2);
	// return (0);

    char str[] = "oi, tuDO bem? 42PAlavras quarENta-e-duas; cinquenta+e+um";
    
    printf ("%s \n", str);
    ft_strcapitalize(str);
    printf ("%s \n", str);
    return (0);
}

