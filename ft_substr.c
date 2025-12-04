/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disingh <disingh@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 20:08:14 by disingh           #+#    #+#             */
/*   Updated: 2025/12/03 06:06:20 by disingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*c;
	size_t	len_s;

	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	if (start > len_s)
		return (ft_strdup(""));
	if (len > len_s - start)
		len = len_s - start;
	c = ft_calloc (len + 1, sizeof (char));
	if (!c)
		return (NULL);
	ft_memmove (c, &s[start], len);
	return (c);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*s = "Hello World";
	int		start = 1;
	size_t	len = 50;
	char	*c;

	c = ft_substr(s, start, len);
	printf("%s :\nStart = %d\nLength = %ld\n\n", s, start, len);
	printf("ft_substr = %s\n", c);
	free (c);
	return (0);
}
*/
