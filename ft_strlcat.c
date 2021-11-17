/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalacio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 12:29:50 by dpalacio          #+#    #+#             */
/*   Updated: 2021/11/17 19:15:33 by dpalacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t src_len = ft_strlen(src);
	size_t dst_len = ft_strlen(dst);

	while (*dst != '\0')
		dst++;
	if (dst_len == dstsize)
		return (dstsize + src_len);
	if (src_len < dstsize - dst_len)
		ft_memcpy(dst, src, src_len + 1);
	else
	{
		memcpy(dst, src, dstsize - 1);
		dst[dst_len + dstsize - 1] = '\0';
	}
	return dst_len + src_len;
}
