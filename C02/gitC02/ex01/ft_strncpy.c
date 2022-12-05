/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-alm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 13:37:43 by made-alm          #+#    #+#             */
/*   Updated: 2022/08/24 12:11:08 by made-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	x;

	x = 0;
	while (src[x] != '\0' && x < n)
	{
		dest[x] = src[x];
		x += 1;
	}
	while (x < n)
	{
		dest[x] = '\0';
		x += 1;
	}
	return (dest);
}

/*int	main(void)
{
	char	arr[20];

	ft_strncpy(arr, "abcdefghijklmnopqrstuvwxyz", 20);
	printf("%s", arr);
	ft_strncpy(arr, "abcdef", 20);
	printf("%s\n", arr);
	printf("%d", arr[10]);
}*/
