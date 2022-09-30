/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: platas <platas@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 14:57:12 by platas            #+#    #+#             */
/*   Updated: 2022/09/30 09:34:15 by platas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len_d;
	size_t	len_s;

	if ((!src || !dest) && size == 0)
		return (0);
	len_d = ft_strlen(dest);
	len_s = ft_strlen(src);
	if (size <= 0)
		return (len_s);
	i = len_d;
	j = 0;
	if (size > 0 && size - 1 > len_d)
	{
		while (src[j] && i < size - 1)
			dest[i++] = src[j++];
		dest[i] = 0;
	}
	if (len_d >= size)
		len_d = size;
	return (len_d + len_s);
}
/*
int main()
{
	size_t	size = 12;

	char	first[9] = "This is ";
	char	last[26] = "a potentially long string";
	size_t	t;

	t = strlcat(last, first, size);

	puts(last);

	printf("Value returned: %zu\n",t);
	if (t > size)
		puts("String truncated");
	else
		puts("String was fully copied");

write(1, "\n", 1);	

	char	first1[9] = "This is ";
	char	last2[26] = "a potentially long string";
	size_t	r;

	r = ft_strlcat(last2, first1, size);

	puts(last2);

	printf("Value returned: %zu\n",r);
	if (r > size)
		puts("String truncated");
	else
		puts("String was fully copied");
}*/
