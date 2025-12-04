/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disingh <disingh@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 17:49:00 by disingh           #+#    #+#             */
/*   Updated: 2025/11/27 23:27:26 by disingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*s2;

	i = 0;
	s2 = (unsigned char *) s;
	while (i < n)
		s2[i++] = 0;
}
*/
void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*c;
	size_t			i;

	if (size > ((size_t) - 1) / nmemb)
		return (NULL);
	else
		i = nmemb * size;
	c = malloc(i);
	if (!c)
		return (NULL);
	ft_bzero(c, i);
	return (c);
}
/*
#include <stdio.h>

void	ft_printarray(int *i)
{
	int	j;
	char c;

	if (i != NULL)
	{
		j = 0;
		while (j < 5)
			printf("%d, ", i[j++]);
	}
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*src2;
	unsigned char	*dest2;

	i = 0;
	src2 = (unsigned char *) src;
	dest2 = (unsigned char *) dest;
	while (i < n)
	{
		dest2[i] = src2[i];
		i++;
	}
	return (dest);
}

int	main(void)
{
	int		i[5] = {1, 2, 3, 4, 5};
	int		*j = calloc (100, sizeof(int));
	int		*k = ft_calloc (100, sizeof(int));
	char	c[20] = "Hello World";
	char	*d = calloc (100, sizeof(char));
	char	*e = ft_calloc (100, sizeof(char));

	j = ft_memcpy(j, i, 20);
	k = ft_memcpy(k, i, 20);
	d = ft_memcpy(d, c, 11);
	e = ft_memcpy(e, c, 11);
	ft_printarray(i);
	printf("\nCalloc:\n");
	ft_printarray(j);
	printf("\nft_calloc:\n");
	ft_printarray(k);
	free (j);
	free (k);
	printf("\n%s:\nCalloc: %s\nft_calloc: %s\n", c, d, e);
	free (d);
	free (e);
	return (0);
}
*/
