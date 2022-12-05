/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-alm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 18:38:43 by made-alm          #+#    #+#             */
/*   Updated: 2022/08/31 14:36:27 by made-alm         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	else if (ft_is_prime(nb))
		return (nb);
	else
	{
		while (!(ft_is_prime(nb)))
			nb++;
	}
	return (nb);
}

/*#include<stdio.h>

int	main(void)
{
	printf("Testing -1: %d\n", ft_find_next_prime(-1));
	printf("Testing 0: %d\n", ft_find_next_prime(0));
	printf("Testing 1: %d\n", ft_find_next_prime(1));
	printf("Testing 2: %d\n", ft_find_next_prime(2));
	printf("Testing 3: %d\n", ft_find_next_prime(3));
	printf("Testing 4: %d\n", ft_find_next_prime(4));
	printf("Testing 5: %d\n", ft_find_next_prime(5));
	printf("Testing 2147483644: %d\n", ft_find_next_prime(2147483644));
	printf("Testing 300: %d\n", ft_find_next_prime(300));
	printf("Testing 422: %d\n", ft_find_next_prime(422));
	printf("Testing 510: %d\n", ft_find_next_prime(510));
	printf("Testing 666: %d\n", ft_find_next_prime(666));
	printf("Testing 715: %d\n", ft_find_next_prime(715));
	printf("Testing 859: %d\n", ft_find_next_prime(859));
	printf("Testing 887: %d\n", ft_find_next_prime(887));
	printf("Testing 919: %d\n", ft_find_next_prime(919));
	printf("Testing 1486259135: %d\n", ft_find_next_prime(1486259135));
}*/
