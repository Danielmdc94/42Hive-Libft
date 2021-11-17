/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalacio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 19:48:18 by dpalacio          #+#    #+#             */
/*   Updated: 2021/11/15 20:31:39 by dpalacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	len_needle;
	unsigned int	len_haystack;

	len_needle = ft_strlen(needle);
	len_haystack = ft_strlen(haystack);
	if( len_needle > len_haystack)
		return(NULL);
	if (needle == '\0')
		return ((char *)haystack);
	while (haystack != '\0' && len--)
	{
			if (strncmp((char *)haystack, (char *)needle, len_needle) == 0)
				return ((char *)haystack);
			haystack++;
	}
	return (NULL);
}
