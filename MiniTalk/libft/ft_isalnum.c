/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaurici <cmaurici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 13:25:27 by cmaurici          #+#    #+#             */
/*   Updated: 2022/04/22 11:23:57 by cmaurici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (((c > 64) && (c < 91)) || ((c > 96) && (c < 123)))
		return (1);
	else if ((c > 47) && (c < 58))
		return (1);
	return (0);
}

/* int	main(void)
{
	if (ft_isalnum(65))
		printf("Es un carácter alfanumérico");
	else
		printf("Caca");
}
 */