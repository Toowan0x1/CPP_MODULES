#include "PmergeMe.hpp"

PmergeMe::PmergeMe() : vectorTime(0), dequeTime(0) {}

PmergeMe::~PmergeMe() {}

void PmergeMe::parseInput(int argc, char **argv) {
    for (int i = 1; i < argc; ++i) {
        int num;
        std::istringstream ss(argv[i]);
        if (!(ss >> num) || num < 0) {
            throw std::runtime_error("Error: Invalid input");
        }
        originalSequence.push_back(num);
        vectorSequence.push_back(num);
        dequeSequence.push_back(num);
    }
}

void PmergeMe::sortAndMeasureTime() {
    clock_t start;

    start = clock();
    mergeInsertSortVector(vectorSequence);
    vectorTime = clock() - start;

    start = clock();
    mergeInsertSortDeque(dequeSequence);
    dequeTime = clock() - start;
}

void PmergeMe::displayResults() const {
    std::cout << "Before: ";
    for (std::vector<int>::const_iterator it = originalSequence.begin(); it != originalSequence.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    std::cout << "After: ";
    for (std::vector<int>::const_iterator it = vectorSequence.begin(); it != vectorSequence.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    std::cout << "Time to process a range of " << vectorSequence.size()
              << " elements with std::vector: " << (double)vectorTime / CLOCKS_PER_SEC * 1000000 << " us" << std::endl;

    std::cout << "Time to process a range of " << dequeSequence.size()
              << " elements with std::deque: " << (double)dequeTime / CLOCKS_PER_SEC * 1000000 << " us" << std::endl;
}

template <typename T>
void PmergeMe::mergeInsertSort(T &sequence) {
    int size = sequence.size();
    if (size < 2) return;

    for (int width = 1; width < size; width *= 2) {
        for (int i = 0; i < size; i += 2 * width) {
            int left = i;
            int middle = std::min(i + width, size);
            int right = std::min(i + 2 * width, size);
            merge(sequence, left, middle, right);
        }
    }
}

template <typename T>
void PmergeMe::merge(T &sequence, int left, int middle, int right) {
    T temp(sequence.begin() + left, sequence.begin() + right);
    int i = 0, j = middle - left, k = left;

    while (i < middle - left && j < right - left) {
        if (temp[i] <= temp[j]) {
            sequence[k++] = temp[i++];
        } else {
            sequence[k++] = temp[j++];
        }
    }
    while (i < middle - left) sequence[k++] = temp[i++];
    while (j < right - left) sequence[k++] = temp[j++];
}

void PmergeMe::mergeInsertSortVector(std::vector<int> &sequence) {
    mergeInsertSort(sequence);
}

void PmergeMe::mergeInsertSortDeque(std::deque<int> &sequence) {
    mergeInsertSort(sequence);
}
