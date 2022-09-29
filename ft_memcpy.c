/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: platas <platas@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 15:21:54 by platas            #+#    #+#             */
/*   Updated: 2022/09/29 15:01:55 by platas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest && !src)
		return (NULL);
	i = 0;
	while (i < n)
	{
		*(unsigned char *)(dest + i) = *(unsigned char *)(src + i);
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char a[10]="saludos";
	char b[10]="";

	printf("%s\n", (char *)ft_memcpy(b, a, 2));
	printf("%s\n%s\n", a, b);
	printf("\n");
	char e[10]="saludos";
	char t[10]="";
	printf("%s\n", (char *)memcpy(t, e, 2));
	printf("%s\n%s", e, t);
}*/