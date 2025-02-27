#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <string>
#include <stdexcept>
#include <ctime>
#include <sstream>

class PmergeMe {
public:
    PmergeMe();
    ~PmergeMe();

    void parseInput(int argc, char **argv);
    void sortAndMeasureTime();
    void displayResults() const;

private:
    std::vector<int> originalSequence;
    std::vector<int> vectorSequence;
    std::deque<int> dequeSequence;
    
    void mergeInsertSortVector(std::vector<int> &sequence);
    void mergeInsertSortDeque(std::deque<int> &sequence);

    template <typename T>
    void mergeInsertSort(T &sequence);

    template <typename T>
    void merge(T &sequence, int left, int middle, int right);

    template <typename T>
    void insertionSort(T &sequence, int left, int right);

    clock_t vectorTime;
    clock_t dequeTime;
};

#endif
