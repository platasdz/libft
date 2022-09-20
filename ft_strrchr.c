/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: platas <platas@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 10:54:56 by platas            #+#    #+#             */
/*   Updated: 2022/09/15 11:52:49 by platas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(char *str)
{
	size_t	cont;

	cont = 0;
	while (*str != 0)
	{
		str++;
		cont++;
	}
	return (cont);
}

char	*ft_strrchr(const char *str, int c)
{
	size_t	len;

	len = ft_strlen((char *)str);
	if ((char)c == 0)
		return ((char *)str + len);
	while (len > 0)
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