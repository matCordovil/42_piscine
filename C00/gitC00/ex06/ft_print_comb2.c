/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-alm <made-alm@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 12:50:29 by made-alm          #+#    #+#             */
/*   Updated: 2022/08/20 15:59:59 by made-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	esccar(char c)
{
	write(1, &c, 1);
}

void	escnum(char q, char w)
{
	esccar((q / 10) + '0');
	esccar((q % 10) + '0');
	esccar(' ');
	esccar((w / 10) + '0');
	esccar((w % 10) + '0');
	if (q != 98)
	{
		esccar(',');
		esccar(' ');
	}
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
			escnum(x, y);
			y += 1;
		}
		x += 1;
	}
}
