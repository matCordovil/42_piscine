/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-alm <made-alm@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 09:57:17 by made-alm          #+#    #+#             */
/*   Updated: 2022/09/02 09:57:18 by made-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	range = malloc((max - min) * sizeof(*range));
	if (!(range))
		return (0);
	while (min < max)
	{
		range[i] = min;
		i++;
		min++;
	}
	return (range);
}

/*#include<stdio.h>

int	main(void)
{
	int	i;
	int	*res;
	int	min;
	int	max;

	min = 8;
	max = 6;
	i = 0;
	res = ft_range(min, max);
	while (i < (max - min))
	{
		printf("%d ", res[i]);
		i++;
	}
	return (0);
}*/
