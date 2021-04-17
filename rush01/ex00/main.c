/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-souz <ade-souz@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 19:22:05 by ade-souz          #+#    #+#             */
/*   Updated: 2021/04/11 20:35:27 by ade-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "header.h"

int		validate(char *rule);
int		rush(void);

int		main(int argc, char *argv[])
{
	if ((argc != 2) || (validate(argv[1]) == 0))
		write(1, "Error\n", 6);
	else
	{
		create_game();
		print_game();
	}
	return (0);
}
