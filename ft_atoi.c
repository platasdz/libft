/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: platas <platas@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 14:57:17 by platas            #+#    #+#             */
/*   Updated: 2022/09/30 11:35:13 by platas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	long	num;
	int		is_neg;

	i = 0;
	is_neg = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			is_neg = (-1);
		i++;
	}
	num = 0;
	while (ft_isdigit(str[i]))
	{
		num = (num * 10) + (str[i] - 48) * is_neg;
		if (num > INT_MAX)
			return (-1);
		else if (num < INT_MIN)
			return (0);
		i++;
	}
	return (num);
}
