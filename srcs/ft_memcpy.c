/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtorosya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 11:04:45 by vtorosya          #+#    #+#             */
/*   Updated: 2021/02/06 16:05:52 by vtorosya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char			*s1;
	const char		*s2;

	s1 = (char*)dst;
	s2 = (char*)src;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (n--)
	{
		*s1++ = *s2++;
	}
	return (dst);
}
