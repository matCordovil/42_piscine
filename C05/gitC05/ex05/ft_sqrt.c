/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-alm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 17:16:58 by made-alm          #+#    #+#             */
/*   Updated: 2022/08/31 11:16:46 by made-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	x;

	x = 1;
	if (nb <= 0)
		return (0);
	else
	{
		while (x <= nb / x)
		{
			if (x * x == nb)
				return (x);
			else
				x++;
		}
		return (0);
	}
}

/*#include<stdio.h>

int	main(void)
{
	printf("%d\n", ft_sqrt(0));
	printf("%d\n", ft_sqrt(1));
	printf("%d\n", ft_sqrt(4));
	printf("%d\n", ft_sqrt(9));
	printf("%d\n", ft_sqrt(2147483647));
	printf("%d\n", ft_sqrt(2));
	printf("%d\n", ft_sqrt(1));
	printf("%d\n", ft_sqrt(3));
}*/
