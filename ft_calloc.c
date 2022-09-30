/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: platas <platas@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 16:24:30 by platas            #+#    #+#             */
/*   Updated: 2022/09/30 12:38:35 by platas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void			*temp;
	const size_t	len;

	if (!size)
		return (NULL);
	if (len / count != size)
		return (NULL);
	temp = (void *) malloc(size * count);
	if (!temp)
		return (NULL);
	ft_bzero(temp, size * count);
	return (temp);
}
