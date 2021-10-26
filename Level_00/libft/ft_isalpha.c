/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ripereir <ripereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 12:53:46 by ripereir          #+#    #+#             */
/*   Updated: 2021/10/20 18:25:07 by ripereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c < 'A' || c > 'Z') && (c < 'a' || c > 'z'))
	{
		return (0);
	}
	return (1);
}

/*
#include <stdio.h>
#include <string.h>

int	ft_isalpha(char *str);

int	main(void)
{
	printf("Test 1: True (1)\n");
	printf("Original function's output: <%d>\n", ft_isalpha("Ilove"));
	printf("ft_isalpha: <%d>\n", ft_isalpha("Ilove"));
	printf("Test 2: False (0)\n");
	printf("ft_isalpha: <%d>\n", ft_isalpha("I love 42"));
	printf("Output should be 0: <%d>\n", ft_isalpha("I love 42"));
}
*/
