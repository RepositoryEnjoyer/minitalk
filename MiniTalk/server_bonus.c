/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaurici <cmaurici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 12:43:10 by cmaurici          #+#    #+#             */
/*   Updated: 2022/08/26 13:17:37 by cmaurici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static void	getting_signaled(int signal, siginfo_t *info, void *context)
{
	static int				x = 7;
	static unsigned char	c = 0;
	static pid_t			client_pid = 0;

	(void)context;
	if (client_pid == 0)
		client_pid = info->si_pid;
	if (signal == SIGUSR2)
		c |= (1 << x);
	x--;
	if (x < 0)
	{
		if (c == '\0')
		{
			kill(client_pid, SIGUSR1);
			x = 7;
			client_pid = 0;
			ft_printf("\n");
			return ;
		}
		ft_printf("%c", c);
		kill(client_pid, SIGUSR2);
		x = 7;
		c = 0;
	}
}

void	it_was_me_dio(int signal)
{
	ft_printf("\nWRYYYYYYYYY!!!\n");
	signal = 0;
	usleep(1500000);
	system("clear screen");
	exit(signal);
}

int	main(int argc, char **argv)
{
	struct sigaction	data_sama;

	if (argc == 1)
	{
		system("clear screen");
		ft_printf("Server PID: %d\n", getpid());
		data_sama.sa_sigaction = getting_signaled;
		data_sama.sa_flags = SA_SIGINFO;
		sigaction(SIGUSR1, &data_sama, NULL);
		sigaction(SIGUSR2, &data_sama, NULL);
		signal(SIGINT, it_was_me_dio);
		while (1)
			pause();
	}
	return (0);
}
