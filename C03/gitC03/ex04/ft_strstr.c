/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-alm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 19:23:01 by made-alm          #+#    #+#             */
/*   Updated: 2022/08/29 11:50:24 by made-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	y;
	int	z;

	if (to_find[0] == '\0')
		return (str);
	y = 0;
	while (str[y] != '\0')
	{
		z = 0;
		while (str[y + z] == to_find[z] && to_find[z] != '\0')
		{
			if (to_find[z + 1] == '\0')
				return (&str[y]);
			z += 1;
		}
		y += 1;
	}
	return (0);
}

/*#include<stdio.h>
#include<string.h>

int	main(void)
{
	printf("Searching for \"%s\" in \"%s\"\n", "", "eu xamume antoniu");
	printf("%s\n", ft_strstr("eu xamume antoniu", ""));
	printf("Searching for \"%s\" in \"%s\"\n", "", "eu xamume antoniu");
	printf("%s\n", strstr("eu xamume antoniu", ""));
	printf("\nSearching for \"%s\" in \"%s\"\n", "amu", "eu xamume antoniu");
        printf("%s\n", ft_strstr("eu xamume antoniu", "amu"));
	printf("Searching for \"%s\" in \"%s\"\n", "amu", "eu xamume antoniu");
        printf("%s\n", strstr("eu xamume antoniu", "amu"));
	printf("\nSearching for \"%s\" in \"%s\"\n", "banessa", "eu xamume antoniu");
        printf("%s\n", ft_strstr("eu xamume antoniu", "banessa"));
	printf("Searching for \"%s\" in \"%s\"\n", "banessa", "eu xamume antoniu");
        printf("%s\n", strstr("eu xamume antoniu", "banessa"));
}*/
