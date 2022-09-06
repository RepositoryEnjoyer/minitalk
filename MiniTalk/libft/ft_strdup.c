/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaurici <cmaurici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 17:41:32 by cmaurici          #+#    #+#             */
/*   Updated: 2022/04/25 16:24:04 by cmaurici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dup;

	dup = (char *)malloc(ft_strlen(s1) + 1);
	if (!dup)
		return (0);
	ft_memcpy(dup, s1, ft_strlen(s1) + 1);
	return (dup);
}

/* #include <stdio.h>
int	main(void)
{
	const char	s[] = "2147483649";q
	
    printf("%s", ft_strdup(s));
    return (0);
}
 */