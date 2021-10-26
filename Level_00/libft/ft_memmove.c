/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritaisabel <ritaisabel@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 18:26:48 by ripereir          #+#    #+#             */
/*   Updated: 2021/10/25 23:30:21 by ritaisabel       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove (void *dst, const void *src, size_t len)
{
	char *i;
	
	i = (char *)malloc(sizeof(char) * len);
	if (i == NULL)
		return (NULL);
ft_memcpy(i, src, len);
ft_memcpy(dst, i, len);
free(i);
return(dst);
}