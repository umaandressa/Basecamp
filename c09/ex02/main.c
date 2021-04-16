/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-souz <ade-souz@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 16:50:47 by ade-souz          #+#    #+#             */
/*   Updated: 2021/04/16 16:56:01 by ade-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char	**ft_split(char *str, char *charset);


int main(void)
{
	char *str = "abcdefghijhhhh";
	char *sep = "/ ,;:-";
	char **strs;
	strs = ft_split(str, sep);
	printf("%s", strs[0]);
}