/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-alm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:16:02 by made-alm          #+#    #+#             */
/*   Updated: 2022/08/29 11:49:21 by made-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i += 1;
	}
	if (s2[i] != '\0' && i < n)
		return (s1[i] - s2[i]);
	return (0);
}

/*#include<stdio.h>
#include<string.h>

int	main(void)
{
	char	s1[5] = "abcd";
	char	s2[5] = "abCd";
	char	s3[5] = "abcd";
	char	s4[6] = "abcde";
	printf("%d\n", ft_strncmp(s1, s2, 3));
	printf("%d\n", strncmp(s1, s2, 3));
	printf("%d\n", ft_strncmp(s1, s3, 2));
	printf("%d\n", strncmp(s1, s3, 2));
	printf("%d\n", ft_strncmp(s2, s3, 3));
	printf("%d\n", strncmp(s2, s3, 3));
	printf("%d\n", ft_strncmp(s1, s4, 5));
	printf("%d\n", strncmp(s1, s4, 5));
}*/
