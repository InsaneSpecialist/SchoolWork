/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 12:25:03 by disingh           #+#    #+#             */
/*   Updated: 2025/12/03 03:54:50 by disingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(src);
	if (size == 0)
		return (len);
	i = 0;
	while (i < size - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}
/*Make sure to compile with -lbsd*/
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	c[10] = "Hello";
	char	d1[10];
	char	d2[10];
	int		i1 = strlcpy(d1, c, 4);
	int		i2 = ft_strlcpy(d2, c, 4);
	printf("strlcpy:\ni = %d\ndest = %s\n\n", i1, d1);
	printf("ft_strlcpy:\ni = %d\ndest = %s\n", i2, d2);
	return (0);
}
*/
