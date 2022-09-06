/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaurici <cmaurici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 16:31:40 by cmaurici          #+#    #+#             */
/*   Updated: 2022/09/05 16:50:56 by cmaurici         ###   ########.fr       */
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

void	signaled_back(int signal)
{
	static int	signaled_back;

	signaled_back = 0;
	if (signal == SIGUSR1)
	{
		ft_printf("ZA WARUDO!!!\n");
		usleep(500000);
		ft_printf("TOKI WO TOMAREEEEE!!!\n");
		usleep(500000);
		ft_printf("*Time stopped, now you dead*\n");
		usleep(2500000);
		exit(0);
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
		signal(SIGUSR1, signaled_back);
		signal(SIGUSR2, signaled_back);
		while (i <= ft_strlen(str))
		{
			ft_send_bits(str[i], ft_atoi(argv[1]));
			i++;
		}
		while (1)
			pause();
	}
	return (0);
}
