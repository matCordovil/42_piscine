/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-alm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 08:28:52 by made-alm          #+#    #+#             */
/*   Updated: 2022/08/22 21:29:30 by made-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include<stdio.h>
#include<unistd.h>*/

void	switchpos(int *a, int *b)
{
	int	x;

	x = *a;
	*a = *b;
	*b = x;
}

void	ft_sort_int_tab(int *tab, int size)
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
		size -= 1;
	}
}

/*int	main(void)
{
	int	ar[] = {1, 5, 3, 8, 7, 2, 4, 6};
	int	y;
		
	ft_rev_int_tab(ar, 8);
	
	y = 0;
	while (y < 8)
	{
		printf("%d", ar[y]);
		y += 1;
	}
}*/
