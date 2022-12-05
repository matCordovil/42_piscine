/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-alm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 16:40:25 by made-alm          #+#    #+#             */
/*   Updated: 2022/08/30 13:40:46 by made-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
		i++;
	return (i);
}

int	ft_sign(char *str)
{
	int		i;
	char	sign;

	i = ft_isspace(str);
	sign = 1;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign *= -1;
			i++;
		}
		else
			i++;
	}
	return (sign);
}

int	ft_isnbr(char *str)
{
	int	i;

	i = ft_isspace(str);
	while (str[i] == '-' || str[i] == '+')
		i++;
	return (i);
}

int	ft_atoi(char *str)
{
	int	i;
	int	final_sign;
	int	r;

	i = ft_isnbr(str);
	final_sign = ft_sign(str);
	r = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		r *= 10;
		r += (str[i] - '0');
		i++;
	}
	return (final_sign * r);
}

/*#include<stdio.h>

int	main(int argc, char **argv)
{
	if (argc != 2)
		printf("One, and only one, string allowed");
	else
		printf("%d", ft_atoi(argv[1]));
}*/
