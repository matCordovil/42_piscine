/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-alm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:30:03 by made-alm          #+#    #+#             */
/*   Updated: 2022/08/30 19:31:15 by made-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (nb == 0 && power == 0)
		return (1);
	else if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

/*#include<stdio.h>

int	main(void)
{
	printf("%d\n", ft_recursive_power(4, -7));
	printf("%d\n", ft_recursive_power(0, 0));
	printf("%d\n", ft_recursive_power(2, 54));
	printf("%d\n", ft_recursive_power(1, 54));
	printf("%d\n", ft_recursive_power(2, 3));
	printf("%d\n", ft_recursive_power(5, 2));
	printf("%d\n", ft_recursive_power(6, 3));
	printf("%d\n", ft_recursive_power(5, 0));
}*/
