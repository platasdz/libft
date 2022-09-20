/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: platas <platas@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 14:55:34 by platas            #+#    #+#             */
/*   Updated: 2022/09/15 11:52:18 by platas           ###   ########.fr       */
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
/*
int main()
{
	printf("%zu", ft_strlen("12345"));
	printf("%zu", ft_strlen("123"));
	printf("%zu", ft_strlen(""));
}*/
