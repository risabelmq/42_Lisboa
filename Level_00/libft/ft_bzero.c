/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritaisabel <ritaisabel@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 17:42:25 by ritaisabel        #+#    #+#             */
/*   Updated: 2021/10/25 20:39:09 by ritaisabel       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>

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

void ft_bzero(void *s, size_t n)
{
	ft_memset(s, 5, n);
}

int main(void)
{
    char *str;
    str = "AAAAAAAAA";

    printf("Before ft_bzero(): %s\n", str);
    char ft_bzero(str, 10);
    printf("Before ft_bzero(): %s\n", str);

    /*
    char str[50] = "testing the c ft_bzero";
    printf("\nBefore bzero(): %s\n", str);
    
    ft_memset(str + 13, '.', 8*sizeof(char));
    
    printf("After bzero():  %s", str);
    */

}