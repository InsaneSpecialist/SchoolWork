/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disingh <disingh@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 05:51:13 by disingh           #+#    #+#             */
/*   Updated: 2025/12/03 06:28:34 by disingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*c;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	i = 0;
	c = ft_calloc((ft_strlen(s) + 1), sizeof (char));
	if (!c)
		return (NULL);
	while (s[i] != '\0')
	{
		c[i] = f(i, s[i]);
		i++;
	}
	return (c);
}
/*
char	ft_lowtoup(unsigned int i, char c)
{
	if (c >= 'a' && c <= 'z')
		c = c - ('a' - 'A');
	return (c);
}

#include <stdio.h>

int	main(void)
{
	char	*c = "Hello";
	char	*d;

	d = ft_strmapi(c, ft_lowtoup);
	printf("Original String = %s\nNew String = %s\n", c, d);
	free (d);
	return (0);
}
*/
