/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaurici <cmaurici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 14:07:45 by cmaurici          #+#    #+#             */
/*   Updated: 2022/04/22 11:22:44 by cmaurici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

/*int	main(void)
{
	char	c[] = "El perro del hortelano era un poco gilipollas";
	ft_bzero(c, 7);
	printf("%s", c);
	return (0);
}
*/
