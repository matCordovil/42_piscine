/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testC.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-alm <made-alm@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 15:37:04 by made-alm          #+#    #+#             */
/*   Updated: 2022/08/19 15:37:07 by made-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	esccar(char a)
{
	write(1, &a, 1);
}

void	esc2car(char b)
{
	write(1, &b, 2);
}

void	escnum(char q, char w)
{
	esc2car(q);
	esc2car(w);
	esccar(',');
	esccar(' ');
}

void	esclastnum(char q, char w)
{
	esc2car(q);
	esc2car(w);
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			if (x == 98)
			{
				esclastnum(x, y);
				y += 1;
			}
			else
			{
				escnum(x, y);
				y += 1;
			}
		}
		x += 1;
	}
}
int	main(void)
{
	ft_print_comb2();
}
