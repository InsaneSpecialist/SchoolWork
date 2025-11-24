/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 18:28:04 by disingh           #+#    #+#             */
/*   Updated: 2025/11/14 18:35:50 by disingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (16384);
	else
		return (0);
}
/*
#include <stdio.h>
#include <ctype.h>

int	main (void)
{
	char	c = 127;
	int		a = isprint(c);
	int		b = ft_isprint(c);
	printf ("%c:\nisprint = %d\nft_isprint = %d", c, a, b);
	return (0);
}
*/
