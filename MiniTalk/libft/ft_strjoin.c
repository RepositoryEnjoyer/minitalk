/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaurici <cmaurici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 15:43:18 by cmaurici          #+#    #+#             */
/*   Updated: 2022/04/23 17:23:30 by cmaurici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		a;
	int		b;
	int		i;

	if (!s1 || !s2)
		return (0);
	a = ft_strlen(s1);
	b = ft_strlen(s2);
	i = 0;
	str = malloc((a + b + 1));
	if (!str)
		return (0);
	while (a--)
	{
		str[i] = s1[i];
		i++;
	}
	a = i;
	i = 0;
	while (b--)
		str[a++] = s2[i++];
	str[a] = '\0';
	return (str);
}

/* #include <stdio.h>

int	main(void)
{
	char	s1[] = " Por qué mi código no funciona?";
	char	s2[] = " y lo mismo me pregunto cuando lo hace";
	
	printf("%s", ft_strjoin(s1, s2));
	return(0);
}
 */