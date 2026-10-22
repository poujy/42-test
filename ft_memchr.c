/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquer <jquer@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 17:47:04 by username          #+#    #+#             */
/*   Updated: 2026/10/22 10:17:23 by jquer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int c, size_t count)

{
	const unsigned char	*str;

	str = (const unsigned char *) ptr;
	while (count--)
	{
		if (*str == (unsigned char) c)
			return ((void *) str);
		str++;
	}
	return (NULL);
}
