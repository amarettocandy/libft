/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarlin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 10:11:37 by bmarlin           #+#    #+#             */
/*   Updated: 2019/09/24 10:11:45 by bmarlin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strcpy(char *dst, const char *src)
{
	size_t	i;

	i = 0;
	while (i <= ft_strlen(src))
	{
		dst[i] = src[i];
		i++;
	}
	while (i < ft_strlen(dst))
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}
