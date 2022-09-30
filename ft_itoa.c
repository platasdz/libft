/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: platas <platas@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 09:50:40 by platas            #+#    #+#             */
/*   Updated: 2022/09/30 11:35:45 by platas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	cont_cif(long int n)
{
	int	cifras;

	if (n == 0)
	{
		cifras = 1;
		return (cifras);
	}
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

static char	*ft_put_itoa(char *res, long int i, int cifras)
{
	res[cifras--] = 0;
	if (i == 0)
	{
		res[0] = '0';
		return (res);
	}
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
	res = ft_put_itoa(res, i, cifras);
	return (res);
}
