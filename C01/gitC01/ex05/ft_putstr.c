/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-alm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 08:28:52 by made-alm          #+#    #+#             */
/*   Updated: 2022/08/22 19:10:24 by made-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include<stdio.h>*/
#include<unistd.h>

void	esccar(char x)
{
	write(1, &x, 1);
}

void	ft_putstr(char *str)
{
	int	y;

	y = 0;
	while (str[y] != '\0')
	{
		esccar(str[y]);
		y += 1;
	}
}

/*int	main(void)
{
	ft_putstr("abcdefgh");
}*/
