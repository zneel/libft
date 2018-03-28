/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouvier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/24 14:43:56 by ebouvier          #+#    #+#             */
/*   Updated: 2018/03/25 23:36:58 by ebouvier         ###   ########.fr       */
/*                                                                            */
/*void *ft_memmove(void *dst, const void *src, size_t len)
 ************************************************************************** */

#include "libft.h"

void ft_bzero(void *s, size_t n)
{
    ft_memset(s, 0, n);
}
