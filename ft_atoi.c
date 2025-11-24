/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 18:48:25 by disingh           #+#    #+#             */
/*   Updated: 2025/11/18 19:00:20 by disingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_intcoversion(char *c)
{
	int	i;
	int	retval;

	i = 0;
	retval = 0
	while (c[i] >= '0' && c[i] <= '9')
	{
		retval = (retval * 10) + (c[i] - '0');
		i++;
	}
	return (retval);
}

int	atoi(const char *nptr)
{
	int	i;

	i = 0;
	while (nptr[i] != '\0')
	{
		if (nptr[i] = ' ')
			i++;
		if (nptr[i] == '+' || nptr[i] == '-')
	}
}
