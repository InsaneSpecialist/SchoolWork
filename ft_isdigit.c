/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 17:45:21 by disingh           #+#    #+#             */
/*   Updated: 2025/11/27 22:52:56 by disingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
#include <ctype.h>

int	main (void)
{
	char	c = 'H';
	int		a = isdigit(c);
	int		b = ft_isdigit(c);
	printf ("isdigit for %c is %d\n", c, a);
	printf ("ft_isdigit for %c is %d", c, b);
	return (0);
}
*/
