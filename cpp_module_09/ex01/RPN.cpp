#include "RPN.hpp"

RPN::RPN() {}

RPN::~RPN() {}

std::vector<std::string> RPN::parseInput(std::string const &expr) const
{
    std::istringstream ss(expr);
    std::string token;
    std::vector<std::string> tokens;
    while (ss >> token)
    {
        tokens.push_back(token);
    }
    return tokens;
}

bool    RPN::isOperator(std::string const &token) const
{
    if (token == "*")
        return 1;
    if (token == "/")
        return 1;
    if (token == "+")
        return 1;
    if (token == "-")
        return 1;
    return 0;
}

void    RPN::processToken(std::string const &token, std::stack<int> &stack) const
{
    if (isOperator(token)) {
        if (stack.size() < 2) {
            throw std::runtime_error("Error: Not enough operands");
        }
        int b = stack.top(); stack.pop();
        int a = stack.top(); stack.pop();
        if (token == "+")
            stack.push(a + b);
        else if (token == "-")
            stack.push(a - b);
        else if (token == "*")
            stack.push(a * b);
        else if (token == "/") {
            if (b == 0)
                throw std::runtime_error("Error: Division by zero");
            stack.push(a / b);
        }
    }
    else {
        std::istringstream ss(token);
        int value; ss >> value;
        if (ss.fail())
            throw std::runtime_error("Error: Invalid number");

        // std::cout << value << std::endl;
        stack.push(value);
    }
}

int RPN::evaluateRPN(std::string const &expr)
{
    std::vector<std::string> tokens = parseInput(expr);
    std::stack<int> stack;

    std::vector<std::string>::const_iterator token = tokens.begin();
    for (; token != tokens.end(); ++token) {
        processToken(*token, stack);
    }

    if (stack.size() != 1) {
        throw std::runtime_error("Error: Invalid expression");
    }

    return stack.top();
}
