# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oel-houm <oel-houm@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/18 16:52:21 by oel-houm          #+#    #+#              #
#    Updated: 2023/12/19 15:31:15 by oel-houm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = clang++
CXXFLAGS = -std=c++98 -Wall -Wextra -Werror

SRC_DIR = .
TARGET = ScavTrap
SRC = $(SRC_DIR)/$(TARGET).cpp

# Colors for terminal output
GREEN = \033[0;32m
YELLOW = \033[0;33m
RESET = \033[0m

all: $(TARGET)

$(TARGET): $(SRC)
        @echo "$(YELLOW)Compiling $(TARGET).cpp...$(RESET)"
        @$(CXX) $(CXXFLAGS) -o $@ $^
        @echo "$(GREEN)Compilation complete: $(TARGET)$(RESET)"

clean:
        @$(RM) $(TARGET)
        @printf "$(YELLOW)- Executable removed.$(RESET)\n"

fclean: clean

re: fclean all

.PHONY: all clean fclean re
