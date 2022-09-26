/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: platas <platas@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 09:21:12 by platas            #+#    #+#             */
/*   Updated: 2022/09/26 12:23:12 by platas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_1;
	size_t	i;
	size_t	j;
	char	*ns;

	i = 0;
	j = 0;
	len_1 = ft_strlen(s1);
	ns = (char *)malloc(sizeof(char) * (len_1 + ft_strlen(s2) + 1));
	if (!ns)
		return (NULL);
	while (j <= ft_strlen(s2))
	{
		while (len_1 > 0)
		{
			ns[i] = s1[i];
			i++;
			len_1--;
		}
		ns[i] = s2[j];
		i++;
		j++;
	}
	ns[i] = 0;
	return (ns);
}
/*
int	main()
{
	char	*first = "This is ";
	char	*last = "a potentially long string";
	char	*new;

	puts(first);
	puts(last);
	new = ft_strjoin(first, last);
	puts(new);
}*/