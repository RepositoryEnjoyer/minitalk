/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaurici <cmaurici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 16:16:53 by cmaurici          #+#    #+#             */
/*   Updated: 2022/04/23 19:02:25 by cmaurici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_write(int c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int nb, int fd)
{
	if (nb == -2147483648)
	{
		ft_write('-', fd);
		write(fd, "2147483648", 10);
	}
	else
	{
		if (nb < 0)
		{
			ft_write('-', fd);
			nb *= -1;
		}
		if (nb >= 10)
			ft_putnbr_fd(nb / 10, fd);
		ft_write((nb % 10) + '0', fd);
	}
}
