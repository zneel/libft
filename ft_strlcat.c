/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouvier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 20:45:44 by ebouvier          #+#    #+#             */
/*   Updated: 2018/03/26 21:16:11 by ebouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    char *dcpy;
    const char *scpy;
    size_t n;
    size_t dlen;

    dcpy = dst;
    scpy = src;
    n = dstsize;
    while (n-- && *dcpy)
        ++dcpy;
    dlen = dcpy - dst;
    n = dstsize - dlen;
    if (n == 0)
        return (dlen + ft_strlen(scpy));
    while (*scpy)
    {
        if (n-- != 1)
            *dcpy++ = *scpy;
        ++scpy;
    }
    *dcpy = 0;
    return (dlen + (scpy - src));
}
