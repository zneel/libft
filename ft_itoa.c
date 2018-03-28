/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouvier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/23 22:22:01 by ebouvier          #+#    #+#             */
/*   Updated: 2018/03/24 21:38:35 by ebouvier         ###   ########.fr       */
/*                                                                            */
/* ************=************************************************************** */

#include "libft.h"
#include <stdlib.h>

char *ft_itoa(int n)
{
    int  cpy;
    int  i;
    int  sign;
    char *s;

    cpy = n;
    i = 0;
    sign = 0;
    if (n == -2147483648)
        return ft_strdup("-2147483648");
    if (n == 0)
        return ft_strdup("0");
    if (n < 0)
    {
        i++;
        sign = 1;
        cpy = -cpy;
        n = -n;
    }
    while (cpy > 0)
    {
        i++;
        cpy /= 10;
    }
    s = (char*)malloc((i * sizeof(*s)) + 1);
    if (!s)
        return (NULL);
    s[i] = 0;
    while(i > 0)
    {
        s[--i] = n % 10 + '0';
        n /= 10;
    }
    if (sign == 1)
        s[i] = '-';
    return (s);
}
