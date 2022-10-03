/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: platas <platas@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 10:54:56 by platas            #+#    #+#             */
/*   Updated: 2022/10/03 18:03:48 by platas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char	*temp;

	temp = str;
	while (*str)
		str++;
	if (c == 0)
		return ((char *)str);
	while (temp <= str)
	{
		if (*str == (char)c)
			return ((char *)str);
		str--;
	}
	return (NULL);
}
