/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testeC1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-alm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 08:28:52 by made-alm          #+#    #+#             */
/*   Updated: 2022/08/22 08:28:56 by made-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	switchpos(int *a, int *b)
{
	int	x;

	x = *a;
	*a = *b;
	*b = x;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	z;
	int	y;
	
	z = 0;
	while (z < size)
	{
		y = 0;
		while (y < size)
		{
			if (tab[y] > tab[y + 1])
			{
				switchpos(&tab[y], &tab[y + 1]);
			}
			y += 1;
		}
		z += 1;
	}
}

int	main(void)
{
	int	ar[] = {1, 2, 3, 4, 5, 6, 7, 8};
	int	y;
		
	ft_rev_int_tab(ar, 8);
	
	y = 0;
	while (y < 8)
	{
		printf("%d", ar[y]);
		y += 1;
	}
}
