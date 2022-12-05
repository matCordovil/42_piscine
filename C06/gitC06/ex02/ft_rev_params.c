/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-alm <made-alm@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 20:12:17 by made-alm          #+#    #+#             */
/*   Updated: 2022/08/30 20:12:17 by made-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	int	i;

	i = argc;
	if (argc > 0)
	{
		while (i > 1)
		{
			i--;
			write(1, argv[i], str_len(argv[i]));
			write(1, "\n", 1);
		}
	}
}
