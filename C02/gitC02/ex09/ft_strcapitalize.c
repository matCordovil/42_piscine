/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-alm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 13:37:43 by made-alm          #+#    #+#             */
/*   Updated: 2022/08/24 12:07:57 by made-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

char	*ft_strcapitalize(char *str)
{
	int	allow_caps;
	int	y;

	ft_strlowcase(str);
	allow_caps = 1;
	y = 0;
	while (str[y] != '\0')
	{
		if (str[y] >= 'a' && str[y] <= 'z')
		{
			if (allow_caps)
			{
				str[y] -= 32;
				allow_caps = 0;
			}
		}
		else if (str[y] >= '0' && str[y] <= '9')
			allow_caps = 0;
		else
			allow_caps = 1;
		y += 1;
	}
	return (str);
}

/*#include<stdio.h>

int	main(void)
{
	char	arr[60] = "saluT, comMent tu vas ? 42Mots Quarante-deux; cinqute+et+un";
	printf("%s", ft_strcapitalize(arr));
}*/
