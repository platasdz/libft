/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: platas <platas@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 12:11:45 by platas            #+#    #+#             */
/*   Updated: 2022/09/28 12:42:48 by platas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nl;

	while (lst != NULL)
	{
		nl = ft_lstnew(f(lst->content));
		if (!nl)
		{
			ft_lstclear(nl, del);//doble puntero??
			return (NULL);
		}
		lst = lst->next;
	}
	return (nl);
}