# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oel-houm <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/16 23:34:10 by oel-houm          #+#    #+#              #
#    Updated: 2023/08/16 23:34:11 by oel-houm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = clang++
CXXFLAGS = -std=c++98 -Wall -Wextra -Werror

SRC_DIR = .
TARGET = megaphone
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
