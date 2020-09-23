# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/23 14:48:02 by adrossig          #+#    #+#              #
#    Updated: 2020/09/23 15:30:02 by adrossig         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

##################################### PATH #####################################

PTF = src/
LIBFT = libs/libft/src/

#################################### SOURCES ###################################

SRCS =	$(PTF)format/ft_calloc_flag.c		$(PTF)character/ft_char_add_width.c \
		$(PTF)format/ft_check_format.c		$(PTF)string/ft_extract_buffer_part.c \
		$(PTF)format/ft_format_arg.c		$(PTF)format/ft_get_format.c \
		$(PTF)string/ft_get_string.c		$(PTF)number/ft_hexitoa.c \
		$(PTF)number/ft_int_add_precision.c	$(PTF)number/ft_int_add_width.c \
		$(PTF)base/ft_join.c				$(PTF)number/ft_print_adress.c \
		$(PTF)base/ft_print_arguments.c		$(PTF)character/ft_print_char.c \
		$(PTF)number/ft_print_nbr.c			$(PTF)string/ft_print_str.c \
		$(PTF)ft_printf.c					$(PTF)number/ft_put_formatted_nbr.c \

##################################### BASIC ####################################

CFLAGS = -Wall -Wextra -Werror

CC = gcc

INC = includes/

HEADER = $(INC)ft_printf.h

OBJS = $(SRCS:.c=.o)

OBJLIB =	$(LIBFT)array/*.o	$(LIBFT)crypt/*.o \
			$(LIBFT)conv/*.o	$(LIBFT)dict/*.o \
			$(LIBFT)mem/*.o		$(LIBFT)file/*.o \
			$(LIBFT)char/*.o	$(LIBFT)lst/*.o \
			$(LIBFT)malloc/*.o	$(LIBFT)math/*.o \
			$(LIBFT)print/*.o	$(LIBFT)sort/*.o \
			$(LIBFT)str/*.o		$(LIBFT)vector/*.o \
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
	rm -f $(PTF)*.o

fclean: clean
	$(MAKE) -C libs/libft fclean
	rm -f $(NAME)

re: fclean all

.PHONY:	all clean fclean re
