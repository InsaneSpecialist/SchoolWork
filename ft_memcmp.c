/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 16:42:04 by disingh           #+#    #+#             */
/*   Updated: 2025/12/02 03:44:56 by disingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*p1;
	unsigned char	*p2;

	p1 = (unsigned char *) s1;
	p2 = (unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*c1 = "Hel";
	char	*c2 = "Hello";
	size_t	n = 4;

	int	i1 = memcmp(c1, c2, n);
	int	i2 = ft_memcmp(c1, c2, n);
	printf("%s\n%s\n%ld\n\nmemcmp = %d\nft_memcmp = %d\n", c1, c2, n, i1, i2);
	return (0);
}
*/
