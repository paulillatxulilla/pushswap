# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: padan-pe <padan-pe@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/30 17:04:33 by padan-pe          #+#    #+#              #
#    Updated: 2025/05/09 15:17:04 by padan-pe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = push_swap
CC = cc 
CFLAGS = -Wall -Wextra -Werror #-g3 -fsanitize=address
INCLUDE = -I. #directorio de cabeceras (dir actual)
SRC_FILES = ksort.c movements_r.c movements_rr.c movements_s_p.c parse_convert.c utils.c sort_two_three.c index_position.c main.c
OBJ_FILES = $(SRC_FILES:.c=.o)

LIBFT = libft++
LIBFT_LIB = libft++/libft.a

# %.o: %.c #regla para compilar archivos .c en .o
# 	$(CC) $(C_FLAGS) $(INCLUDE) -c $< -o $@
	
all: $(NAME)

$(NAME): $(LIBFT_LIB) $(OBJ_FILES) # para evitar relink, solo hace cambios en la lib si algun archivo .o ha cambiado
		$(CC) $(CFLAGS) $(OBJ_FILES) $(LIBFT_LIB) -o $(NAME)
	
$(LIBFT_LIB):
	@make -C $(LIBFT)
	

clean: #regla para limpiar archivos .o
	rm -f $(OBJ_FILES)
	@make clean -C $(LIBFT)
fclean: #regla para limpiar todo incluyendo la lib
	rm -f $(NAME) $(OBJ_FILES)
	@make fclean -C $(LIBFT)

re: fclean all #recompilar desde 0

.PHONY: all clean fclean re bonus