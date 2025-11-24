/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 21:14:21 by disingh           #+#    #+#             */
/*   Updated: 2025/11/14 21:42:33 by disingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	int				i;
	unsigned char	*c;

	c = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		c[i] = '\0';
		i++;
	}
}
/*
#include <stdio.h>
#include <strings.h>

int	main(void)
{
	char	c[] = "Hello";
	char	d[] = "Hello";
	bzero(c, 3);
	ft_bzero(d, 3);
	int	i = 0;
	while (i < 5)
		printf ("%c", c[i++]);
	i = 0;
	printf("\n");
	while (i < 5)
		printf ("%c", d[i++]);
	return (0);
}
*/
