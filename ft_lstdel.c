/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarlin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 09:50:25 by bmarlin           #+#    #+#             */
/*   Updated: 2019/09/24 09:50:57 by bmarlin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *hui;
	t_list *pizda;

	hui = *alst;
	while (hui->next != NULL)
	{
		pizda = hui->next;
		ft_lstdelone(&hui, del);
		hui = pizda;
	}
	ft_lstdelone(&hui, del);
	*alst = NULL;
}
