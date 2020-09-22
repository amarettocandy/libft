/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarlin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 10:20:05 by bmarlin           #+#    #+#             */
/*   Updated: 2019/09/24 10:20:17 by bmarlin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;
	int		i;

	i = -1;
	if (!(str = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	while (++i < (int)size)
		str[i] = '\0';
	str[i] = '\0';
	return (str);
}
