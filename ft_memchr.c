/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 16:26:01 by disingh           #+#    #+#             */
/*   Updated: 2025/11/18 16:40:47 by disingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;
	int				i;

	p = (unsigned char *) s;
	i = 0;
	while (p[i] != '\0' && i < n)
	{
		if (p[i] == c)
			break ;
		i++;
	}
	if (i != n && p[i] == c)
		return (&p[i]);
	else
		return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	c[30] = "Does Form follow Function?";
	char	*d = memchr(c, 'F', 10);
	char	*e = ft_memchr(c, 'F', 10);
	printf ("%s:\n\nmemchr = %s\nft_memchr = %s", c, d, e);
	return (0);
}
*/
