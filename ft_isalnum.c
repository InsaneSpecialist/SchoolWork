/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 17:51:01 by disingh           #+#    #+#             */
/*   Updated: 2025/11/14 18:27:24 by disingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (8);
	else if (c >= '0' && c <= '9')
		return (8);
	else
		return (0);
}
/*
#include <stdio.h>
#include <ctype.h>

int	main (void)
{
	char	c = 'a';
	int		a = isalnum(c);
	int		b = ft_isalnum(c);
	printf ("%c:\nalnum = %d\nft_alnum = %d", c, a, b);
	return (0);
}
*/
