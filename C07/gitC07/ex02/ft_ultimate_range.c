/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-alm <made-alm@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 11:34:53 by made-alm          #+#    #+#             */
/*   Updated: 2022/09/02 11:34:55 by made-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*range_minmax;
	int	i;

	if (min >= max)
		return (0);
	range_minmax = malloc((max - min) * sizeof(int));
	i = 0;
	while (min < max)
	{
		range_minmax[i] = min;
		i++;
		min++;
	}
	*range = range_minmax;
	return (max - min);
}
