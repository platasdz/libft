/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: platas <platas@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 12:08:23 by platas            #+#    #+#             */
/*   Updated: 2022/09/21 12:50:11 by platas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*temp;
	size_t			i;

	if (!s)
		return (NULL);
	temp = (unsigned char *) s;
	i = 0;
	while (i < n && temp)
	{
		if (temp[i] == (unsigned char) c)
			return ((void *)&s[i]);
		i++;
	}
	return (NULL);
}
/*
int	main()
{
	void *a = ft_memchr("tres", 'r', 6);
	printf("%s", (char *)a);
	void *b = memchr("tres", 'r', 6);
	printf("%s", (char *)b);
}*/