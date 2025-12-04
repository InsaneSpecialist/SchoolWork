/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 14:57:56 by disingh           #+#    #+#             */
/*   Updated: 2025/12/03 06:09:18 by disingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - ('a' - 'A'));
	else
		return (c);
}
/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char	c1 = 'a';
	char	c2 = 'A';
	char	c3 = '4';
	char	d1 = toupper(c1);
	char	d2 = toupper(c2);
	char	d3 = toupper(c3);
	char	e1 = ft_toupper(c1);
	char	e2 = ft_toupper(c2);
	char	e3 = ft_toupper(c3); 
	printf ("%c %c %c\n%c %c %c\n%c %c %c", c1, d1, e1, c2, d2, e2, c3, d3, e3);
	return (0);
}
*/
