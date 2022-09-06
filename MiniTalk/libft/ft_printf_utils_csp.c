/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_csp.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaurici <cmaurici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 13:46:25 by cmaurici          #+#    #+#             */
/*   Updated: 2022/05/31 12:49:40 by cmaurici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putcharf(int c)
{
	write(1, &c, 1);
	return (1);
}

size_t	ft_strlenf(const char *s)
{
	size_t	size;

	size = 0;
	while (*s != '\0')
	{
		size++;
		s++;
	}
	return (size);
}

int	ft_putstrf(char *s)
{
	if (!s)
	{
		write(1, "(null)", ft_strlenf("(null)"));
		return (ft_strlenf("(null)"));
	}
	write(1, s, ft_strlenf(s));
	return (ft_strlenf(s));
}

int	ft_puthexmin(unsigned long long nb)
{
	static int	i;

	i = 0;
	if (nb >= 16)
		ft_puthexmin(nb / 16);
	ft_putcharf("0123456789abcdef"[nb % 16]);
	i++;
	return (i);
}
