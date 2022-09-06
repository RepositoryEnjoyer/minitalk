/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaurici <cmaurici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 13:54:02 by cmaurici          #+#    #+#             */
/*   Updated: 2022/04/24 12:19:30 by cmaurici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if ((c > 31) && (c < 127))
		return (1);
	return (0);
}

/* int	main(void)
{
	if (ft_isprint(32))
		printf("Es un carácter imprimible");
	else
		printf("Nanai");
}
 */