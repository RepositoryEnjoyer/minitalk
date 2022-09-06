/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaurici <cmaurici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 16:39:28 by cmaurici          #+#    #+#             */
/*   Updated: 2022/04/22 11:27:53 by cmaurici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = (unsigned char *)b;
	while (i < len)
		str[i++] = c;
	return (str);
}

/*int	main(void)
{
	char	c[] = "El perro del hortelano era un poco gilipollas";
	
	printf("%s", ft_memset(c, '$', 7));
	return (0);
}
*/