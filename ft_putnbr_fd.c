/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: platas <platas@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 11:33:56 by platas            #+#    #+#             */
/*   Updated: 2022/09/20 12:28:24 by platas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	long int	i;

	i = n;
	if (i = 0)
		write(fd, 48, 1);
	if (i < 0)
	{
		i = i * -1;
		write(fd, '-', 1);
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

int	main()
{
	int fd = open("o.txt", O_RDONLY);
	ft_putnbr_fd(2147483647, fd);
}