/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-souz <ade-souz@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 14:34:22 by ade-souz          #+#    #+#             */
/*   Updated: 2021/04/14 01:22:59 by ade-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}

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
	if (nb < 3)
		return (2);
	while (!ft_is_prime(n))
		n++;
	return (n);
}

int	ft_sqrt(int nb)
{
	int n;
	int i;
	int div;
	int sqrt;

	i = 2;
	sqrt = 1;
	div = nb;
	if (nb <= 0 || nb == 2147483647)
		return (0);
	while (div != 1)
	{
		n = 0;
		while (div % i == 0 && div != 0)
		{
			div /= i;
			n++;
		}
		if (n % 2 != 0)
			return (0);
		else if (n != 0)
			sqrt = sqrt * ft_recursive_power(i, n / 2);
		i = ft_find_next_prime(i + 1);
	}
	return (sqrt);
}
