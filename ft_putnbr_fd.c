/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalacio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 19:50:16 by dpalacio          #+#    #+#             */
/*   Updated: 2021/11/04 19:56:39 by dpalacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		n = -n;
		ft_putchar_fd('-', fd);
	}
	if (n > 10)
		ft_putnbr_fd(n / 10, fd);
	ft_putchar('0' + n % 10);
}
