/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-souz <ade-souz@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 15:55:51 by ade-souz          #+#    #+#             */
/*   Updated: 2021/04/13 19:19:30 by ade-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int n;

	n = 2;
	if (nb <= 1)
		return (0);
	if (nb <= 3)
		return (1);
	if (!(nb % 2 && nb % 3))
		return (0);
	n = 5;
	while (n * n <= nb)
	{
		if (!(nb % n && nb % (n + 2)))
			return (0);
		n += 6;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int n;

	n = nb;
	if (nb > 2147483629)
		return (2147483647);
	while (!ft_is_prime(n))
		n++;
	return (n);
}
