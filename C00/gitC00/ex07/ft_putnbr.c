/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-alm <made-alm@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 14:11:10 by made-alm          #+#    #+#             */
/*   Updated: 2022/08/20 16:01:01 by made-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

void	esccar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int	h;

	h = nb;
	if (h < 0)
	{
		esccar('-');
		h *= -1;
	}
	if (h >= 10)
	{
		ft_putnbr(h / 10);
		ft_putnbr(h % 10);
	}
	else
	{
		esccar(h + '0');
	}
}
