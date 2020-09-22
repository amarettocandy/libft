/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manya <manya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 22:13:19 by manya             #+#    #+#             */
/*   Updated: 2019/09/19 18:17:03 by manya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	int i;
	int k;

	i = 0;
	k = ft_strlen(s1);
	while (n > 0 && s2[i])
	{
		s1[k] = s2[i];
		k++;
		i++;
		n--;
	}
	s1[k] = '\0';
	return (s1);
}
