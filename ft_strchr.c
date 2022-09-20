/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: platas <platas@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 14:56:25 by platas            #+#    #+#             */
/*   Updated: 2022/09/15 12:30:03 by platas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t	i;

	i = 0;
	if ((char) c == 0)
		return ((char *)&str[i]);
	while (str[i] != 0)
	{
		if (str[i] == (char) c)
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}
/*
int	main()
{
	void *a = ft_strchr("tres", 'e');
	printf("%s", a);
	void *b = strchr("tres", 'e');
	printf("%s", b);
}*/