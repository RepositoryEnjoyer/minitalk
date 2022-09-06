/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaurici <cmaurici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 15:15:51 by cmaurici          #+#    #+#             */
/*   Updated: 2022/04/23 18:56:54 by cmaurici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char *str)
{
	int	i;

	i = 0;
	while ((str[i] > 8 && str[i] < 14) || str[i] == ' ')
		i++;
	return (i);
}

int	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	int		nbr;
	char	*str2;

	str2 = (char *)str;
	i = ft_isspace(str2);
	sign = 1;
	if (str2[i] == '-' || str2[i] == '+')
	{
		if (str2[i] == '-')
			sign *= -1;
		i++;
	}
	else if (str2[i] == '+')
		i++;
	nbr = 0;
	while (str2[i] >= '0' && str2[i] <= '9')
		nbr = nbr * 10 + (str2[i++] - '0');
	nbr *= sign;
	if (sign > 0 && nbr < 0)
		return (-1);
	if (sign < 0 && nbr > 0)
		return (0);
	return (nbr);
}

/* #include <stdio.h>
int	main(void)
{
	const char	s[] = "2147483649";
	
    printf("%d", ft_atoi(s));
    return (0);
}
 */