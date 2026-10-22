/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquer <jquer@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 16:42:27 by username          #+#    #+#             */
/*   Updated: 2026/10/22 11:38:03 by jquer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)

{
	while (*str && *str != (char) ch)
	{
		if (*str == (char) ch)
			return ((char *) str);
		str--;
	}
	if (*str == (char) ch)
		return ((char *) str);
	return (NULL);
}
