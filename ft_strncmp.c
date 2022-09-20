/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: platas <platas@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 11:43:03 by platas            #+#    #+#             */
/*   Updated: 2022/09/15 11:52:23 by platas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] != 0 || s2[i] != 0))
	{
		if ((unsigned char)s1[i] > (unsigned char)s2[i])
			return (1);
		if ((unsigned char)s2[i] > (unsigned char)s1[i])
			return (-1);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char a[] = "abcd";
	char b[] = "abCd";
	char c[] = "abcd";

	printf("%d \n", ft_strncmp(a, c, 3));
	printf("%d \n", ft_strncmp(a, b, 3));
	printf("%d \n", ft_strncmp(b, c, 3));
}*/