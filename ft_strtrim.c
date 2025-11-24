/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 16:54:56 by disingh           #+#    #+#             */
/*   Updated: 2025/11/24 17:20:33 by disingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

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
	int		i;
	size_t	sizeof_little;

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

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*c;
	int		i;
	size_t	len_s1;
	size_t	len_set;

	if (!s1)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_set = ft_strlen(set);
	i = 0;
	c = calloc ((len_s1 - len_set) + 1, sizeof(char));
	if (!c)
		return (NULL);
	while (i < len_s1 - (len_set - 1))
	{
		while (s1[i] != set[0])
			c[i] = s1[i++];
		if (s1[i] == set[0] && ft_checkstring(s1, set, i) == 1)
			i = i + len_set;
		else
			c[i] = s1[i];
		i++;
	}
	return (c);
}

int	main(void)
{
	char	*c = "Hello dear world";
	char	*d = "dear ";
	char	*e = ft_strtrim (c, d);
	printf("s1 = %s\nset = %s\nft_strtrim = %s\n", c, d, e);
	free (e);
	return (0);
}
