/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtorosya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 23:42:37 by vtorosya          #+#    #+#             */
/*   Updated: 2021/02/06 17:01:39 by vtorosya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	n;
	size_t	m;

	n = 0;
	m = 0;
	if (!s1 || !s2)
		return (NULL);
	while (s1[n])
		n++;
	while (s2[m])
		m++;
	if (!(res = (char *)malloc((n + m + 1) * sizeof(*res))))
		return (NULL);
	n = -1;
	m = -1;
	while (s1[++n])
		res[n] = s1[n];
	while (s2[++m])
		res[n + m] = s2[m];
	res[n + m] = '\0';
	return (res);
}
