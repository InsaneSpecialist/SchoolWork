/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 13:16:09 by disingh           #+#    #+#             */
/*   Updated: 2025/12/03 03:46:13 by disingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len_src;
	size_t	len_dst;
	size_t	j;

	len_src = ft_strlen(src);
	if (size == 0)
		return (len_src);
	len_dst = 0;
	while (len_dst < size && dst[len_dst] != '\0')
		len_dst++;
	if (size == len_dst)
		return (len_src + size);
	i = len_dst;
	j = 0;
	while (i < size - 1 && src[j])
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (len_src + len_dst);
}
/*Make sure to compile with -lbsd*/
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	c[10] = "World";
	char	d1[15] = "Hello";
	char	d2[15] = "Hello";
	int		i = 15;
	int		ret_val1;
	int		ret_val2;
	ret_val1 = strlcat(d1, c, i);
	ret_val2 = ft_strlcat(d2, c, i);
	printf("FOR %d:\n\n", i);
	printf("strlcat:\ni = %d\ndest = %s\n\n", ret_val1, d1);
	printf("ft_strlcat:\ni = %d\ndest = %s\n\n\n", ret_val2, d2);
	return (0);
}
*/
