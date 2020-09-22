/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarlin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 10:24:20 by bmarlin           #+#    #+#             */
/*   Updated: 2019/09/24 10:25:14 by bmarlin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*len_null(char **q)
{
	(*q) = (char *)malloc(sizeof(char) * 2);
	(*q)[0] = '\0';
	return ((*q));
}

char		*ft_strtrim(char const *s)
{
	char	*q;
	int		i;
	int		k;
	int		lena;

	if (!s)
		return (NULL);
	i = 0;
	k = -1;
	lena = ft_strlen(s);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	while (s[lena - 1] == ' ' || s[lena - 1] == '\t' || s[lena - 1] == '\n')
		lena--;
	if (lena == 0)
		return (len_null(&q));
	if (!(q = (char *)malloc(sizeof(char) * (lena - i + 1))))
		return (NULL);
	while (i < lena)
	{
		q[++k] = s[i];
		i++;
	}
	q[++k] = '\0';
	return (q);
}
