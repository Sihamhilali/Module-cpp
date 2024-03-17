#include"PmergeMe.hpp"
#include<chrono>

int main(int argc, char **argv)
{
    try
    {
        if (argc < 2)
        {
        std::cerr << "Error: invalid number of arguments." << std::endl;
        return 0;
        }
        PmergeMe p;
        clock_t start, end;
        start = clock();
        p.sortedAsVector(argc, argv);
        end = clock();
        std::cout << "Time taken by vector: " << ((double)(end - start) / CLOCKS_PER_SEC ) * 1e6<< "us" << std::endl;
        start = clock();
        p.sortedAsdeque(argc, argv);
        end = clock();
        std::cout << "Time taken by deque: " << ((double)(end - start) / CLOCKS_PER_SEC ) * 1e6<< "us"<< std::endl;

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
   
}