/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_srtnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaurici <cmaurici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 15:09:36 by cmaurici          #+#    #+#             */
/*   Updated: 2022/04/22 16:32:03 by cmaurici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0')
	{
		j = 0;
		while ((i + j) < len && haystack[i + j] == needle[j])
		{
			if (needle[j + 1] == '\0')
				return ((char *)&haystack[i]);
			j++;
		}
		i++;
	}
	return (0);
}

/* int	main(void)
{
	char	pajar[]= "Hola que tal";
	char	aguja[]= "u";
	char	*ptr;

	printf("%s\n", pajar);
	printf("%s\n", aguja);
	ptr = ft_strnstr(pajar, aguja, 7);
	printf("%s", ptr);
	return (0);
}
 */