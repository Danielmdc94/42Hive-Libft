/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalacio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 12:24:09 by dpalacio          #+#    #+#             */
/*   Updated: 2021/11/15 12:52:23 by dpalacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (s++ != '\0')
	{
		if (*s == c)
			return ((char *)s);
	}
	if (*s == '\0')
		return ((char *)s);
	return (NULL);
}
