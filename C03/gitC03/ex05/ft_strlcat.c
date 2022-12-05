/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-alm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 15:14:24 by made-alm          #+#    #+#             */
/*   Updated: 2022/08/29 11:50:41 by made-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	str_len(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
		x++;
	return (x);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	res;

	i = str_len(dest);
	j = 0;
	if (size > i)
		res = i + str_len(src);
	else
		res = str_len(src) + size;
	while (src[j] != '\0' && (i + 1) < size)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (res);
}

/*#include<stdio.h>

int	main(void)
{
	char	arr[3] = "go";

	printf("%d\n", str_len(arr));
	printf("%d\n", ft_strlcat(arr, "fromhere", 4));
	printf("%s\n", arr);
	printf("%d\n", str_len(arr));
}*/
