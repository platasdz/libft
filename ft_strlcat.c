/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: platas <platas@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 14:57:12 by platas            #+#    #+#             */
/*   Updated: 2022/09/16 09:06:50 by platas           ###   ########.fr       */
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

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	int		i;
	int		j;
	size_t	len_d;
	size_t	len_s;

	len_d = ft_strlen(dest);
	len_s = ft_strlen((char *)src);
	i = len_d;
	j = 0;
	if (size > 0 && size - 1 > len_d)
	{
		while (src[j] && i < (int)size - 1)
		{
			dest[i] = src[j];
			j++;
			i++;
		}
		dest[i] = 0;
		//return (len_d + len_s);
	}
	if (len_d >= size)
		len_d = size;
	return (len_d + len_s);
}

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
}