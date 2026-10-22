/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquer <jquer@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 16:36:33 by username          #+#    #+#             */
/*   Updated: 2026/10/22 09:13:14 by jquer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <ctype.h>
#include "libft.h"

static void	check(const char *name, int ok)
{
	if (ok)
		printf("OK  %s\n", name);
	else
		printf("KO  %s\n", name);
}

static void	test_is(void)
{
	int	c;
	int	alpha;
	int	digit;
	int	alnum;

	alpha = 1;
	digit = 1;
	alnum = 1;
	c = 0;
	while (c <= 255)
	{
		if (ft_isalpha(c) != (isalpha(c) != 0))
			alpha = 0;
		if (ft_isdigit(c) != (isdigit(c) != 0))
			digit = 0;
		if (ft_isalnum(c) != (isalnum(c) != 0))
			alnum = 0;
		c++;
	}
	check("ft_isalpha", alpha);
	check("ft_isdigit", digit);
	check("ft_isalnum", alnum);
}

static void	test_strlen(void)
{
	int	ok;

	ok = 1;
	if (ft_strlen("") != strlen(""))
		ok = 0;
	if (ft_strlen("a") != strlen("a"))
		ok = 0;
	if (ft_strlen("hello") != strlen("hello"))
		ok = 0;
	if (ft_strlen("a b c") != strlen("a b c"))
		ok = 0;
	check("ft_strlen", ok);
}

static void	test_strchr(void)
{
	char	*s;
	int		ok;

	s = "bonjour";
	ok = 1;
	if (ft_strchr(s, 'b') != strchr(s, 'b'))
		ok = 0;
	if (ft_strchr(s, 'o') != strchr(s, 'o'))
		ok = 0;
	if (ft_strchr(s, 'r') != strchr(s, 'r'))
		ok = 0;
	if (ft_strchr(s, 'z') != strchr(s, 'z'))
		ok = 0;
	if (ft_strchr(s, '\0') != strchr(s, '\0'))
		ok = 0;
	if (ft_strchr("", '\0') != strchr("", '\0'))
		ok = 0;
	check("ft_strchr", ok);
}

static void	test_memset(void)
{
	char	a[10];
	char	b[10];
	int		ok;
	size_t	i;

	i = 0;
	ok = 1;
	memset(a, 'a', 10);
	memset(b, 'a', 10);
	ft_memset(a, 'x', 5);
	memset(b, 'x', 5);
	if (memcmp(a, b, 10) != 0)
		ok = 0;
	ft_memset(a, 'y', i);
	memset(b, 'y', i);
	if (memcmp(a, b, 10) != 0)
		ok = 0;
	ft_memset(a, 0, 10);
	memset(b, 0, 10);
	if (memcmp(a, b, 10) != 0)
		ok = 0;
	if (ft_memset(a, 'z', 3) != a)
		ok = 0;
	check("ft_memset", ok);
}

static void	test_bzero(void)
{
	char	a[10];
	char	b[10];
	int		ok;
	size_t	i;

	i = 0;
	ok = 1;
	memset(a, 'a', 10);
	memset(b, 'a', 10);
	ft_bzero(a, 5);
	bzero(b, 5);
	if (memcmp(a, b, 10) != 0)
		ok = 0;
	ft_bzero(a, i);
	bzero(b, i);
	if (memcmp(a, b, 10) != 0)
		ok = 0;
	check("ft_bzero", ok);
}

static void	test_memcmp(void)
{
	int		res = 0;
	char	s1[10] = "geeks";
	char	s2[10] = "greeks";
	size_t	len1 = strlen(s1);
	size_t	len2 = strlen(s2);
	size_t	n = (len1 < len2) ? len1 : len2;

	// Compare the common bytes of both strings
	res = ft_memcmp(s1, s2, n);
	if (res > 0)
		printf("s1 is greater");
	else if (res < 0)
		printf("s2 is greater");
	else if (len1 == len2)
		printf("both are equal");
	else if (len1 < len2)
		printf("s1 is smaller");
	else
		printf("s2 is smaller");
}

int	main(void)
{
	test_is();
	test_strlen();
	test_strchr();
	test_memset();
	test_bzero();
	test_memcmp();
	return (0);
}
