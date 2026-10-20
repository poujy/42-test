/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strchr.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/20 16:19:22 by username         #+#    #+#              */
/*   Updated: 2026/10/20 21:28:55 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_strchr(const char *str, int ch)
{
	while (*str && *str != (char) ch)
		str++;
	if (*str == (char) ch)
		return ((char)*str);
	return (0);
}
