/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: platas <platas@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 09:21:12 by platas            #+#    #+#             */
/*   Updated: 2022/09/30 11:37:15 by platas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_1;
	size_t	i;
	char	*ns;

	if (!s1 || !s2)
		return (NULL);
	len_1 = ft_strlen(s1);
	ns = (char *)malloc(sizeof(char) * ((len_1 + ft_strlen(s2)) + 1));
	if (!ns)
		return (NULL);
	i = -1;
	while (s1[++i])
		ns[i] = s1[i];
	i = -1;
	while (s2[++i])
	{
		ns[len_1] = s2[i];
		len_1++;
	}
	ns[len_1] = 0;
	return (ns);
}
