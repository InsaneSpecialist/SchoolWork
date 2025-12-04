/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disingh <disingh@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 19:08:22 by disingh           #+#    #+#             */
/*   Updated: 2025/12/04 21:50:45 by disingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>

size_t	ft_strlen(const char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
		i++;
	printf ("size of %s is %d\n", c, i);
	return (i);
}
*/
char	*ft_strdup(const char *s)
{
	char	*c;
	size_t	i;
	size_t	len;

	len = ft_strlen(s);
	i = 0;
	c = malloc ((len + 1) * sizeof (char));
	if (!c)
		return (NULL);
	while (i < len)
	{
		c[i] = s[i];
		i++;
	}
	c[i] = '\0';
	return (c);
}
/*
#include <string.h>

int	main(void)
{
	char	*c = "";
	char	*d;
	char	*e;
	int		len1;
	int		len2;

	d = strdup(c);
	e = ft_strdup(c);
	len1 = strlen(d);
	len2 = strlen(e);
	printf("%s:\n\nstrdup = %s\nwith length = %d\n\n", c, d, len1);
	printf("ft_strdup = %s\nwith length = %d\n", e, len2);
	free (c);
	return (0);
}
*/
