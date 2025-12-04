/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 16:54:56 by disingh           #+#    #+#             */
/*   Updated: 2025/12/03 05:57:36 by disingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	trimmed = ft_calloc((end - start) + 1, sizeof (char));
	if (!trimmed)
		return (NULL);
	ft_memmove(trimmed, s1 + start, (end - start));
	return (trimmed);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*c = "  !!*!????   ****!";
	char	*d = " !*?";
	char	*e = ft_strtrim (c, d);
	printf("s1 = %s\nset = %s\nft_strtrim = %s\n", c, d, e);
	free (e);
	return (0);
}
*/
