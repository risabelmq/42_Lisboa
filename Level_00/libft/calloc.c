/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritaisabel <ritaisabel@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 00:16:20 by ritaisabel        #+#    #+#             */
/*   Updated: 2021/10/26 00:17:24 by ritaisabel       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*new;

	if (!(new = malloc(size * count)))
		return (NULL);
	ft_memset(new, 0, count * size);
	return (new);
}