/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouvier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 00:51:11 by ebouvier          #+#    #+#             */
/*   Updated: 2018/03/26 00:59:14 by ebouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *cpy;

    cpy = (unsigned char*)s;
    while(n--)
    {
        if (*cpy == (unsigned char) c)
            return (cpy);
        ++cpy;
    }
    return (NULL);
}
