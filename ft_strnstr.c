/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 17:47:30 by disingh           #+#    #+#             */
/*   Updated: 2025/11/18 18:43:32 by disingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
//#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

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
	if (little[j] == '\0')
		return (1);
	else
		return (0);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	sizeof_little;

	i = 0;
	sizeof_little = ft_strlen(little);
	while (big[i] != '\0' && i < (int) len - (sizeof_little - 1))
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
#include <string.h>

int	main(void)
{
	char	*c1 = "Does Form always follow Function?";
	char	*c2 = "always";
	int		l = 160;
	char	*s1 = strnstr(c1, c2, l);
	char	*s2 = ft_strnstr(c1, c2, l);
	printf ("BIG = %s\nLITTLE = %s\nLEN = %d\n\n",c1, c2, l);
	printf ("strnstr = %s\nft_strnstr = %s", s1, s2);
	return (0);
}
*/
