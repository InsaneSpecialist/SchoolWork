/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 22:34:21 by disingh           #+#    #+#             */
/*   Updated: 2025/11/14 23:08:44 by disingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	unsigned const char	*s;
	size_t				i;

	d = (unsigned char *) dest;
	s = (unsigned const char *) src;
	i = 0;
	if (d < s)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else if (d > s)
	{
		while (n > 0)
		{
			n--;
			d[n] = s[n];
		}
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

	memmove(d, c, 3);
	ft_memmove(e, c, 3);
	memmove(j, i, 12);
	ft_memmove(k, i, 12);
	printf("For Hello:\nmemmove = %s\nft_memmove = %s\n\n", d, e);
	printf("For 1, 2, 3, 4, 5:\nmemmove =");
	while (l < 3)
		printf("%d, ", j[l++]);
	l = 0;
	printf("\nft_memmove = ");
	while (l < 3)
		printf("%d, ", k[l++]);
	return (0);
}
*/
