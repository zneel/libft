/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjfree.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouvier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 16:06:04 by ebouvier          #+#    #+#             */
/*   Updated: 2018/07/01 16:06:31 by ebouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjfree(char *s1, const char *s2)
{
	size_t	count;
	size_t	len[2];
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	len[0] = strlen(s1);
	len[1] = strlen(s2);
	str = ft_strnew(len[0] + len[1]);
	if (str == NULL)
		return (NULL);
	count = 0;
	while (count < len[0])
	{
		str[count] = s1[count];
		count++;
	}
	while (count < (len[0] + len[1]))
	{
		str[count] = s2[count - len[0]];
		count++;
	}
	str[count] = '\0';
	free(s1);
	return (str);
}
