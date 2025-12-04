/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 15:08:02 by disingh           #+#    #+#             */
/*   Updated: 2025/12/03 06:08:32 by disingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + ('a' - 'A'));
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
	char	d1 = tolower(c1);
	char	d2 = tolower(c2);
	char	d3 = tolower(c3);
	char	e1 = ft_tolower(c1);
	char	e2 = ft_tolower(c2);
	char	e3 = ft_tolower(c3); 
	printf ("%c %c %c\n%c %c %c\n%c %c %c", c1, d1, e1, c2, d2, e2, c3, d3, e3);
	return (0);
}
*/
