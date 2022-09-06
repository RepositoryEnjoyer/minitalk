/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaurici <cmaurici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 13:20:02 by cmaurici          #+#    #+#             */
/*   Updated: 2022/04/23 13:53:27 by cmaurici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if ((c > 96) && (c < 123))
		c = c - 32;
	return (c);
}

/* int	main(void)
{
	printf("%c", ft_toupper(100));
	return (0);
}
 */
