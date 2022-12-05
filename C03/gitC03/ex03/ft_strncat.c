/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-alm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 16:26:17 by made-alm          #+#    #+#             */
/*   Updated: 2022/08/29 11:50:10 by made-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	str_len(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
		x += 1;
	return (x);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				y;
	unsigned int	z;

	y = str_len(dest);
	z = 0;
	if (nb == 0)
		return (dest);
	else
	{
		while (src[z] != '\0' && z < nb)
		{
			dest[y] = src[z];
			y += 1;
			z += 1;
		}
		dest[y] = '\0';
	}
	return (dest);
}

/*#include<stdio.h>
#include<string.h>

int	main(void)
{
	char	arr[90] = "goaway";
	char	str[90] = "goaway";
	
	printf("%d\n", str_len(arr));
	printf("%s\n", ft_strncat(arr, "fromhere", 5));
	printf("%s\n", arr);
	printf("%d\n", str_len(arr));
	printf("%d\n", str_len(str));
	printf("%s\n", strncat(str, "fromhere", 5));
	printf("%s\n", str);
	printf("%d\n", str_len(str));
}*/
