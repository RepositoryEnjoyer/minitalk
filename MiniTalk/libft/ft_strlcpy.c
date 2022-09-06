/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaurici <cmaurici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 12:42:31 by cmaurici          #+#    #+#             */
/*   Updated: 2022/04/22 11:29:23 by cmaurici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	c;
	size_t	i;

	c = 0;
	i = 0;
	while (src[c] != '\0')
		c++;
	if (dstsize != 0)
	{
		while ((src[i] != '\0') && (i < (dstsize - 1)))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}	
	return (c);
}

/* int	main(void)
{
	char	dest[6];
	char	*src;

	src = "Hola Mundo";
	printf("%d", ft_strlcpy(dest, src, 10));
	printf(" ");
	printf("%s", dest);
	return (0);
}
 */