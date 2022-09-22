/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: platas <platas@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 11:33:56 by platas            #+#    #+#             */
/*   Updated: 2022/09/21 12:04:21 by platas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	i;

	i = n;
	if (i == 0)
		write(fd, "0", 1);
	if (i < 0)
	{
		i = i * -1;
		ft_putchar_fd('-', fd);
	}
	if (i < 10)
	{
		i = i % 10;
		ft_putchar_fd(i + 48, fd);
	}
	else
	{
		ft_putnbr_fd(i / 10, fd);
		ft_putchar_fd((i % 10) + 48, fd);
	}
}
/*
int	main()
{
	int fd = open("o.txt", O_RDONLY);
	ft_putnbr_fd(2147483647, fd);
}*/