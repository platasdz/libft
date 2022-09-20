/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: platas <platas@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 09:07:57 by platas            #+#    #+#             */
/*   Updated: 2022/09/16 10:10:21 by platas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	int		i;

	i = 0;
	sub = (char *)malloc(sizeof(char) * len + 1);
	if (!sub)
		return (NULL);
	while (len > 0)
	{
		sub[i] = s[start];
		start++;
		i++;
		len--;
	}
	return (sub);
}
/*
int	main()
{
	char	*last = "a potentially long string";
	char	*new;

	puts(last);
	new = ft_substr(last, 9, 7);
	puts(new);
}*/