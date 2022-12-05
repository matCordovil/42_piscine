/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-alm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 08:28:52 by made-alm          #+#    #+#             */
/*   Updated: 2022/08/22 21:29:02 by made-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include<stdio.h>
#include<unistd.h>*/

int	ft_strlen(char *str)
{
	int	y;

	y = 0;
	while (str[y] != '\0')
	{
		y += 1;
	}
	return (y);
}

/*int	main(void)
{
	printf("%d", ft_strlen("asddhaerhdf"));
}*/
