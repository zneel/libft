/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouvier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/24 13:48:49 by ebouvier          #+#    #+#             */
/*   Updated: 2018/03/25 23:46:22 by ebouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char *ft_strdup(const char *s1)
{
    size_t len;
    char   *s;

    len = ft_strlen(s1);
    s   = (char*)malloc(sizeof(*s) * (len + 1));
    if (!s)
        return (NULL);
    s = ft_memcpy(s, s1, len + 1);
    return (s);
}
