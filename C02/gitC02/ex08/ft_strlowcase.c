/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-alm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 13:37:43 by made-alm          #+#    #+#             */
/*   Updated: 2022/08/24 12:09:38 by made-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

char	*ft_strlowcase(char *str)
{
	int	y;

	y = 0;
	while (str[y] != '\0')
	{
		if (str[y] >= 'A' && str[y] <= 'Z')
			str[y] += 32;
		y += 1;
	}
	return (str);
}

/*int	main(void)
{
	char	arr[8] = "GD7k9&AI";
	printf("%s", ft_strlowcase(arr));
}*/
