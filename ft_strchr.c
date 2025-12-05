/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 15:15:20 by disingh           #+#    #+#             */
/*   Updated: 2025/12/05 16:01:34 by disingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if ((unsigned char) s[i] == (unsigned char) c)
			return ((char *) &s[i]);
		i++;
	}
	if (c == '\0')
		return ((char *) &s[i]);
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	c[30] = "Does Form follow Function?";
	char	*d = strchr(c, 'F');
	char	*e = ft_strchr(c, 'F');
	printf ("%s:\n\nstrchr = %s\nft_strchr = %s", c, d, e);
	return (0);
}
*/
