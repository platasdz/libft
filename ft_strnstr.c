/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: platas <platas@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 13:00:01 by platas            #+#    #+#             */
/*   Updated: 2022/09/27 11:32:22 by platas           ###   ########.fr       */
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
	while (i < n && haystack[0] != 0)
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
/*
int main(void)
{
	char *ret;
	char *rat;

	ret = strnstr("", "coucou", -1);
	rat = ft_strnstr("", "coucou", -1);
	printf("The substring is: %s\n", ret);
	printf("The substring is: %s\n", rat);

	return (0);
}*/