/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dev.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-souz <ade-souz@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 00:31:32 by ade-souz          #+#    #+#             */
/*   Updated: 2021/04/15 01:42:52 by ade-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char		*ft_strjoin(int size, char **strs, char *sep);

int main(int argc, char *argv[])
{
	char *sep = ", ";
	char *all;
	all = ft_strjoin(argc, argv, sep);
	printf("%s", all);
	printf("\n");
}