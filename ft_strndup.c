/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouvier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 16:08:01 by ebouvier          #+#    #+#             */
/*   Updated: 2018/07/06 13:11:57 by ebouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	char	*s;

	s = (char*)malloc(sizeof(*s) * (n + 1));
	if (!s)
		return (NULL);
	s = ft_memcpy(s, s1, n);
	s[n] = 0;
	return (s);
}
