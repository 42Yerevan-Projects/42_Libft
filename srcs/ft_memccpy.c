/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtorosya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 11:21:20 by vtorosya          #+#    #+#             */
/*   Updated: 2021/02/06 16:12:30 by vtorosya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char*)dst;
	s2 = (unsigned char*)src;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (n-- > 0)
	{
		*s1 = *s2;
		if (*s2 == (unsigned char)c)
			return ((void*)s1 + 1);
		s1++;
		s2++;
	}
	return (NULL);
}
