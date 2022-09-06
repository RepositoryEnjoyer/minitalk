/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaurici <cmaurici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 16:31:40 by cmaurici          #+#    #+#             */
/*   Updated: 2022/09/01 19:52:02 by cmaurici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_send_bits(unsigned char octet, int pid_s)
{
	int				i;
	unsigned char	bit;

	i = 8;
	while (i--)
	{
		bit = ((octet >> i) & 1) + '0';
		if (bit == '1')
			kill(pid_s, SIGUSR2);
		else
			kill(pid_s, SIGUSR1);
		usleep(100);
	}
}

int	main(int argc, char *argv[])
{
	const char	*str;
	int			i;

	i = 0;
	str = argv[2];
	if (argc == 3)
	{
		while (i <= ft_strlen(str))
		{
			ft_send_bits(str[i], ft_atoi(argv[1]));
			i++;
		}
	}
	return (0);
}
