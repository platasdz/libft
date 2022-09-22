/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: platas <platas@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 13:15:48 by platas            #+#    #+#             */
/*   Updated: 2022/09/21 12:05:32 by platas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ns;
	size_t	i;

	i = 0;
	ns = (char *)malloc(sizeof(char) * ft_strlen((char *)s));
	if (!ns)
		return (NULL);
	while (s[i] != 0)
	{
		ns[i] = f(i, s[i]);
		i++;
	}
	return (ns);
}
/*
int	main()
{
	const char	*last = "ao poatentially long string";
	//puts(ft_strmapi(last, ()));
}*/