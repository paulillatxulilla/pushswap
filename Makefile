# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: padan-pe <padan-pe@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/30 17:04:33 by padan-pe          #+#    #+#              #
#    Updated: 2025/04/30 17:41:09 by padan-pe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = push_swap.a
CC = cc 
C_FLAGS = -Wall -Wextra -Werror
INCLUDE = -I. #directorio de cabeceras (dir actual)
SRC_FILES = ksort.c movements_r.c movements_rr.c movements_s_p.c parse_convert.c push_swap.c sort_two_three.c
OBJ_FILES = $(SRC_FILES:%.c=%.o)

LIBFT = libft++
LIBFT_LIB = libft++/libft.a

all: $(NAME)

$(NAME): $(LIBFT_LIB) $(OBJ_FILES) # para evitar relink, solo hace cambios en la lib si algun archivo .o ha cambiado
	ar rcs $(NAME) $(OBJ_FILES) $(LIBFT_LIB)
	
$(LIBFT_LIB):
	@make -C $(LIBFT)
	
%.o: %.c #regla para compilar archivos .c en .o
	$(CC) $(C_FLAGS) $(INCLUDE) -c $< -o $@

clean: #regla para limpiar archivos .o
	rm -f $(OBJ_FILES)
	@make clean -C $(LIBFT)
fclean: #regla para limpiar todo incluyendo la lib
	rm -f $(NAME) $(OBJ_FILES) $(LIBFT_LIB)

re: fclean all #recompilar desde 0

.PHONY: all clean fclean re bonus