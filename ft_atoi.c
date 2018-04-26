/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouvier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/23 19:27:03 by ebouvier          #+#    #+#             */
/*   Updated: 2018/04/09 13:55:07 by ebouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *s)
{
	int	res;
	int	is_positive;

	res = 0;
	is_positive = 1;
	while (*s == ' ' || *s == '\f' || *s == '\t' || *s == '\n'
			|| *s == '\r' || *s == '\v')
		s++;
	if (*s == '-')
	{
		is_positive = -1;
		s++;
	}
	else if (*s == '+' || *s == '-')
		s++;
	while (*s >= '0' && *s <= '9' && *s)
		res = res * 10 + *(s++) - '0';
	return (res * is_positive);
}
