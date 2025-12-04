/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disingh <disingh@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 07:58:47 by disingh           #+#    #+#             */
/*   Updated: 2025/12/03 01:40:19 by disingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_negint(int n, int fd)
{
	write (fd, "-", 1);
	if (n == -2147483648)
	{
		write(fd, "2147483648", 10);
		return (0);
	}
	return (n * -1);
}

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n < 0)
	{
		n = ft_negint(n, fd);
		if (n == 0)
			return ;
	}
	if (n / 10 == 0)
	{
		c = n + '0';
		write (fd, &c, 1);
	}
	else
	{
		ft_putnbr_fd(n / 10, fd);
		c = (n % 10) + '0';
		write (fd, &c, 1);
	}
}
/*
int	main(void)
{
	int	n = 0;
	ft_putnbr_fd(n, 1);
	write (1, "\n", 1);
	n = -2147483648;
	ft_putnbr_fd(n, 1);
	write (1, "\n", 1);
	n = 2147483647;
	ft_putnbr_fd(n, 1);
	write (1, "\n", 1);
	n = 123456;
	ft_putnbr_fd(n, 1);
	write (1, "\n", 1);
	n = -789012;
	ft_putnbr_fd(n, 1);
	write (1, "\n", 1);
	return (0);
}
*/
