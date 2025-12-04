/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 21:44:02 by disingh           #+#    #+#             */
/*   Updated: 2025/12/04 21:26:24 by disingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	if (!dest && !src)
		return (NULL);
	if (dest == src)
		return (dest);
	d = (unsigned char *) dest;
	s = (unsigned char *) src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	c[] = "Hello";
	char	d[6];
	char	e[6];
	int		i[] = {1, 2, 3, 4, 5};
	int		j[6];
	int		k[6];
	int		l = 0;

	memcpy(d, c, 3);
	ft_memcpy(e, c, 3);
	memcpy(j, i, 12);
	ft_memcpy(k, i, 12);
	printf("For %s:\nmemcpy = %s\nft_memcpy = %s\n\n", c, d, e);
	printf("For 1, 2, 3, 4, 5:\nmemcpy =");
	while (l < 3)
		printf("%d, ", j[l++]);
	l = 0;
	printf("\nft_memcpy = ");
	while (l < 3)
		printf("%d, ", k[l++]);
	ft_memcpy(((void*)0), ((void*)0), 3);
	return (0);
}
*/
