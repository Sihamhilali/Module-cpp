#include "Span.hpp"

int main()
{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
 //std::vector<int> k;
 //   k.push_back(35);
 //   k.push_back(37);
 //   k.push_back(157);
 //   k.push_back(97);
 //   k.push_back(151);
 //   k.push_back(87);
    try
    {
          std::cout << sp.shortestSpan() << std::endl;
          std::cout << sp.longestSpan() << std::endl;
          //std::cout << "----------------" << std::endl;
           // sp.addNumber(k.begin(), k.end());
           //std::cout << sp.shortestSpan() << std::endl;
           //std::cout << sp.longestSpan() << std::endl;
    }
   catch (std::exception &e)
   {
       std::cout << "Error: " << e.what() << std::endl;
   }
   //sp = Span(5);
   //Span sp2 = sp;
    return 0;
}