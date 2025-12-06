/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disingh <disingh@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 20:21:53 by disingh           #+#    #+#             */
/*   Updated: 2025/12/06 16:17:14 by disingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_split_count(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i] != '\0')
			count++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (count);
}

void	ft_split_assign(char **arr, char const *s, char c, size_t count)
{
	size_t	i_arr;
	size_t	i_s;
	size_t	i_arr_s;
	size_t	arr_s_len;

	i_arr = 0;
	i_s = 0;
	i_arr_s = 0;
	while (i_arr < count)
	{
		while (s[i_s] == c)
			i_s++;
		if (i_arr != count - 1)
			arr_s_len = ft_strlen(&s[i_s]) - ft_strlen(ft_strchr(&s[i_s], c));
		else
			arr_s_len = ft_strlen(&s[i_s]);
		arr[i_arr] = ft_calloc((arr_s_len + 1), sizeof (char));
		if (!arr[i_arr])
			break ;
		while (s[i_s] != c && s[i_s] != '\0')
			arr[i_arr][i_arr_s++] = s[i_s++];
		i_arr_s = 0;
		i_arr++;
	}
}

void	ft_freemem(char **arr, size_t split_count)
{
	size_t	i;

	i = 0;
	while (i < split_count)
	{
		if (arr[i])
			free (arr[i]);
		i++;
	}
	free (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	split_count;

	if (!s)
		return (NULL);
	split_count = ft_split_count(s, c);
	arr = ft_calloc(split_count + 1, sizeof (char *));
	if (!arr)
		return (NULL);
	ft_split_assign(arr, s, c, split_count);
	if (split_count > 0 && !arr[split_count - 1])
	{
		ft_freemem(arr, split_count);
		return (NULL);
	}
	return (arr);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*s = "\0aa\0bb";
	char	c = '\0';
	char	**arr;
	int		i_arr = 0;

	arr = ft_split(s, c);
	printf("Original string = %s\nDelimiter = %c\n\n", s, c);
	while (arr[i_arr])
	{
		printf("Array element no. %d = %s\n", i_arr, arr[i_arr]);
		i_arr++;
	}
	printf("Array element no. %d = %s\n", i_arr, arr[i_arr]);
	free (arr);
	return(0);
}
*/
