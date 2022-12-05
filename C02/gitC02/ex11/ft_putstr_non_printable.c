/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-alm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 13:37:43 by made-alm          #+#    #+#             */
/*   Updated: 2022/08/27 12:26:28 by made-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
#include<unistd.h>

void	esc(char a)
{
	write(1, &a, 1);
}

int	printable_or_not(int x)
{
	if (x <= 31 || x >= 127)
		return (0);
	else
		return (1);
}

void	esc_not_print(int y)
{
	long int	h;

	h = y;
	if (h >= 156)
	{
		esc_not_print(h / 16);
		esc_not_print(h % 16);
	}
	else
	{
		esc('\\');
		esc("0123456789abcdef"[h / 16]);
		esc("0123456789abcdef"[h % 16]);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	z;

	z = 0;
	while (str[z] != '\0')
	{
		if (printable_or_not(str[z]) == 1)
			esc(str[z]);
		else
			esc_not_print(str[z]);
		z += 1;
	}
}

/*int	main(void)
{
	char	str[7] = "k7uDo\f";
	
	ft_putstr_non_printable(str);
}*/
