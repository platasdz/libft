/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: platas <platas@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 14:56:25 by platas            #+#    #+#             */
/*   Updated: 2022/09/22 11:01:36 by platas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t	i;

	i = 0;
	while (i <= ft_strlen(str))
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