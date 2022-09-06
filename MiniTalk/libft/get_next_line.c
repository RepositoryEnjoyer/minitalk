/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaurici <cmaurici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 11:09:07 by cmaurici          #+#    #+#             */
/*   Updated: 2022/07/25 15:23:59 by cmaurici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*empty_store(char *store)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (store[i] && store[i] != '\n')
		i++;
	if (!store[i])
	{
		free(store);
		return (NULL);
	}
	str = malloc(sizeof(char) * (ft_strlengnl(store) - i + 1));
	if (!str)
		return (NULL);
	i++;
	while (store[i])
		str[j++] = store[i++];
	str[j] = '\0';
	free(store);
	return (str);
}

char	*trim_line(char *store)
{
	int		i;
	char	*rtn;

	i = 0;
	if (!store[i])
		return (NULL);
	while (store[i] && store[i] != '\n')
		i++;
	rtn = malloc(sizeof(char) * i + 2);
	if (!rtn)
		return (NULL);
	i = 0;
	while (store[i] && store[i] != '\n')
	{
		rtn[i] = store[i];
		i++;
	}
	if (store[i] == '\n')
	{
		rtn[i] = '\n';
		i++;
	}
	rtn[i] = '\0';
	return (rtn);
}

char	*read_line(int fd, char *store)
{
	char	*tmp;
	int		read_rslt;

	tmp = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!tmp)
		return (NULL);
	read_rslt = 1;
	while (read_rslt != 0 && !ft_strchrgnl(store, '\n'))
	{
		read_rslt = read(fd, tmp, BUFFER_SIZE);
		if (read_rslt == -1)
		{
			free(tmp);
			return (NULL);
		}
		tmp[read_rslt] = '\0';
		if (!store)
		{
			store = malloc(sizeof(char) * 1);
			store[0] = '\0';
		}
		store = ft_strjoingnl(store, tmp);
	}
	free(tmp);
	return (store);
}

char	*get_next_line(int fd)
{
	static char	*store;
	char		*rtn;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	store = read_line(fd, store);
	if (!store)
		return (NULL);
	rtn = trim_line(store);
	store = empty_store(store);
	return (rtn);
}
