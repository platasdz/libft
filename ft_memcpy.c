/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: platas <platas@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 15:21:54 by platas            #+#    #+#             */
/*   Updated: 2022/09/15 12:24:52 by platas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dest, const void *restrict src, size_t n)
{
	size_t	i;
	char	*temp_d;
	char	*temp_s;

	i = 0;
	temp_d = (char *) dest;
	temp_s = (char *) src;
	while (i < n && temp_s)
	{
		temp_d[i] = temp_s[i];
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