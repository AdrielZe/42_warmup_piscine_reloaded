# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asilveir <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/07 20:16:54 by asilveir          #+#    #+#              #
#    Updated: 2024/10/07 20:26:38 by asilveir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a #Define o nome do arquivo que vai ser gerado

CC = cc #Especifica o compilador que será utilizado

INCLUDES = ./includes #Diretório onde os arquivos de cabeçalho .h estão localizados

FLAGS = -Wall -Wextra -Werror #Flags que serão usadas na hora da compilação

SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c \
			srcs/ft_strlen.c srcs/ft_swap.c #Listar os arquivos .c

OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o \
			ft_strlen.o ft_swap.o #Lista os arquivos objeto .o que são arquivos compilados, gerados a partir dos arquivos .c
#Regras
all: $(NAME) #Depende da criação do arquivo $(name) nesse caso, libft.a

$(NAME):
	$(CC) $(FLAGS) -c $(SRC) -I $(INCLUDES) #Compila os arquivos .c em src
	ar rc $(NAME) $(OBJ) #cria a biblioteca estática libft.a
	ranlib $(NAME) #gera um indíce para a biblioteca estática

clean:
	rm -rf $(OBJ) #remove os arquivos .o gerados na compilacao

fclean: clean
	rm -rf $(NAME) 

re: fclean all

.PHONY: all clean fclean re
