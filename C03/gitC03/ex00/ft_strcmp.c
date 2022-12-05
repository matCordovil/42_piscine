/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-alm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 14:53:44 by made-alm          #+#    #+#             */
/*   Updated: 2022/08/29 11:40:08 by made-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

/*#include<stdio.h>
#include<string.h>

int	main(void)
{
	char	s1[5] = "abcd";
	char	s2[5] = "abCd";
	char	s3[5] = "abc;";
	char	s4[5] = "abcd";
	printf("%d\n", ft_strcmp(s1, s2));
	printf("%d\n", strcmp(s1, s2));
	printf("%d\n", ft_strcmp(s1, s3));
	printf("%d\n", strcmp(s1, s3));
	printf("%d\n", ft_strcmp(s2, s3));
	printf("%d\n", strcmp(s2, s3));
	printf("%d\n", ft_strcmp(s1, s4));
	printf("%d\n", strcmp(s1, s4));
}*/
