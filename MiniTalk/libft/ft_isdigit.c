/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaurici <cmaurici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 12:09:56 by cmaurici          #+#    #+#             */
/*   Updated: 2022/04/22 11:26:17 by cmaurici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if ((c > 47) && (c < 58))
		return (1);
	return (0);
}

/* int	main(void)
{
	if (ft_isdigit(50))
		printf("Es un carácter numérico");
	else
		printf("Nein");
}
 */