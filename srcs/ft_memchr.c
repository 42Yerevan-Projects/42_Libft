/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtorosya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 18:16:34 by vtorosya          #+#    #+#             */
/*   Updated: 2021/02/07 20:50:38 by vtorosya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*new;

	i = 0;
	new = (unsigned char*)s;
	while (i < n)
	{
		if (new[i] == (unsigned char)c)
			return ((void*)s + i);
		++i;
	}
	return (NULL);
}
