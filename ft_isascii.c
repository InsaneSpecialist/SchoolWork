/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 17:59:13 by disingh           #+#    #+#             */
/*   Updated: 2025/11/14 18:26:05 by disingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char	c1 = 0;
	char	c2 = 127;
	char	c3 = 128;
	char	c4 = -1;
	int		i1 = isascii(c1);
	int		j1 = ft_isascii(c1);
	int		i2 = isascii(c2);
	int		j2 = ft_isascii(c2);
	int		i3 = isascii(c3);
	int		j3 = ft_isascii(c3);
	int		i4 = isascii(c4);
	int		j4 = ft_isascii(c4);
	printf ("for %c:\nisascii = %d\nft_isascii = %d\n\n", c1, i1, j1);
	printf ("for %c:\nisascii = %d\nft_isascii = %d\n\n", c2, i2, j2);
	printf ("for %c:\nisascii = %d\nft_isascii = %d\n\n", c3, i3, j3);
	printf ("for %c:\nisascii = %d\nft_isascii = %d", c3, i3, j3);
	return (0);
}
*/
