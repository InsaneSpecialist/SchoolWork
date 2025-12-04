/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 15:52:58 by disingh           #+#    #+#             */
/*   Updated: 2025/12/04 21:43:07 by disingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char) s1[i] - (unsigned char) s2[i]);
		i++;
	}
	if (i == n)
		return (0);
	else
		return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*c1 = "Hello";
	char	*c2 = "A";
	size_t	n = 1;

	int	i1 = strncmp(c1, c2, n);
	int	i2 = ft_strncmp(c1, c2, n);
	printf("%s\n%s\n\nstrncmp = %d\nft_strncmp = %d", c1, c2, i1, i2);
	return (0);
}
*/
