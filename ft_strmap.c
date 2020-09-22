/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarlin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 10:16:44 by bmarlin           #+#    #+#             */
/*   Updated: 2019/09/24 10:16:58 by bmarlin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strmap(char const *s, char (*f)(char))
{
	char		*q;
	int			k;
	int			i;

	if (!s || !(*s) || !f)
		return (NULL);
	k = ft_strlen(s) + 1;
	i = 0;
	if (!(q = (char *)malloc(sizeof(char) * k)))
		return (NULL);
	while (*s)
	{
		q[i] = (*f)((char)*s);
		s++;
		i++;
	}
	q[i] = '\0';
	return (q);
}
