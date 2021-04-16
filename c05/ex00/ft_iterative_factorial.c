/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-souz <ade-souz@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 02:41:57 by ade-souz          #+#    #+#             */
/*   Updated: 2021/04/13 19:41:14 by ade-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int n;
	int res;

	n = 1;
	res = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	else if (nb > 0)
	{
		while (n <= nb)
		{
			res *= n;
			n++;
		}
	}
	return (res);
}
