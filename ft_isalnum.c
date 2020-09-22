/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarlin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 08:23:02 by bmarlin           #+#    #+#             */
/*   Updated: 2019/09/24 08:23:25 by bmarlin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isalnum(int c)
{
	if ((c <= 57 && c >= 48) || (c >= 65 && c <= 90) || (c >= 97 && c <= 99)
			|| (c >= 100 && c <= 122))
		return (1);
	else
		return (0);
}
