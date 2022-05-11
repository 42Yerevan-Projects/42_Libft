/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtorosya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 19:26:42 by vtorosya          #+#    #+#             */
/*   Updated: 2021/02/05 22:44:40 by vtorosya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	char			*src;
	char			k;
	unsigned int	i;

	src = (char*)str;
	i = 0;
	while (src[i] != '\0')
	{
		if (src[i] == (char)ch)
		{
			k = src[i];
			return (&src[i]);
		}
		i++;
	}
	if (src[i] == (char)ch)
		return (&src[i]);
	return (NULL);
}
