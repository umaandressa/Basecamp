/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-souz <ade-souz@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 13:11:30 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/04/07 18:39:08 by ade-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char *s1;
	char *s2;
	// char *s3;
	// char *s4;

	s1 = calloc(10, sizeof(char)); 
	s2 = calloc(8, sizeof(char)); 
	// s3 = calloc(10, sizeof(char)); 
	// s4 = calloc(10, sizeof(char)); 
	s1 = "ovo";
	s2 = "óvo";
	char s3[] = {0, 6};
	char s4[] = {-123, 8};
	printf("s1: %s, s2: %s, s3: %s, s4: %s\n", s1, s2, s3, s4);
	printf("cmp_12 = %d, og_cmp_12 = %d\n", ft_strcmp(s1, s2), strcmp(s1, s2));
	printf("cmp_13 = %d, og_cmp_13 = %d\n", ft_strcmp(s1, s3), strcmp(s1, s3));
	printf("cmp_14 = %d, og_cmp_14 = %d\n", ft_strcmp(s1, s4), strcmp(s1, s4));
	return(0);
}
