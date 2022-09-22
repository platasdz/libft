/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: platas <platas@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 16:06:51 by platas            #+#    #+#             */
/*   Updated: 2022/09/22 12:38:50 by platas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	const size_t	len = ft_strlen((char *)s1) + 1;
	char			*temp;

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