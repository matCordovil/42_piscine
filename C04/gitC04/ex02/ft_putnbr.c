/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-alm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 15:07:09 by made-alm          #+#    #+#             */
/*   Updated: 2022/08/30 10:15:54 by made-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	esc(char y)
{
	write(1, &y, 1);
}

void	ft_putnbr(int nb)
{
	long int	x;

	x = nb;
	if (x < 0)
	{
		esc('-');
		x = -x;
	}
	if (x > 9)
	{
		ft_putnbr(x / 10);
		ft_putnbr(x % 10);
	}
	else
		esc(x + '0');
}

/*int	main(void)
{
	ft_putnbr(5);
	esc('\n');
	ft_putnbr(-7);
	esc('\n');
	ft_putnbr(42);
	esc('\n');
	ft_putnbr(-56);
	esc('\n');
	ft_putnbr(-2147483648);
	esc('\n');
	ft_putnbr(2147483647);
	esc('\n');
}*/
