# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cmaurici <cmaurici@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/25 15:35:57 by cmaurici          #+#    #+#              #
#    Updated: 2022/08/24 16:53:59 by cmaurici         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS   = server.c
CRCS   = client.c
BSRCS  = server_bonus.c
BSRCS2 = client_bonus.c
OBJS   = ${SRCS:.c=.o}
COBJS  = ${CRCS:.c=.o}
BOBJS  = ${BSRCS:.c=.o} 
BOBJS2 = ${BSRCS2:.c=.o}
NAME   = server.a
NAME2  = client.a
BONUS  = server_bonus.a
BONUS2 = client_bonus.a
CC     = gcc
CFLAGS = -Wall -Wextra -Werror
RM	   = rm -f

all: server client

%.o: %.c
	${CC} ${FLAGS} -c $< -o $@

$(NAME): ${OBJS}
	${MAKE} -C ./libft
	ar -rcs $(NAME) ${OBJS}

$(NAME2): ${COBJS}
	ar -rcs $(NAME2) ${COBJS}

$(BONUS): ${BOBJS}
	ar -rcs $(BONUS) ${BOBJS}

$(BONUS2): ${BOBJS2}
	ar -rcs $(BONUS2) ${BOBJS2}	

clean:
	${RM} ${OBJS} ${COBJS} ${BOBJS} ${BOBJS2}
	${MAKE} -C ./libft clean

fclean: clean
	${RM} $(NAME)
	${RM} server
	${RM} $(NAME2)
	${RM} client
	${RM} $(BONUS)
	${RM} server_bonus
	${RM} $(BONUS2)
	${RM} client_bonus
	${MAKE} -C ./libft fclean

server: ${NAME}
	gcc ${OBJS} libft/libft.a -o server

client: ${NAME2}
	gcc ${COBJS} libft/libft.a -o client

bonus:  ${BONUS} ${BONUS2}
	gcc ${BOBJS} libft/libft.a -o server_bonus
	gcc ${BOBJS2} libft/libft.a -o client_bonus

re: fclean all
		
.PHONY: all clean fclean re bonus