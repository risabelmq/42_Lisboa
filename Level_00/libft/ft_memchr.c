/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritaisabel <ritaisabel@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 18:26:27 by ripereir          #+#    #+#             */
/*   Updated: 2021/10/26 00:35:38 by ritaisabel       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char   *str_s;
    size_t i;

    str_s = (unsigned char *)s;
    i = 0;
    while (i < n)
    {
		if ((unsigned char)str_s[i] = (unsigned char)c)
				return ((char *)s + i);
		i++;
    }
	return (NULL);
}