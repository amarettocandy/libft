/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarlin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 09:55:14 by bmarlin           #+#    #+#             */
/*   Updated: 2019/09/24 09:55:54 by bmarlin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *restrict dst, const void *restrict src,\
						int c, size_t n)
{
	size_t			i;
	unsigned char	*kuda;
	unsigned char	*otkuda;

	kuda = (unsigned char *)dst;
	otkuda = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		if (otkuda[i] == (unsigned char)c)
		{
			kuda[i] = otkuda[i];
			return ((void *)&(kuda[i + 1]));
		}
		kuda[i] = otkuda[i];
		i++;
	}
	return (NULL);
}
