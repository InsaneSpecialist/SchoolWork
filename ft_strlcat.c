/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 13:16:09 by disingh           #+#    #+#             */
/*   Updated: 2025/11/18 14:53:12 by disingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len_src;
	size_t	len_dst;
	int		j;

	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	if (size < len_dst)
		return (len_src + size);
	else
	{
		if (size > len_src + len_dst)
			size = len_src + len_dst + 1;
		i = len_dst;
		j = 0;
		while (i < size - 1)
			dst[i++] = src[j++];
		dst[i] = '\0';
		return (len_dst + len_src);
	}
}
/*Make sure to compile with -lbsd*/
/*
#include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
	char	c[10] = "World";
	char	d1[15] = "Hello";
	char	d2[15] = "Hello";
	int		i = 0;
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
