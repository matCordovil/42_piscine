/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-alm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 08:28:52 by made-alm          #+#    #+#             */
/*   Updated: 2022/08/22 16:23:55 by made-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//tab + y, tab + size - y - 1
//&tab[y], &tab[y + 1]

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
	int	y;
	
	y = 0;
	while (y < size / 2)
	{
		switchpos(&tab[y], &tab[size - y - 1]);
		y += 1;
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
