/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: platas <platas@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 10:36:12 by platas            #+#    #+#             */
/*   Updated: 2022/09/28 11:00:52 by platas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lastadd_back(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	*lst = ft_lstlast(*lst);
	new->next = *lst;
	*lst = new;
}