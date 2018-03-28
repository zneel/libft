/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouvier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/24 15:12:42 by ebouvier          #+#    #+#             */
/*   Updated: 2018/03/24 18:34:46 by ebouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
    unsigned char *d;
    unsigned const char *s;

    s = (unsigned char*)src;
    d = (unsigned char*)dst;
    while (n--)
    {
        *(d++) = *s;
        if (*(s++) == (unsigned char) c)
            return (d);
    }
    return (NULL);
}
