/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalacio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 12:25:48 by dpalacio          #+#    #+#             */
/*   Updated: 2021/11/25 16:46:24 by dpalacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include  "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	if (s == NULL)
		return ;
	while (*s != '\0')
	{
		f(s);
		s++;
	}
}
