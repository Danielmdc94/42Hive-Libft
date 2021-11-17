/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalacio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 20:03:51 by dpalacio          #+#    #+#             */
/*   Updated: 2021/11/04 20:28:03 by dpalacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putendl_fd(char	const *s, int fd)
{
	int	len;

	len = ft_strlen(s);
	write(fd, &*s, len);
	ft_putchar_fd('\n', fd);
}
