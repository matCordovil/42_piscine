/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-alm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 17:56:36 by made-alm          #+#    #+#             */
/*   Updated: 2022/08/31 14:36:58 by made-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	else if (nb % 2 == 0 && nb != 2)
		return (0);
	else
	{
		while (i <= nb / i)
		{
			if (nb % i == 0)
				return (0);
			else
				i++;
		}
	}
	return (1);
}

/*#include<stdio.h>

int	main(void)
{
	printf("Testing -1: %d\n", ft_is_prime(-1));
	printf("Testing 0: %d\n", ft_is_prime(0));
	printf("Testing 1: %d\n", ft_is_prime(1));
	printf("Testing 2: %d\n", ft_is_prime(2));
	printf("Testing 3: %d\n", ft_is_prime(3));
	printf("Testing 4: %d\n", ft_is_prime(4));
	printf("Testing 5: %d\n", ft_is_prime(5));
	printf("Testing 6: %d\n", ft_is_prime(6));
	printf("Testing 7: %d\n", ft_is_prime(7));
	printf("Testing 8: %d\n", ft_is_prime(8));
	printf("Testing 9: %d\n", ft_is_prime(9));
	printf("Testing 43: %d\n", ft_is_prime(43));
	printf("Testing 2147483647: %d\n", ft_is_prime(2147483647));
}*/
