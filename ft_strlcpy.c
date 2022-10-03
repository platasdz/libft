/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: platas <platas@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 14:56:04 by platas            #+#    #+#             */
/*   Updated: 2022/10/03 18:03:20 by platas           ###   ########.fr       */
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
