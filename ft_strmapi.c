/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarlin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 10:17:13 by bmarlin           #+#    #+#             */
/*   Updated: 2019/09/24 10:17:30 by bmarlin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned	i;
	char		*q;

	i = 0;
	if (!s || !(*s) || !f)
		return (NULL);
	if (!(q = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (NULL);
	while (s[i])
	{
		q[i] = (*f)(i, s[i]);
		i++;
	}
	q[i] = '\0';
	return (q);
}
