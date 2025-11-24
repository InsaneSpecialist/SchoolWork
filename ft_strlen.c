/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 18:37:00 by disingh           #+#    #+#             */
/*   Updated: 2025/11/18 13:02:37 by disingh          ###   ########.fr       */
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
/*
#include <stdio.h>
#include <string.h>

int	main (void)
{
	char	c[] = "ABC";
	int		a = strlen(c);
	int		b = ft_strlen(c);
	printf ("%s:\nstrlen = %d\nft_strlen = %d", c, a, b);
	return (0);
}
*/
