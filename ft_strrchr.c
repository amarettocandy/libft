/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarlin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 10:21:17 by bmarlin           #+#    #+#             */
/*   Updated: 2019/09/24 10:21:30 by bmarlin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char		*ft_strrchr(const char *s, int c)
{
	int i;

	i = ft_strlen((char *)s) + 1;
	if (c == 0)
		return ((char *)&s[i - 1]);
	while (--i >= 0)
		if (s[i] == c)
			return ((char *)&s[i]);
	return (NULL);
}
