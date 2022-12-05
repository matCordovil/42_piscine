/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-alm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 15:14:12 by made-alm          #+#    #+#             */
/*   Updated: 2022/08/30 19:31:38 by made-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;
	int	i;

	res = 1;
	i = 1;
	if (power < 0)
		return (0);
	else if (nb == 0 && power == 0)
		return (1);
	else
	{
		while (i <= power)
		{
			res *= nb;
			i++;
		}
	}
	return (res);
}

/*#include<stdio.h>

int	main(void)
{
	printf("%d\n", ft_iterative_power(4, -7));
	printf("%d\n", ft_iterative_power(0, 0));
	printf("%d\n", ft_iterative_power(2, 54));
	printf("%d\n", ft_iterative_power(1, 54));
	printf("%d\n", ft_iterative_power(2, 3));
	printf("%d\n", ft_iterative_power(5, 2));
	printf("%d\n", ft_iterative_power(6, 3));
	printf("%d\n", ft_iterative_power(5, 0));
}*/
