/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 16:42:04 by disingh           #+#    #+#             */
/*   Updated: 2025/11/18 16:53:26 by disingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int				i;
	int				diff;
	unsigned char	*p1;
	unsigned char	*p2;

	p1 = (unsigned char *) s1;
	p2 = (unsigned char *) s2;
	i = 0;
	diff = 0;
	while (p1[i] != '\0' && p2[i] != '\0' && i < n)
	{
		if (p1[i] != p2[i])
		{
			diff = p1[i] - p2[i];
			return (diff);
		}
		i++;
	}
	if (i == n)
		return (0);
	else
		return (p1[i] - p2[i]);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*c1 = "Hel";
	char	*c2 = "Aello";
	size_t	n = 0;

	int	i1 = memcmp(c1, c2, n);
	int	i2 = ft_memcmp(c1, c2, n);
	printf("%s\n%s\n\nmemcmp = %d\nft_memcmp = %d", c1, c2, i1, i2);
	return (0);
}
*/
