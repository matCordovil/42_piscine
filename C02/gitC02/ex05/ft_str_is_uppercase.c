/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-alm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 13:37:43 by made-alm          #+#    #+#             */
/*   Updated: 2022/08/24 12:10:50 by made-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	y;

	y = 0;
	while (str[y] != '\0')
	{
		if (str[y] >= 'A' && str[y] <= 'Z')
			y += 1;
		else
			return (0);
	}
	return (1);
}

/*int	main(void)
{
	printf("%d", ft_str_is_uppercase(""));
}*/
