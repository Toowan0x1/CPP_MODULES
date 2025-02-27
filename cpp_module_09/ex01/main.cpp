#include "RPN.hpp"

int main(int ac, char **av)
{
    if (ac != 2) {
        std::cerr << "Usage: ./RPN <expression>" << std::endl;
        return 1;
    }
    RPN rpn;
    try {
        int result = rpn.evaluateRPN(av[1]);
        std::cout << result << std::endl;
    }
    catch (std::exception const &e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
