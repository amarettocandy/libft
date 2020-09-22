/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarlin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 09:53:51 by bmarlin           #+#    #+#             */
/*   Updated: 2019/09/24 09:54:09 by bmarlin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*q;

	if (!(q = (t_list *)malloc(sizeof(*q))))
		return (NULL);
	if (!content)
	{
		q->content = NULL;
		q->content_size = 0;
	}
	else
	{
		if (!(q->content = malloc(content_size)))
		{
			free(q);
			return (NULL);
		}
		ft_memcpy(q->content, content, content_size);
		q->content_size = content_size;
	}
	q->next = NULL;
	return (q);
}
