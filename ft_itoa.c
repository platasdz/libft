/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: platas <platas@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 09:50:40 by platas            #+#    #+#             */
/*   Updated: 2022/09/22 12:37:03 by platas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	cont_cif(long int n)
{
	int	cifras;

	if (n < 0)
	{
		cifras = 1;
		n = n * -1;
	}
	while (n > 0)
	{
		n = n / 10;
		cifras++;
	}
	return (cifras);
}

char	*ft_itoa(int n)
{
	char		*res;
	int			cifras;
	long int	i;

	i = n;
	cifras = cont_cif(n);
	res = (char *)malloc(sizeof(char) * (cifras + 1));
	if (!res)
		return (NULL);
	res[cifras--] = 0;
	if (i == 0)
		res[0] = '0';
	if (i < 0)
	{
		res[0] = '-';
		i = i * -1;
	}
	while (i > 0)
	{
		res[cifras--] = (i % 10) + 48;
		i = i / 10;
	}
	return (res);
}
/*
int	main(void)
{
	char	*b;

	b = ft_itoa(345);
	puts(b);
	b = ft_itoa(2147483647);
	puts(b);
	b = ft_itoa(-2147483648);
	puts(b);
	b = ft_itoa(-214);
	puts(b);
	b = ft_itoa(2147);
	puts(b);
}*/
