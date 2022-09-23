/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: platas <platas@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 10:54:56 by platas            #+#    #+#             */
/*   Updated: 2022/09/23 11:38:28 by platas           ###   ########.fr       */
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
/*
int main()
{
	char *ret = ft_strrchr("rotijk", 'z');
	char *rat = strrchr("rotijk", 'z');
	printf("The substring is: %s\n", ret);
	printf("The substring is: %s\n", rat);
}*/