/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: platas <platas@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 13:00:01 by platas            #+#    #+#             */
/*   Updated: 2022/10/03 18:03:46 by platas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle[i] == 0)
		return ((char *)haystack);
	while (i < n && haystack[i] != 0)
	{
		while (haystack[i + j] == needle[j] && haystack[i + j] && (i + j) < n)
			j++;
		if (needle[j] == 0)
			return ((char *)haystack + i);
		i++;
		j = 0;
	}
	return (NULL);
}
