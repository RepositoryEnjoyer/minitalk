/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaurici <cmaurici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 16:46:10 by cmaurici          #+#    #+#             */
/*   Updated: 2022/04/25 17:24:50 by cmaurici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*mem;

	if ((count + size < count) || (count + size < size))
		return (0);
	mem = malloc(count * size);
	if (!mem)
		return (0);
	ft_bzero(mem, count * size);
	return (mem);
}
