/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-alm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:48:20 by made-alm          #+#    #+#             */
/*   Updated: 2022/08/29 11:49:53 by made-alm         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	y;
	int	z;

	y = str_len(dest);
	z = 0;
	while (src[z] != '\0')
	{
		dest[y] = src[z];
		y += 1;
		z += 1;
	}
	dest[y] = '\0';
	return (dest);
}

/*#include<stdio.h>
#include<string.h>

int	main(void)
{
	char	dest[50] = "abc";
	char	dest2[50] = "abc";
	char	dest3[50] = "abc";
	char	dest4[50] = "abc";
	
	printf("%s\n", ft_strcat(dest, "def"));
	printf("%s\n", strcat(dest2, "def"));
	printf("%s\n", ft_strcat(dest3, ""));
	printf("%s\n", strcat(dest4, ""));
}*/
