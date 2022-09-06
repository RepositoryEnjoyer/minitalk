/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaurici <cmaurici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 13:59:46 by cmaurici          #+#    #+#             */
/*   Updated: 2022/04/22 17:11:59 by cmaurici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	const char	*ptr;
	size_t		size;

	ptr = s;
	size = 0;
	while (*ptr != '\0')
	{
		size++;
		ptr++;
	}
	return (size);
}

/* int	main(void)
{
	char	*str;

	str = "ZaWarudo!!!";
	printf("%zu", ft_strlen(str));
	return (0);
}
 */