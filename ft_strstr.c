/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouvier <marvin@42.fr>                    +#+  +:+           i = 0;
+#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 22:33:15 by ebouvier          #+#    #+#             */
/*   Updated: 2018/03/27 20:46:56 by ebouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strstr(const char *haystack, const char *needle)
{
    size_t nlen;
    size_t hlen;

    if (!*needle)
        return ((char*)haystack);
    nlen = ft_strlen(needle);
    hlen = ft_strlen(haystack);
    while (*haystack && nlen <= hlen)
    {
        while (*haystack == *needle)
        {
            if (nlen == 0)
                return ((char*)needle);
            --nlen;
            ++needle;
        }
        ++haystack;
        --hlen;
    }
    return (NULL);
}
