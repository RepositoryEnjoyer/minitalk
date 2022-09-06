/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaurici <cmaurici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 17:57:35 by cmaurici          #+#    #+#             */
/*   Updated: 2022/06/29 20:07:20 by cmaurici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_min(size_t a, size_t b)
{
	if (a > b)
		return (b);
	return (a);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*rtn;
	size_t	i;

	if (!s)
		return (0);
	if (*s == '\0')
		return (ft_strdup(""));
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	rtn = (char *)malloc(sizeof(char) * ft_min(ft_strlen(s), len) + 1);
	if (!rtn)
		return (0);
	i = 0;
	while (i < ft_min(ft_strlen(s), len))
	{
		rtn[i] = s[start + i];
		i++;
	}
	rtn[i] = '\0';
	return (rtn);
}

/* static size_t	ft_checkmalloc(size_t a, size_t b)
{
	if (a < b)
		return (a);
	return (b);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*substr;
	if (!s)
		return (0);
	if (ft_strlen(s) < start)
	{
		substr = malloc(sizeof(char));
		*substr = '\0';
		return (substr);
	}
	substr = (char *)malloc(ft_checkmalloc(ft_strlen(s), len) + 1);
	if (substr == 0)
		return (0);
	i = start;
	j = 0;
	while (s[i] && i < start + len)
	{
		substr[j] = s[i];
		i++;
		j++;
	}
	substr[j] = '\0';
	return (substr);
}
 */

/* #include <stdio.h>

int	main(void)
{
	char	s[];

	s[] = "Eres feo";
	
	printf("%s", ft_substr(s, 2, 5));
	return (0);
}
 */