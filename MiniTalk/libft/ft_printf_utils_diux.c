/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_diux.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaurici <cmaurici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 15:51:13 by cmaurici          #+#    #+#             */
/*   Updated: 2022/05/31 12:49:34 by cmaurici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbrf(int nb)
{
	char	*str;
	int		len;

	str = ft_itoa(nb);
	if (!str)
		return (0);
	len = ft_strlenf(str);
	write(1, str, len);
	free(str);
	return (len);
}

int	ft_putten(unsigned int nb)
{
	static int	i;

	i = 0;
	if (nb >= 10)
	{
		ft_putten(nb / 10);
		nb %= 10;
	}
	ft_putcharf(nb + '0');
	i++;
	return (i);
}

int	ft_puthexmayus(unsigned long long nb)
{
	static int	i;

	i = 0;
	if (nb >= 16)
		ft_puthexmayus(nb / 16);
	ft_putcharf("0123456789ABCDEF"[nb % 16]);
	i++;
	return (i);
}
