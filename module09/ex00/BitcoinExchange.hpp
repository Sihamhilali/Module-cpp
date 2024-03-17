
#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP
#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <iostream>
#include <fstream>
#include <sstream>


class BitcoinExchange
{
private:
    std::map<std::string, double> stringMap;
public:
    BitcoinExchange(){};
    BitcoinExchange(const char *filename);
    ~BitcoinExchange();
    BitcoinExchange(const BitcoinExchange &src);
    BitcoinExchange &operator=(const BitcoinExchange &src);
    double lastvalue(std::string date);
    void dataFile(const char *filename);
};
#endif