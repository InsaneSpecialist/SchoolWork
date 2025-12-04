/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disingh <disingh@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 02:00:50 by disingh           #+#    #+#             */
/*   Updated: 2025/12/03 06:27:42 by disingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count(int n)
{
	int	i;

	i = 1;
	while (n / 10 != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

void	ft_assign(char *c, int n, int count)
{
	while (count >= 0 && c[count] != '-')
	{
		c[count--] = n % 10 + '0';
		n = n / 10;
	}
}

char	*ft_itoa(int n)
{
	char	*c;
	int		count;

	count = ft_count(n);
	if (n < 0)
	{
		c = ft_calloc(count + 2, sizeof (char));
		if (!c)
			return (NULL);
		c[0] = '-';
		if (n == -2147483648)
		{
			n = n / 10;
			c[count--] = '8';
		}
		n = n * -1;
	}
	else
	{
		c = ft_calloc(count + 1, sizeof (char));
		count--;
	}
	ft_assign (c, n, count);
	return (c);
}
/*
int	main(void)
{
	int		n1 = -12354;
	int		n2 = 123456;
	int		n3 = 0;
	int		n4 = -2147483648;
	int		n5 = 2147483647; 
	char	*c;

	c = ft_itoa(n1);
	printf("The int is %d\nThe string is %s\n", n1, c);
	c = ft_itoa(n2);
	printf("The int is %d\nThe string is %s\n", n2, c);
	c = ft_itoa(n3);
	printf("The int is %d\nThe string is %s\n", n3, c);
	c = ft_itoa(n4);
	printf("The int is %d\nThe string is %s\n", n4, c);
	c = ft_itoa(n5);
	printf("The int is %d\nThe string is %s\n", n5, c);
	free (c);
	return (0);
}
*/
