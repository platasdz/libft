/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: platas <platas@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 13:00:01 by platas            #+#    #+#             */
/*   Updated: 2022/09/15 11:52:36 by platas           ###   ########.fr       */
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
	while (i < n)
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
	char haystack[20] = "TutorialsPoint oint";
	char needle[6] = "oint";
	char *ret;
	char *rat;

	ret = strnstr(haystack, needle, 13);
	rat = ft_strnstr(haystack, needle, 13);
	printf("The substring is: %s\n", ret);
	printf("The substring is: %s\n", rat);

	return (0);
}*/