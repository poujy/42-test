/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquer <jquer@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 16:19:22 by jquer             #+#    #+#             */
/*   Updated: 2026/10/20 17:01:28 by jquer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    ft_strchr(const char *str, int ch)
{
    while (*str && *str != (char)ch)
        str++;
    if (*str == (char)ch)
        return ((char)*str);
    return (0);
}