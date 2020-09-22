/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarlin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 08:18:13 by bmarlin           #+#    #+#             */
/*   Updated: 2019/09/24 08:19:14 by bmarlin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_atoi(const char *str)
{
	int			znak;
	long int	rez;

	znak = 1;
	rez = 0;
	while (*str == '\n' || *str == '\t' || *str == '\r'\
		|| *str == ' ' || *str == '\f' || *str == '\v')
		str++;
	if (*str == '-')
	{
		znak = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str <= '9' && *str >= '0')
	{
		rez = 10 * rez + znak * (*str - '0');
		if (znak == 1 && rez < 0)
			return (-1);
		if (znak == -1 && rez > 0)
			return (0);
		str++;
	}
	return (rez);
}
