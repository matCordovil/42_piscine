/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-alm <made-alm@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 10:15:18 by made-alm          #+#    #+#             */
/*   Updated: 2022/08/20 15:58:15 by made-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	esccar(char c)
{
	write(1, &c, 1);
}

void	escnum(char a, char b, char c)
{
	a = a + '0';
	b = b + '0';
	c = c + '0';
	esccar(a);
	esccar(b);
	esccar(c);
	if (a < '7')
	{
		esccar(',');
		esccar(' ');
	}
}

void	ft_print_comb(void)
{
	int	x;
	int	y;
	int	z;

	x = 0;
	while (x <= 7)
	{
		y = x + 1;
		while (y <= 8)
		{
			z = y + 1;
			while (z <= 9)
			{
				escnum(x, y, z);
				z += 1;
			}
			y += 1;
		}
		x += 1;
	}
}
