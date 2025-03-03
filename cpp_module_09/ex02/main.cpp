#include "PmergeMe.hpp"

int main(int argc, char **argv) {
    if (argc < 2) {
        std::cerr << "Error: No input provided" << std::endl;
        return 1;
    }

    try {
        PmergeMe sorter;
        sorter.parseInput(argc, argv);
        sorter.sortAndMeasureTime();
        sorter.displayResults();
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
        return 1;
    }

    return 0;
}
