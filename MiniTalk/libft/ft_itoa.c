/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaurici <cmaurici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 16:03:57 by cmaurici          #+#    #+#             */
/*   Updated: 2022/04/28 18:48:29 by cmaurici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_fill(char c, char *str, size_t pos)
{
	str[pos] = c;
}

static int	ft_ndigit(int n)
{
	size_t	count;

	count = 1;
	while (n >= 10)
	{
		n = n / 10;
		count++;
	}
	while (n <= -10)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

static size_t	ft_putnbr_str(int n, char *str, size_t pos)
{
	if (n == -2147483648)
	{
		ft_fill('-', str, pos);
		pos++;
		ft_fill('2', str, pos);
		pos++;
		n = 147483648;
	}
	if (n < 0)
	{
		ft_fill('-', str, pos);
		pos++;
		n *= -1;
	}
	if (n < 10)
	{
		ft_fill(n + 48, str, pos);
		pos++;
	}
	else
	{
		pos = ft_putnbr_str(n / 10, str, pos);
		pos = ft_putnbr_str(n % 10, str, pos);
	}
	return (pos);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	pos;

	if (n >= 0)
		str = malloc(sizeof(char) * ft_ndigit(n) + 1);
	else
		str = malloc(sizeof(char) * ft_ndigit(n) + 2);
	if (!str)
		return (NULL);
	pos = 0;
	if (n >= 0)
		str[ft_ndigit(n)] = '\0';
	else
		str[ft_ndigit(n) + 1] = '\0';
	ft_putnbr_str(n, str, pos);
	return (str);
}

/* #include <stdio.h>

int	main(void)
{
	printf("%s", ft_itoa(-1));
	return (0);
}
 */