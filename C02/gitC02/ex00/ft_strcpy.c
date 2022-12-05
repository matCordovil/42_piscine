/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-alm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 13:37:43 by made-alm          #+#    #+#             */
/*   Updated: 2022/08/24 20:15:20 by made-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include<stdio.h>
#include<string.h>*/

char	*ft_strcpy(char *dest, char *src)
{
	int	x;

	x = 0;
	while (src[x] != '\0')
	{
		dest[x] = src[x];
		x += 1;
	}
	dest[x] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	dest[5];
	char	arr[5];

	ft_strcpy(dest, "abcd");
	printf("%s\n", dest);
	printf("%ld\n", sizeof (dest));
	strcpy(arr, "abcd");
	printf("%s\n", arr);
	printf("%ld\n", sizeof (arr));
}*/
