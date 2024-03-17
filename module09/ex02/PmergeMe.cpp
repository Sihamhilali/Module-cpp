#include"PmergeMe.hpp"

int variable = -1;
PmergeMe::PmergeMe()
{
}

std::vector<int> checkNumber(char **argv, int argc)
{
    std::vector<int> number;
    for(int i = 1; i < argc; i++)
    {
        std::stringstream ss(argv[i]);
        int temp;
        if(ss >> temp && ss.eof() && !ss.fail() && temp >= 0)
        {
            number.push_back(temp);
        }
        else
        {
            std::cout << "Invalid input" << std::endl;
            exit(1);
        }
    }
    return number;
}

void BeforeSort(std::vector<int> &number)
{
    std::cout << "Before: ";
    for(unsigned int  i = 0; i < number.size(); i++)
    {
        std::cout << number[i] << " ";
    }
    std::cout << std::endl;
}

void mergeSort(std::vector<std::pair<int, int> > &mainchain, int left, int mid, int righ)
{
    int n1 = mid - left + 1;
    int n2 = righ - mid;

    std::vector<std::pair<int, int> > L(mainchain.begin() + left, mainchain.begin() + left + n1);
    std::vector<std::pair<int, int> > R(mainchain.begin() + mid + 1, mainchain.begin() + mid + 1 + n2);
    std::merge(L.begin(), L.end(), R.begin(), R.end(), mainchain.begin() + left);

}

void mergeV(std::vector<std::pair<int, int> > &mainchain, int left, int right)
{
    if (left < right)
    {
        int mid = (left + right) / 2;
        mergeV(mainchain,  left, mid);
        mergeV(mainchain, mid + 1, right);
        mergeSort(mainchain, left, mid, right);
    }

}

void AfterSort(std::vector<int> &number)
{
    std::cout << "After: ";
    for(unsigned int  i = 0; i < number.size(); i++)
    {
        std::cout << number[i] << " ";
    }
    std::cout << std::endl;
}

void lower(std::vector<int> &table, int value)
{
    int left = 0;
     left = std::lower_bound(table.begin(), table.end(), value) - table.begin();
    table.insert(table.begin() + left, value);
}

std::vector<int> Jacobsthal(int n) 
{
    std::vector<int> dp(n + 1);


    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= n; i++)
            dp[i] = dp[i - 1] + 2*dp[i - 2];
        std::vector<int> interval;
        std::vector<int>::iterator it = dp.begin();
        while (it != dp.end())
        {
            interval.push_back(*it);
            if (it != dp.begin() && *it - *(it - 1) > 1)
            {
                for (int j = *it - 1; j > *(it - 1); --j)
                    interval.push_back(j);
            }
        it++;
    }
    return interval;
}


void PmergeMe::sortedAsVector(int argc, char **argv)
{
    std::vector<int> number = checkNumber(argv, argc);
    BeforeSort(number);
    if(number.size() == 1)
    {
        number.pop_back();
        std::cout << "After: ";
        std::cout<< number[0] << std::endl;
        return;
    }
    if(number.size() % 2 != 0)
    {
        variable = number[number.size() - 1];
        number.pop_back();
    }
    std::vector<std::pair<int, int> > table;
    for(unsigned int i = 0; i < number.size(); i+=2)
    {
            table.push_back(std::make_pair(number[i], number[i + 1]));
    }
    for(unsigned int i = 0; i < table.size(); i++)
    {
        if(table[i].first < table[i].second)
        {
            std::swap(table[i].first, table[i].second);
        }
    }
    mergeV(table, 0, table.size() - 1);
    std::vector <int> mainchain ;
    std::vector <int> mainchain2;
    mainchain.push_back(table[0].second);
    for(unsigned int i = 0; i < table.size(); i++)
    {
        mainchain.push_back(table[i].first);
        mainchain2.push_back(table[i].second);
    }
    if(variable != -1) 
        mainchain2.push_back(variable);
    std::vector<int> Jacobsthal2 = Jacobsthal(15);
    for(unsigned int i = 2; i < Jacobsthal2.size(); i++)
    {
        if (size_t(Jacobsthal2[i]) < mainchain2.size())
            lower(mainchain, mainchain2[Jacobsthal2[i]]);
    }
    AfterSort(mainchain);
}

PmergeMe::PmergeMe(const PmergeMe &src)
{
    *this = src;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &src)
{
    if (this != &src)
    {
        str = src.str;
    }
    return *this;
}

std::deque<int> checkNumberD(char **argv, int argc)
{
    std::deque<int> number;
    for(int i = 1; i < argc; i++)
    {
        std::stringstream ss(argv[i]);
        int temp;
        if(ss >> temp && ss.eof() && !ss.fail() && temp >= 0)
        {
            number.push_back(temp);
        }
        else
        {
            std::cout << "Invalid input" << std::endl;
            exit(1);
        }
    }
    return number;
}

void BeforeSortD(std::deque<int> &number)
{
    std::cout << "Before: ";
    for(unsigned int  i = 0; i < number.size(); i++)
    {
        std::cout << number[i] << " ";
    }
    std::cout << std::endl;
}

void AfterSortD(std::deque<int> &number)
{
    std::cout << "After: ";
    for(unsigned int  i = 0; i < number.size(); i++)
    {
        std::cout << number[i] << " ";
    }
    std::cout << std::endl;
}

void mergeSortD(std::deque<std::pair<int, int> > &mainchain, int left, int mid, int righ)
{
    int n1 = mid - left + 1;
    int n2 = righ - mid;
    std::deque<std::pair<int, int> > L(mainchain.begin() + left, mainchain.begin() + left + n1);
    std::deque<std::pair<int, int> > R(mainchain.begin() + mid + 1, mainchain.begin() + mid + 1 + n2);
    std::merge(L.begin(), L.end(), R.begin(), R.end(), mainchain.begin() + left);
}

void mergeD(std::deque<std::pair<int, int> > &mainchain, int left, int right)
{
    if (left < right)
    {
        int mid = (left + right) / 2;
        mergeD(mainchain,  left, mid);
        mergeD(mainchain, mid + 1, right);
        mergeSortD(mainchain, left, mid, right);
    }

}
void lowerD(std::deque<int> &table, int value)
{
    int left = 0;
     left = std::lower_bound(table.begin(), table.end(), value) - table.begin();
    table.insert(table.begin() + left, value);
}

std::deque<int> JacobsthalD(int n) {
    std::deque<int> dp(n + 1);


    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= n; i++) {
            dp[i] = dp[i - 1] + 2*dp[i - 2];
        }
        std::deque<int> interval;
        std::deque<int>::iterator it = dp.begin();
        while (it != dp.end())
        {
            interval.push_back(*it);
            if (it != dp.begin() && *it - *(it - 1) > 1)
            {
                for (int j = *it - 1; j > *(it - 1); --j)
                    interval.push_back(j);
            }
        it++;
    }
    return interval;
}

void PmergeMe::sortedAsdeque(int argc, char **argv)
{
  std::deque<int> number = checkNumberD(argv, argc);
   //BeforeSortD(number);
    if(number.size() == 1)
    {
        number.pop_back();
        //std::cout << "After: ";
        std::cout<< number[0] << std::endl;
        return;
    }
    if(number.size() % 2 != 0)
    {
        variable = number[number.size() - 1];
        number.pop_back();
    }
    std::deque<std::pair<int, int> > table;
    for(unsigned int i = 0; i < number.size(); i+=2)
    {
            table.push_back(std::make_pair(number[i], number[i + 1]));
    }
    for(unsigned int i = 0; i < table.size(); i++)
    {
        if(table[i].first < table[i].second)
        {
            std::swap(table[i].first, table[i].second);
        }
    }
    mergeD(table, 0, table.size() - 1);
    std::deque <int> mainchain ;
    std::deque <int> mainchain2;
    mainchain.push_back(table[0].second);
    for(unsigned int i = 0; i < table.size(); i++)
    {
        mainchain.push_back(table[i].first);
        mainchain2.push_back(table[i].second);
    }
    if(variable != -1) 
        mainchain2.push_back(variable);
    std::deque<int> Jacobsthal2 = JacobsthalD(15);
    for(unsigned int i = 2; i < Jacobsthal2.size(); i++)
    {
        if (size_t(Jacobsthal2[i]) < mainchain2.size())
            lowerD(mainchain, mainchain2[Jacobsthal2[i]]);
    }
   //AfterSortD(mainchain);
}

PmergeMe::~PmergeMe()
{
}

