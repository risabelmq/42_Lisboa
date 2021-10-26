/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritaisabel <ritaisabel@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 18:26:29 by ritaisabel        #+#    #+#             */
/*   Updated: 2021/10/25 23:30:24 by ritaisabel       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	srcsize;

	if (!dst || !src)
		return (0);
	srcsize = ft_strlen(src);
	i = 0;
	if (dstsize != 0)
	{
		ft_memcpy(dst, src, dstsize);
		dst[dstsize - 1] = '\0';
	}
	return (srcsize);
}

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	dest[50];
	char	*src;
	int		size;

	src = "My name is Luka";
	size = 10;
	printf("%zu\n", ft_strlcpy(dest, src, size));
	printf("%s\n\n", dest);
	printf("%lu\n", strlcpy(dest, src, size));
	printf("%s\n\n", dest);
}
*/