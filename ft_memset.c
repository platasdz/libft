/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: platas <platas@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 10:17:44 by platas            #+#    #+#             */
/*   Updated: 2022/09/19 09:28:19 by platas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*temp;

	i = 0;
	temp = (unsigned char *) b;
	while (i < len)
	{
		temp[i] = (unsigned char) c;
		i++;
	}
	return (b);
}
/*
int main()
{
	char u[10];
	char *a = (char *)ft_memset(u, 'a', 2);
	char z[10];
	char *b = (char *)memset(z, 'b', 2);
	printf("%s\n%s\n", a, b);
}*/