/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritaisabel <ritaisabel@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 18:26:57 by ripereir          #+#    #+#             */
/*   Updated: 2021/10/25 23:30:18 by ritaisabel       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
void		*ft_memset(void *b, int c, size_t len)
{
	char	*str;

	str = (char *)b;
	while (len > 0)
	{
		str[len - 1] = c;
		len--;
	}
	return (b);
}

int main(void)
{
    char str[50] = "testing the c ft_memset";
    printf("\nBefore memset(): %s\n", str);
    
    ft_memset(str + 13, '.', 8*sizeof(char));
    
    printf("After memset():  %s", str);
}