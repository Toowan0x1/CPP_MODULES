CXX = c++
CXXFLAGS = -std=c++98 -Wall -Wextra -Werror
LDFLAGS =

SRC_DIR = .
TARGET = RPN

SRC = $(wildcard $(SRC_DIR)/*.cpp)
OBJ = $(patsubst $(SRC_DIR)/%.cpp,%.o,$(SRC))

GREEN = \033[0;32m
YELLOW = \033[0;33m
RESET = \033[0m

all: $(TARGET)

$(TARGET): $(OBJ)
	@echo "$(YELLOW)Linking...$(RESET)"
	@$(CXX) $(LDFLAGS) -o $@ $^
	@echo "$(GREEN)Compilation complete: $(TARGET)$(RESET)"

%.o: $(SRC_DIR)/%.cpp
	@echo "$(YELLOW)Compiling $<...$(RESET)"
	@$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
	@$(RM) $(OBJ)
	@printf "$(YELLOW)- Object files removed.$(RESET)\n"

fclean: clean
	@$(RM) $(TARGET)
	@printf "$(YELLOW)- Executable removed.$(RESET)\n"

re: fclean all

.PHONY: all clean fclean re