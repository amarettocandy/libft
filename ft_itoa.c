/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarlin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 09:48:30 by bmarlin           #+#    #+#             */
/*   Updated: 2019/09/24 09:48:53 by bmarlin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int n)
{
	char	*a;
	int		lol;
	int		kek;

	kek = ft_numlen(n);
	lol = kek;
	if (!(a = ft_strnew(kek)))
		return (NULL);
	if (n == 0)
		return (ft_strcpy(a, "0"));
	if (n == -2147483648)
		return (ft_strcpy(a, "-2147483648"));
	if (n < 0)
	{
		a[0] = '-';
		n *= -1;
	}
	while (n != 0)
	{
		a[lol - 1] = (n % 10) + '0';
		n /= 10;
		lol--;
	}
	return (a);
}
