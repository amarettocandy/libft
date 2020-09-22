/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarlin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 10:13:14 by bmarlin           #+#    #+#             */
/*   Updated: 2019/09/24 10:13:24 by bmarlin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_strequ(char const *s1, char const *s2)
{
	unsigned int i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	if (ft_strlen(s1) == 0 && ft_strlen(s2) == 0)
		return (1);
	if (s1[i] && s2[i])
	{
		while (s1[i] == s2[i] && s1[i] && s2[i])
			i++;
		if (s2[i] - s1[i] == 0)
			return (1);
	}
	return (0);
}
