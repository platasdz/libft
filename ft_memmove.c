/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: platas <platas@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 15:16:41 by platas            #+#    #+#             */
/*   Updated: 2022/09/22 10:59:37 by platas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = n;
	if (dest < src)
		return (ft_memcpy(dest, src, n));
	else
	{
		while (i--)
		{
			*(unsigned char *)(dest + i) = *(unsigned char *)(src + i);
		}
		return (dest);
	}
}
/*
int main()
{	
	char a[10]="saludos";
	char b[10]="";

	printf("%s\n", (char *)ft_memmove(b, a, 2));
	printf("%s\n%s\n", a, b);
	printf("\n");
	char e[10]="saludos";
	char t[10]="";
	printf("%s\n", (char *)memmove(t, e, 2));
	printf("%s\n%s", e, t);
}*/