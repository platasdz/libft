/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: platas <platas@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 14:56:04 by platas            #+#    #+#             */
/*   Updated: 2022/09/23 12:23:41 by platas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	if (size == 0)
	{
		return (ft_strlen(src));
	}
	while ((i + 1) < size && *(src + i) != 0)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	if (size > 0)
		*(dest + i) = 0;
	while (*(src + len))
		len++;
	return (len);
}
/*
int	main(void)
{
	char a[10]="saludos";
	char b[10]="";

	printf("%zu\n", ft_strlcpy(b, a, 4));
	printf("%s\n%s\n", a, b);
	printf("%zu\n", strlcpy(b, a, 4));
	printf("%s\n%s", a, b);
}*/