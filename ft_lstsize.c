/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: platas <platas@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 10:08:43 by platas            #+#    #+#             */
/*   Updated: 2022/09/28 10:22:42 by platas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		cont;

	cont = 0;
	if (!lst)
		return (0);
	while (lst != NULL)
	{
		lst = lst->next;
		cont++;
	}
	cont++;
	return (cont);
}