/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strlcat.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/21 10:48:47 by username         #+#    #+#              */
/*   Updated: 2026/10/21 11:14:47 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_len;

	dst_len = ft_strlen(dst);
	i = 0;
	if (size)
	{
		while (src[i] != '\0' && i < size)
		{
			dst[i + dst_len] = src[i];
			i++;
		}
		dst[i + dst_len] = 0;
	}
	if (dst_len > size)
		return (size + ft_strlen(src));
	return (dst_len + ft_strlen(src));
}
