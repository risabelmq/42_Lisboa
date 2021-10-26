/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritaisabel <ritaisabel@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 17:56:45 by ritaisabel        #+#    #+#             */
/*   Updated: 2021/10/26 16:13:43 by ritaisabel       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s1)
{
       char *s2;
       size_t = i;

       s2 = (char *)malloc(sizeof(char) * ft_strlen(s1 + 1);
       void		*ft_memset(void *b, int c, size_t len)
       if (s2 == NULL)
              return (NULL);
       while (s1[i])
       {
             str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}