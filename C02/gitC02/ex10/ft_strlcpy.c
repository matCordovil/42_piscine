/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-alm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 13:37:43 by made-alm          #+#    #+#             */
/*   Updated: 2022/08/26 14:20:56 by made-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	x;

	x = 0;
	if (size == 0)
		dest = "";
	else
	{
		while (src[x] != '\0' && x < size - 1)
		{
			dest[x] = src[x];
			x += 1;
		}
		dest[x] = '\0';
	}
	while (src[x] != '\0')
		x += 1;
	return (x);
}

/*#include<stdio.h>

int	main(void)
{
	char	arr[3];

	printf("%d\n", ft_strlcpy(arr, "abcdef", 0));
	printf("%s\n", arr);
}*/
