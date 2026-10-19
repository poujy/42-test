/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_isdigit.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/19 22:20:19 by username         #+#    #+#              */
/*   Updated: 2026/10/19 22:24:55 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

int	main(void)
{
	printf("a : %d\n", ft_isdigit('a'));
	printf("Z : %d\n", ft_isdigit('Z'));
	printf("5 : %d\n", ft_isdigit('5'));
	printf("espace : %d\n", ft_isdigit(' '));
	return (0);
}
