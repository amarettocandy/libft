/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarlin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 09:53:13 by bmarlin           #+#    #+#             */
/*   Updated: 2019/09/24 09:53:32 by bmarlin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *q;
	t_list *r;

	if (!lst)
		return (NULL);
	q = (*f)(lst);
	r = q;
	lst = lst->next;
	while (lst->next != NULL)
	{
		q->next = (*f)(lst);
		lst = lst->next;
		q = q->next;
	}
	q->next = (*f)(lst);
	return (r);
}
