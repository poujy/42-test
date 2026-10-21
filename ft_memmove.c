/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memmove.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/21 09:00:23 by username         #+#    #+#              */
/*   Updated: 2026/10/21 12:57:08 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memmove(void *dest, const void *src, size_t n)
{
	if (src > dest)
		return (memcpy(dest, src, n));
	while (n--)
		((char *) dest)[n] = ((const char *) src)[n];
	return (dest);
}
