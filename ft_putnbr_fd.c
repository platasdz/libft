/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: platas <platas@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 11:33:56 by platas            #+#    #+#             */
/*   Updated: 2022/09/30 11:36:45 by platas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	i;

	i = n;
	if (i == 0)
		ft_putchar_fd('0', fd);
	else
	{
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
}
