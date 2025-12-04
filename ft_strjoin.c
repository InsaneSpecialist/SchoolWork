/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disingh <disingh@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 21:22:36 by disingh           #+#    #+#             */
/*   Updated: 2025/12/04 22:28:32 by disingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*c;
	int		len_s1;
	int		len_s2;

	if (!s1 && !s2)
		return (NULL);
	len_s1 = 0;
	len_s2 = 0;
	if (s1)
		len_s1 = ft_strlen(s1);
	if (s2)
		len_s2 = ft_strlen(s2);
	c = ft_calloc ((len_s1 + len_s2 + 1), sizeof (char));
	if (!c)
		return (NULL);
	if (s1)
		ft_memmove (c, s1, len_s1);
	if (s2)
		ft_memmove(c + len_s1, s2, len_s2);
	return (c);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*s1 = NULL;
	char	*s2 = "World";
	char	*c = ft_strjoin(s1, s2);
	printf("S1 = %s\nS2 = %s\nft_strjoin = %s\n", s1, s2, c);
	free (c);
	return (0);
}
*/
