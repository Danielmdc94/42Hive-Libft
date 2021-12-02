/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalacio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 16:52:15 by dpalacio          #+#    #+#             */
/*   Updated: 2021/11/30 18:18:31 by dpalacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

static int	count_elem(char const *s, char c)
{
	int	i;
	int	elem_n;

	i = 0;
	elem_n = 0;
	while (*s)
	{
		if (i == 1 && *s == c)
			i = 0;
		if (i == 0 && *s != c)
		{
			i = 1;
			elem_n++;
		}
		s++;
	}
	return (elem_n);
}

char	**cpy_dst(char **dst, char const *s, char c, int elem)
{
	int	i;
	int	j;
	int	start;

	i = 0;
	j = -1;
	while (++j < elem)
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		dst[j] = ft_strsub(s, start, i - start);
		i++;
	}
	return (dst);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**dst;
	int		elem;

	if (s == NULL || !c)
		return (NULL);
	elem = count_elem(s, c);
	dst = (char **)ft_memalloc(sizeof(char *) * (elem + 1));
	if (dst == NULL)
		return (NULL);
	return (cpy_dst(dst, s, c, elem));
}
