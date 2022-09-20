/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: platas <platas@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 16:06:51 by platas            #+#    #+#             */
/*   Updated: 2022/09/15 12:37:40 by platas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dest, const void *restrict src, size_t n)
{
	size_t	i;
	char	*temp_d;
	char	*temp_s;

	i = 0;
	temp_d = (char *) dest;
	temp_s = (char *) src;
	while (i < n && temp_s)
	{
		temp_d[i] = temp_s[i];
		i++;
	}
	return (dest);
}
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

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*temp;

	len = ft_strlen((char *)s1) + 1;
	temp = (char *)malloc(sizeof(char) * len);
	if (!temp)
		return (NULL);
	ft_memcpy(temp, s1, len);
	return (temp);
}
/*
int main()
{
    char source[] = "HOlaholiita";
	char *target = ft_strdup(source);

	printf("%s", target);

	printf("\n");
	char source1[] = "HOlaholiita";
	char *target1 = strdup(source1);

	printf("%s", target1);
	return 0;
}*/