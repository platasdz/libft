/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: platas <platas@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 14:57:17 by platas            #+#    #+#             */
/*   Updated: 2022/09/15 11:49:11 by platas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	num;
	int	is_neg;

	i = 0;
	is_neg = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			is_neg = 1;
		i++;
	}
	num = 0;
	while (ft_isdigit(str[i]))
	{
		num = num * 10 + (str[i] - 48);
		i++;
	}
	if (is_neg == 1)
	{
		num = num * -1;
	}
	return (num);
}
/*
int main()
{
	printf("%d \n", ft_atoi("300"));
	printf("%d \n", ft_atoi("-300"));
	printf("%d \n", ft_atoi(" 300"));
	printf("%d \n", ft_atoi(" --300"));
	printf("%d \n", ft_atoi("s300"));
	printf("%d \n", ft_atoi("  +300"));
}*/