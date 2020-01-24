# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2017/11/17 11:29:05 by fablin       #+#   ##    ##    #+#        #
#    Updated: 2020/01/24 17:58:17 by kcabus      ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME =		rush01

INC_DIR =	./inc/

SRC_DIR =	./src/

OBJ_DIR =	./obj/

BIN_DIR =	./bin/
#TODO : relink .hpp
C_FILES =	main.cpp	\
			Monitor.cpp	\
			ShellUI.cpp	\
			GraphicUI.cpp	\
			HostModule.cpp	\
			OSModule.cpp	\
			CpuModule.cpp	

O_FILES =	$(C_FILES:.cpp=.o)

SOURCES =	$(addprefix $(SRC_DIR), $(C_FILES))

OBJECTS =	$(addprefix $(OBJ_DIR), $(O_FILES))

CC =		clang++

CC_FLAGS =	-Wall -Werror -Wextra

DEBUG_FLAG = -ggdb

all: $(NAME)

$(NAME):$(OBJECTS)
	@mkdir -p $(BIN_DIR)
	@$(CC) $(CC_FLAGS) -lncurses $(OBJECTS) -I $(INC_DIR) -o $(BIN_DIR)$(NAME)
	@echo "$(BIN_DIR)$(NAME) is ready :)"

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CC_FLAGS) -c $< -o $@ -I $(INC_DIR)

clean:
	@rm -fr $(OBJ_DIR)
	@rm -fr $(BIN_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re