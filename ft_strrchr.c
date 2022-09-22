/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: platas <platas@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 10:54:56 by platas            #+#    #+#             */
/*   Updated: 2022/09/22 11:12:03 by platas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	len;

	if (!str)
		return (NULL);
	len = ft_strlen(str);
	while (len >= 0)
	{
		if (str[len] == (char)c)
			return ((char *)str + len);
		len--;
	}
	return (NULL);
}
/*
int main()
{
	char *ret = ft_strrchr("rotijk", 'j');
	char *rat = strrchr("rotijk", 'j');
	printf("The substring is: %s\n", ret);
	printf("The substring is: %s\n", rat);
}*/