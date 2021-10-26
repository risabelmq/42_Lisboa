/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ripereir <ripereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 13:13:56 by ripereir          #+#    #+#             */
/*   Updated: 2021/10/20 18:32:53 by ripereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	printf("Original function's output: <%lu>\n", strlen("I love 42!"));
	printf("String length should be 10: <%zu>\n", ft_strlen("I love 42!"));
	printf("Original function's output: <%lu>\n", strlen(""));
	printf("String length should be 0: <%zu>\n", ft_strlen(""));
}
*/
