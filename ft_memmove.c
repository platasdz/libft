/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: platas <platas@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 15:16:41 by platas            #+#    #+#             */
/*   Updated: 2022/09/30 11:36:33 by platas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest && !src)
		return (NULL);
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
