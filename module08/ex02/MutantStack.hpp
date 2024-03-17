
#include <iostream>
#include <iterator>
#include <stack>
#include <deque>

template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        class iterator
        {
        private:
            typename std::deque<T>::iterator _it;

        public:
            iterator(typename std::deque<T>::iterator it) : _it(it) {}
            iterator(iterator const &other) : _it(other._it) {}
            iterator &operator=(iterator const &other)
            {
                _it = other._it;
                return *this;
            }
            ~iterator() {}
            iterator &operator++()
            {
                _it++;
                return *this;
            }
            iterator &operator--()
            {
                _it--;
                return *this;
            }
            T &operator*()
            {
                return *_it;
            }
            bool operator!=(iterator const &other)
            {
                return _it != other._it;
            }
        };
        MutantStack() {}
        MutantStack(MutantStack const &other) : std::stack<T>(other) {}
        MutantStack &operator=(MutantStack const &other)
        {
            std::stack<T>::operator=(other);
            return *this;
        }
        ~MutantStack() {}
        iterator begin()
        {
            return iterator(std::stack<T>::c.begin());
        }
        iterator end()
        {
            return iterator(std::stack<T>::c.end());
        }
};