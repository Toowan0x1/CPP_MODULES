#ifndef RPN_HPP
#define RPN_HPP

// Reverse Polish Notation (RPN)

#include <iostream>
#include <string>
#include <sstream>
#include <stack>
#include <vector>
#include <stdexcept>

class RPN {
    private:
        std::vector<std::string> parseInput(std::string const &expr) const;
        bool    isOperator(std::string const &token) const;
        void    processToken(std::string const &token, std::stack<int> &stack) const;
    public:
        RPN();
        ~RPN();
        int evaluateRPN(std::string const &expr);
};

#endif
