/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: platas <platas@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 10:10:40 by platas            #+#    #+#             */
/*   Updated: 2022/09/27 12:19:10 by platas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ns;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	len = ft_strlen(s1);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	while (len && ft_strchr(set, s1[len]))
		len--;
	ns = ft_substr(s1, 0, len +1);
	return (ns);
}
/*
int	main()
{
	char	*last = "   xxxtripouille   xxx";
	char	*carac = " x";

	puts(last);
	puts(ft_strtrim(last, carac));
}*/

/*
static size_t	ft_start(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	boo;

	j = 0;
	while (j < ft_strlen(s1))
	{
		boo = 0;
		i = 0;
		while (set[i] != 0)
		{
			if (set[i] != s1[j])
				boo++;
			i++;
		}
		if (boo == ft_strlen(set))
			return (j);
		j++;
	}		
	return (0);
}

static size_t	ft_end(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	boo;

	j = ft_strlen(s1) - 1;
	while (j >= 0)
	{
		boo = 0;
		i = 0;
		while (set[i] != 0)
		{
			if (set[i] != s1[j])
				boo++;
			i++;
		}
		if (boo == ft_strlen(set))
			return (j);
		j--;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ns;
	size_t	start;
	size_t	end;
	size_t	i;

	if (!s1)
		return (NULL);
	start = ft_start(s1, set);
	end = ft_end(s1, set);
	i = 0;
	if (start >= end)
		return (NULL);
	ns = (char *)malloc(sizeof(char) * (end - start) + 2);
	if (!ns)
		return (NULL);
	while (start <= end)
	{
		ns[i] = s1[start];
		start++;
		i++;
	}
	ns[i] = 0;
	return (ns);
}
*/