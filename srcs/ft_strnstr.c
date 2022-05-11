/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtorosya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 15:33:44 by vtorosya          #+#    #+#             */
/*   Updated: 2021/02/06 14:32:17 by vtorosya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int i;
	int j;
	int temp;

	i = 0;
	j = 0;
	if (needle[j] == '\0')
		return ((char *)haystack);
	while (i < (int)len && haystack[i] != '\0')
	{
		temp = i;
		while (needle[j] == haystack[i] &&
			needle[j] != '\0' && haystack[i] != '\0' && i < (int)len)
		{
			j++;
			i++;
		}
		if (needle[j] == '\0')
			return ((char *)&haystack[temp]);
		i = temp + 1;
		j = 0;
	}
	return (0);
}
