/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouvier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 17:19:37 by ebouvier          #+#    #+#             */
/*   Updated: 2018/03/28 02:01:24 by ebouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>

int  ft_strlen(const char *s);
int  ft_atoi(const char *s);
void ft_putstr(char const *s);
void ft_putchar(char c);
char *ft_itoa(int n);
void ft_putnbr(int n);
void *ft_memset(void *b, int c, size_t len);
char *ft_strdup(const char *s1);
void ft_bzero(void *s, size_t n);
void *ft_memcpy(void *dst, const void *src, size_t n);
void *ft_memccpy(void *dst, const void *src, int c, size_t n);
void *ft_memmove(void *dst, const void *src, size_t len);
void *ft_memchr(const void *s, int c, size_t n);
int  ft_memcmp(const void *s1, const void *s2, size_t n);
char *ft_strcpy(char *dst, const char *src);
char *ft_strncpy(char *dst, const char *src, size_t len);
char *ft_strcat(char *s1, const char *s2);
size_t ft_strlcat(char *dst, const char *src, size_t dstsize);
char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
char *ft_strstr(const char *haystack, const char *needle);
int  ft_toupper(int c);
int  ft_tolower(int c);
int  ft_strcmp(const char *s1, const char *s2);
#endif
