/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countword.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarlin <bmarlin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 20:05:26 by bmarlin           #+#    #+#             */
/*   Updated: 2019/09/25 20:05:29 by bmarlin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_countword(char const *w, char c)
{
	int i;
	int	count;

	if (!w)
		return (0);
	count = 0;
	i = 0;
	while (w[i] == c)
		i++;
	while (w[i])
	{
		if (w[i] == c)
			count++;
		while (w[i] == c)
			i++;
		i++;
	}
	if (w[i - 1] != c)
		count++;
	return (count);
}
