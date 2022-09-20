/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: platas <platas@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 10:10:40 by platas            #+#    #+#             */
/*   Updated: 2022/09/20 11:53:20 by platas           ###   ########.fr       */
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

size_t	ft_start(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (j != ft_strlen(s1))
	{
		while (set[i] == s1[j] && i != ft_strlen(set))
			i++;
		if (i != ft_strlen(set))
			j++;
		else
			return (j);
	}
	return (NULL);
}

size_t	ft_end(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(s1);
	while (j > 0)
	{
		while (set[i] == s1[j] && i != ft_strlen(set))
			i++;
		if (i != ft_strlen(set))
			j--;
		else
			return (j);
	}
	return (NULL);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ns;
	size_t	start;
	size_t	end;

	start = ft_start(s1, set);
	end = ft_end(s1, set);
	if (!s1)
		return (NULL);
	if (!set)
		return (s1);
	if (start >= end)
		return (NULL);
	ns = (char *)malloc(sizeof(char) * end - start);
	if (!ns)
		return (NULL);
	while (start < end)
	{
		*ns = s1[start];
		start++;
		ns++;
	}
	*ns = 0;
	return (ns);
}
/*
int	main()
{
	char	*last = "ao poatentially long string";
	char	*new;
	char	carac[3] = "ao";

	puts(last);
	new = ft_strtrim(last, carac);
	puts(new);
}
*/