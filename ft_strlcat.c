/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalacio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 12:29:50 by dpalacio          #+#    #+#             */
/*   Updated: 2021/11/24 16:02:55 by dpalacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	atmost;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (dstlen > dstsize)
		return (srclen + dstsize);
	atmost = dstsize - dstlen - 1;
	ft_memcpy (dst + dstlen, src, atmost);
	dst[dstlen + atmost] = '\0';
	return (dstlen + srclen);
}
