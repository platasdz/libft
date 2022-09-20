/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: platas <platas@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 15:16:41 by platas            #+#    #+#             */
/*   Updated: 2022/09/15 12:27:04 by platas           ###   ########.fr       */
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

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*temp_d;
	char	*temp_s;

	i = n;
	temp_d = (char *) dest;
	temp_s = (char *) src;
	if (dest < src)
	{
		return (ft_memcpy(dest, src, n));
	}
	else
	{
		while (i > 0)
		{
			temp_d[i] = temp_s[i];
			i--;
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