/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: platas <platas@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 16:24:30 by platas            #+#    #+#             */
/*   Updated: 2022/09/15 11:50:45 by platas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*temp;

	i = 0;
	temp = s;
	if (n > 0)
	{
		while (i < n)
		{
			temp[i] = 0;
			i++;
		}
	}
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, &*str, 1);
		str++;
	}
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*temp;

	temp = (void *)malloc(size * count);
	printf("direccion: %s", temp);
	if (!temp)
	{
		printf("cagaste");
		return (NULL);
	}
	ft_bzero(temp, size * count);
	printf("direccion old: %s", temp);
	return (temp);
}
/*
int main()
{
	ft_calloc(2, 3);
}*/