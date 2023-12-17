#include <iostream>
#include <functional>
#include <map>

class Harl {
private:
    void debug() {
        std::cout << "DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
    }

    void info() {
        std::cout << "INFO: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
    }

    void warning() {
        std::cout << "WARNING: I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
    }

    void error() {
        std::cout << "ERROR: This is unacceptable! I want to speak to the manager now." << std::endl;
    }

public:
    void complain(std::string level) {
        // Define a map of complaint levels to member functions using pointers to member functions
        std::map<std::string, std::function<void()>> complaintMap = {
            {"DEBUG", std::bind(&Harl::debug, this)},
            {"INFO", std::bind(&Harl::info, this)},
            {"WARNING", std::bind(&Harl::warning, this)},
            {"ERROR", std::bind(&Harl::error, this)}
        };

        // Find the appropriate member function based on the complaint level
        auto it = complaintMap.find(level);
        if (it != complaintMap.end()) {
            // Call the corresponding member function
            it->second();
        } else {
            std::cout << "Unknown complaint level: " << level << std::endl;
        }
    }
};

int main() {
    // Create an instance of Harl
    Harl harl;

    // Test different complaint levels
    harl.complain("DEBUG");
    harl.complain("INFO");
    harl.complain("WARNING");
    harl.complain("ERROR");
    harl.complain("UNKNOWN");

    return 0;
}

