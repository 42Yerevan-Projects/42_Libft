/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtorosya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 18:39:27 by vtorosya          #+#    #+#             */
/*   Updated: 2021/02/05 22:45:09 by vtorosya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*src;
	int		len;

	len = 0;
	while (str[len] != '\0')
		len++;
	if (!(src = (char*)malloc(sizeof(char) * len + 1)))
		return (NULL);
	len = 0;
	while (str[len])
	{
		src[len] = str[len];
		len++;
	}
	src[len] = '\0';
	return (src);
}
