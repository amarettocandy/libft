/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarlin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 10:09:20 by bmarlin           #+#    #+#             */
/*   Updated: 2019/09/24 10:09:33 by bmarlin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <string.h>

char		*ft_strchr(const char *s, int c)
{
	int i;
	int k;

	i = 0;
	k = ft_strlen((char *)s);
	if (!s)
		return ((char *)&s[k]);
	if (c == 0)
		return ((char *)&s[k]);
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	return (0);
}
