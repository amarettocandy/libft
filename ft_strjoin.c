/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarlin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 10:14:43 by bmarlin           #+#    #+#             */
/*   Updated: 2019/09/24 10:14:56 by bmarlin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*q;
	int		i;
	int		k;

	i = 0;
	k = 0;
	if (!s1 || !s2)
		return (0);
	if (!(q = (char *)malloc(sizeof(char) \
		* (1 + ft_strlen(s1) + ft_strlen(s2)))))
		return (NULL);
	while (s1[i])
	{
		q[i] = s1[i];
		i++;
	}
	while (s2[k])
		q[i++] = s2[k++];
	q[i] = '\0';
	return (q);
}
