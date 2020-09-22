/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarlin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 10:15:19 by bmarlin           #+#    #+#             */
/*   Updated: 2019/09/24 10:15:34 by bmarlin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t size)
{
	size_t	i;
	size_t	size_dst;
	size_t	len;

	size_dst = ft_strlen(dst);
	i = 0;
	len = 0;
	while (dst[len] && len < size)
		len++;
	if (!(len < size))
		return (ft_strlen(src) + size);
	while (src[i] && i < (size - size_dst - 1))
	{
		dst[len + i] = src[i];
		i++;
	}
	dst[len + i] = '\0';
	return (len + ft_strlen(src));
}
