/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaurici <cmaurici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 15:45:30 by cmaurici          #+#    #+#             */
/*   Updated: 2022/04/27 13:14:18 by cmaurici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	char	*rtn;

	if (!s1 || !set)
		return (0);
	while (ft_strchr(set, *s1) && *s1 != '\0')
		s1++;
	if (*s1 == '\0')
		return (ft_strdup(""));
	len = ft_strlen(s1);
	while (ft_strchr(set, s1[len]))
		len--;
	rtn = ft_substr(s1, 0, len + 1);
	return (rtn);
}

/* #include <stdio.h>

int	main(void)
{
	char const set[] = "hombre";
	char const s1[] = "El hombre lobo mordió a la niña";
	
	printf("%s", ft_strtrim(s1, set));
	return (0);
}
 */
