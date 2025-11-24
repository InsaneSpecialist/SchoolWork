/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 15:47:01 by disingh           #+#    #+#             */
/*   Updated: 2025/11/18 15:51:50 by disingh          ###   ########.fr       */
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

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == c)
			break ;
		i--;
	}
	if (s[i] == c)
		return ((char *) &s[i]);
	else
		return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	c[30] = "Does Form follow Function?";
	char	*d = strrchr(c, 'F');
	char	*e = ft_strrchr(c, 'F');
	printf ("%s:\n\nstrrchr = %s\nft_strrchr = %s", c, d, e);
	return (0);
}
*/
