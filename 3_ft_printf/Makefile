# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/29 12:25:32 by adrossig          #+#    #+#              #
#    Updated: 2020/10/09 10:16:09 by adrossig         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

##################################### PATH #####################################

PTF = src/
LIBFT = libs/libft/src/

#################################### SOURCES ###################################

SRCS =	$(PTF)format/ft_calloc_flag.c $(PTF)format/ft_check_format.c $(PTF)format/ft_get_format.c \
		$(PTF)character/ft_char_add_width.c $(PTF)character/ft_int_add_precision.c $(PTF)character/ft_print_char.c \
		$(PTF)string/ft_extract_buffer_part.c $(PTF)string/ft_print_str.c \
		$(PTF)base/ft_join.c $(PTF)base/ft_print_arguments.c $(PTF)base/ft_get_string.c \
		$(PTF)number/ft_print_nbr.c $(PTF)number/ft_hexitoa.c $(PTF)number/ft_put_formatted_nbr.c \
		$(PTF)number/ft_int_add_width.c $(PTF)number/ft_print_adress.c \
		$(PTF)ft_format_arg.c $(PTF)ft_printf.c

##################################### BASIC ####################################

CFLAGS = -Wall -Wextra -Werror

CC = gcc

INC = includes/

HEADER = $(INC)libftprintf.h

OBJS = $(SRCS:.c=.o)

OBJLIB =	$(LIBFT)array/*.o $(LIBFT)char/*.o $(LIBFT)conv/*.o \
			$(LIBFT)crypt/*.o $(LIBFT)dict/*.o $(LIBFT)file/*.o \
			$(LIBFT)lst/*.o $(LIBFT)malloc/*.o $(LIBFT)math/*.o \
			$(LIBFT)mem/*.o $(LIBFT)number/*.o $(LIBFT)print/*.o \
			$(LIBFT)sort/*.o $(LIBFT)str/*.o $(LIBFT)vector/*.o \
			$(PTF)base/*.o $(PTF)character/*.o $(PTF)format/*.o \
			$(PTF)number/*.o $(PTF)string/*.o $(PTF)/*.o

##################################### RULES ####################################

all: complib $(NAME)

complib:
		$(MAKE) -C libs/libft all

$(OBJS): %.o: %.c $(HEADER)
		$(CC) $(CFLAGS) -I$(INC) -c $< -o $@

$(NAME): $(OBJS)
	ar rc $@ $(OBJS) $(OBJLIB)
	ranlib $(NAME)

clean:
	$(MAKE) -C libs/libft clean
	rm -f $(OBJLIB)

fclean: clean
	$(MAKE) -C libs/libft fclean
	rm -f $(NAME)

re: fclean all

.PHONY:	all clean fclean re
