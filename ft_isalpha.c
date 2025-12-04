/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 17:21:14 by disingh           #+#    #+#             */
/*   Updated: 2025/11/27 22:53:11 by disingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
/*
#include <ctype.h>
#include <stdio.h>

int	main (void)
{
	char	c = 'a';
	int		a = isalpha(c);
	int		b = ft_isalpha(c);
	printf("isalpha for %c is %d", c, a);
	printf("\nft_isalpha for %c is %d", c, b);
	return (0);
}
*/
