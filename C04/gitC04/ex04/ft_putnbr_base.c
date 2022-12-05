/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-alm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 19:23:05 by made-alm          #+#    #+#             */
/*   Updated: 2022/08/30 15:55:51 by made-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	check_base(char *str)
{
	int	i;
	int	len;

	len = ft_strlen(str);
	i = 0;
	if (str[i] == '\0' || len == 1)
		return (0);
	else
	{
		while (str[i + 1] != '\0')
		{	
			if (str[i] == str[i + 1])
				return (0);
			i++;
		}
		i = 0;
		while (str[i] != '\0')
		{
			if (str[i] <= 32 || str[i] >= 127 || str[i] == '+' || str[i] == '-')
				return (0);
			i++;
		}
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int				flag;
	unsigned int	len_base;
	unsigned int	n;

	flag = check_base(base);
	len_base = ft_strlen(base);
	n = nbr;
	if (flag == 1)
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			n *= (-1);
		}
		if (n < len_base)
			ft_putchar(base[n]);
		else
		{
			ft_putnbr_base(n / len_base, base);
			ft_putnbr_base(n % len_base, base);
		}
	}
}

/*int	main(void)
{
	ft_putnbr_base(126, "01+34567");
	write(1, "\n", 1);
	ft_putnbr_base(127, "0123456789ABCDEF");
	write(1, "\n", 1);
	ft_putnbr_base(112, "*12345=7");
	write(1, "\n", 1);
	ft_putnbr_base(4, "SA");
	write(1, "\n", 1);
	ft_putnbr_base(13, "sorto");
	write(1, "\n", 1);
}*/
