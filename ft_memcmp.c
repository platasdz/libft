/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: platas <platas@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 12:35:17 by platas            #+#    #+#             */
/*   Updated: 2022/09/23 13:22:49 by platas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*temp1;
	unsigned char	*temp2;
	size_t			i;

	temp1 = (unsigned char *) s1;
	temp2 = (unsigned char *) s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (*temp1 != *temp2)
			return (*temp1 - *temp2);
		temp1++;
		temp2++;
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

	printf("%d \n", ft_memcmp(a, c, 4));
	printf("%d \n", ft_memcmp(a, b, 4));
	printf("%d \n", ft_memcmp(b, c, 4));
	printf("\n");
	printf("%d \n", ft_memcmp(a, c, 4));
	printf("%d \n", ft_memcmp(a, b, 4));
	printf("%d \n", ft_memcmp(b, c, 4));
}*/