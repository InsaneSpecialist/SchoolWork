/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disingh <disingh@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 16:06:44 by disingh           #+#    #+#             */
/*   Updated: 2025/11/28 01:19:00 by disingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	retval;
	int	negcount;

	i = 0;
	negcount = 1;
	retval = 0;
	while (nptr[i] == ' ' || (nptr[i] >= '\t' && nptr[i] <= '\r'))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			negcount = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
		retval = (retval * 10) + (nptr[i++] - '0');
	return (retval * negcount);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int charc, char *charv[])
{
	int		i1 = atoi(charv[1]);
	int		i2 = ft_atoi(charv[1]);
	printf("%s:\natoi = %d\nft_atoi = %d\n", charv[1], i1, i2);
	return (0);
}
*/
