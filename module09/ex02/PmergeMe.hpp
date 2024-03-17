
#ifndef PMERGEME_HPP
#define PMERGEME_HPP
#include <iostream>
#include <string>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include<deque>

class PmergeMe
{
    private:
        std::string str;
    public:
        PmergeMe();
        PmergeMe(const PmergeMe &src);
        PmergeMe &operator=(const PmergeMe &src);
        void sortedAsVector(int argc, char **argv);
        void sortedAsdeque(int argc, char **argv);
        ~PmergeMe();
};

#endif