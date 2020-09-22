/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarlin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 10:22:46 by bmarlin           #+#    #+#             */
/*   Updated: 2019/09/24 10:23:32 by bmarlin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		free_res(char ***q, int i)
{
	int	j;

	j = 0;
	while (j <= i)
	{
		free((*q)[j]);
		j++;
	}
}

char			**ft_strsplit(char const *s, char c)
{
	char	**q;
	int		i;
	int		count_word;

	count_word = ft_countword(s, c);
	if (!s || !(q = (char **)malloc(sizeof(char *) * (count_word + 1))))
		return (NULL);
	i = 0;
	while (i < count_word)
	{
		while (*s == c)
			s++;
		if (ft_strlen(s) == 0)
			break ;
		if (*s && !(q[i] = ft_strsub(s, 0, ft_countsymb(s, c))))
		{
			free_res(&q, i);
			return (NULL);
		}
		s = s + ft_countsymb(s, c) + 1;
		i++;
	}
	q[i] = NULL;
	return (q);
}
