/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarlin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 10:00:59 by bmarlin           #+#    #+#             */
/*   Updated: 2019/09/24 10:01:14 by bmarlin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memmove(void *dst, const void *src, size_t len)
{
	int				i;
	unsigned char	*kuda;
	const char		*otkuda;

	i = 0;
	kuda = (unsigned char*)dst;
	otkuda = (const char*)src;
	if (!dst && !src)
		return (NULL);
	if (dst > src && dst && src)
	{
		while (len > 0)
		{
			kuda[len - 1] = (char)otkuda[len - 1];
			len--;
		}
	}
	else
		while (i < (int)len)
		{
			kuda[i] = otkuda[i];
			i++;
		}
	return (dst);
}
