/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaurici <cmaurici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 11:17:56 by cmaurici          #+#    #+#             */
/*   Updated: 2022/04/25 15:42:28 by cmaurici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int	i;

	if (!dst && !src)
		return (NULL);
	if (dst > src)
	{
		i = (int)len - 1;
		while (i >= 0)
		{
			*(char *)(dst + i) = *(char *)(src + i);
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < (int)len)
		{
			*(char *)(dst + i) = *(char *)(src + i);
			i++;
		}
	}
	return (dst);
}

/* #include <stdio.h>

int	main(void)
{
	char	target[21];
    char    *p;
    char    *src;

    target[21] = "a shiny white sphere";
    p = target + 14;
    printf("Pointer p is :%s\n", p);
    src = target + 5;
    printf("Pointer source is :%s\n", src);
    printf("Before memmove target is :%s\n", target);
    ft_memmove(p, src, 9);
    printf("After memmove target becomes :%s\n", target);
}
 */