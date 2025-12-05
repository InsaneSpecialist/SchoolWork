/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 17:47:30 by disingh           #+#    #+#             */
/*   Updated: 2025/12/05 16:02:28 by disingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_checkstring(const char *big, const char *little, int i)
{
	int	j;

	j = 0;
	while (little[j] != '\0')
	{
		if (big[i] != little[j])
			return (0);
		i++;
		j++;
	}
	return (1);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	sizeof_little;

	if (little[0] == '\0')
		return ((char *) big);
	i = 0;
	if (len == 0)
		return (NULL);
	sizeof_little = ft_strlen(little);
	while (big[i] != '\0' && i <= (len - sizeof_little))
	{
		if (big[i] == little[0])
		{
			if (ft_checkstring(big, little, i) == 1)
				return ((char *) &big[i]);
		}
		i++;
	}
	return (0);
}
/*
#include <bsd/string.h>
#include <stdio.h>

int	main(void)
{
	char	*c1 = "Does Form always follow Function?";
	char	*c2 = "";
	int		l = 16;
	char	*s1 = strnstr(c1, c2, l);
	char	*s2 = ft_strnstr(c1, c2, l);
	printf ("BIG = %s\nLITTLE = %s\nLEN = %d\n\n",c1, c2, l);
	printf ("strnstr = %s\nft_strnstr = %s", s1, s2);
	return (0);
}
*/
