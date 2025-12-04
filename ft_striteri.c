/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disingh <disingh@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 06:29:16 by disingh           #+#    #+#             */
/*   Updated: 2025/11/27 23:42:03 by disingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void	ft_lowtoup(unsigned int i, char *c)
{
	if (*c >= 'a' && *c <= 'z')
		*c = *c - ('a' - 'A');
	else
		*c = *c;
}

#include <stdio.h>

int	main(void)
{
	char	c[10] = "Hello";

	printf("Original String = %s\n", c);	
	ft_striteri(c, ft_lowtoup);
	printf("New String = %s\n", c);
	return (0);
}
*/
