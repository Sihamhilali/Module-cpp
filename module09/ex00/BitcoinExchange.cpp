
#include "BitcoinExchange.hpp"
#include <algorithm>


BitcoinExchange::BitcoinExchange(BitcoinExchange const &src)
{
    *this = src;
}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &src)
{
    if (this != &src)
    {
        stringMap = src.stringMap;
    }
    return *this;
}

std::map<int, std::string> splitMap(std::string s, char delimiter)
{
    std::map<int, std::string> tokens;
    std::string token;
    size_t start = 0;
    int i = 0;
    while ((start = s.find_first_not_of(delimiter, start)) != std::string::npos)
    {
        size_t end = s.find(delimiter, start);
        if (end == std::string::npos)
        {
            end = s.length();
        }
        token = s.substr(start, end - start);
        tokens[i] = token;
        start = end;
        i++;
    }
    return tokens;
}

void BitcoinExchange::dataFile(const char *datafile)
{

    std::string line;
    std::ifstream file(datafile);
    if (!file.is_open())
    {
        throw std::runtime_error("Error: could not open file.");
    }
    getline(file, line);
    if (line.empty())
    {
        throw std::runtime_error("Error: file is empty.");
    }
    for (std::string line; getline(file, line);)
    {
       std::map<int, std::string> tokens = splitMap(line, ',');
        std::stringstream ss(tokens[1]);
        double value;
        ss >> value;
        std::string key = tokens[0];
        stringMap[key] = value;
    }
    file.close();
}



int Valueparse(double value)
{
    if (value > 1000)
    {
        std::cout << "Error: too large a number." << std::endl;
        return 0;
    }
    else if (value < 0)
    {
        std::cout << "Error: not a positive number." << std::endl;
        return 0;
    }
    return (1);
}

int checkdate(std::string date)
{
    std::map<int, std::string> tokens = splitMap(date, '-');
    int year = std::strtod(tokens[0].c_str(), NULL);
    int month = std::strtod(tokens[1].c_str(), NULL);
    int day = std::strtod(tokens[2].c_str(), NULL);

    int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
        months[1] = 29;
    if (tokens[0].length() != 4 || tokens[1].length() != 2 || tokens[2].length() != 2)
    {
        std::cout << "Error: length number" << std::endl;
        return 0;
    }
    else if (tokens[0].find_first_not_of("0123456789") != std::string::npos || tokens[1].find_first_not_of("0123456789") != std::string::npos || tokens[2].find_first_not_of("0123456789") != std::string::npos)
    {
        std::cout << "Error: invalid date format." << std::endl;
        return 0;
    }
    else if (date.length() != 10)
    {
        std::cout << "Error: total  mumber" << std::endl;
        return 0;
    }
    else if (year < 2008 || (year == 2009 && month <= 01 && day <= 01))
    {
        std::cout << "Error: invalid date." << std::endl;
        return 0;
    }
    else if (month < 1 || month > 12 || day < 1 || day > months[month - 1])
    {

        std::cout << "Error: invalid date." << std::endl;
        return 0;
    }
    for (int i = 0; i < 3; i++)
    {
        for (unsigned int j = 0; j < tokens[i].length(); j++)
        {
            if (!isdigit(tokens[i][j]))
            {
                std::cout << "Error: its not digit." << std::endl;
                return 0;
            }
        }
    }
    return 1;
}

int  checkspaces(std::string s)
{
    for (unsigned int i = 0; i < s.length(); i++)
    {
        if (isspace(s[i]))
        {
            std::cout << "Error: space in the string." << std::endl;
            return (0);
        }
    }
    return 1;
}

int checkToken(std::string s, double value)
{
    if (!checkdate(s)|| !Valueparse(value))
       return 1;
    return 0;
}

double BitcoinExchange::lastvalue(std::string date)
{
   std::map<std::string, double>::iterator it = stringMap.lower_bound(date);
    it--;
    return it->second;
}

std::string strtrim(std::string s)
{
    size_t start;
    size_t end;

    start= s.find_first_not_of("/t /r /n");
    if(start == std::string::npos)
        return("");
    end = s.find_last_not_of("/t /r /n");
    std::string str = s.substr(start, end - start + 1);
    return(str);
}

int pipes(std::string s)
{
    int count = 0;
    for (unsigned int i = 0; i < s.length(); i++)
    {
        if (s[i] == '|')
            count++;
    }
    if (count > 1)
        return 0;
    return 1;
}

BitcoinExchange::BitcoinExchange(const char *filename)
{
    std::ifstream file(filename);
    dataFile("data.csv");
    if (!file.is_open())
    {
        std::cout << "Error: could not open file." << std::endl;
        return;
    }
    std::string line;
    getline(file, line);
    {
        if (line != "date | value")
        {
            std::cout << "Error: file is empty." << std::endl;
            return;
        }
    }
    line.clear(); 
    while (std::getline(file, line))
    {
        if(!pipes(line))
        {
            std::cout << "Error: bad input" << std::endl;
            continue;
        }
        std::map<int, std::string> tokens = splitMap(line, '|');
        size_t k = tokens[0].size();
        if(tokens[0][k - 1] != ' ' || tokens[1][0] !=  ' ')
        {
            std::cout << "Error: bad input" << std::endl;
            continue ;
        }
        if(tokens.size() != 2)
        {
            std::cout << "Error: bad input" << std::endl;
            continue;
        }
        std ::string date = strtrim(tokens[0]);
        std::string value1 = strtrim(tokens[1]);
        if(value1.empty() || date.empty())
        {
            std::cout << "Error: bad input" << std::endl;
            continue;
        }
        if(!checkspaces(date) || !checkspaces(value1))
        {
            std::cout << "Error: space in the string." << std::endl;
            continue;
        }
        char *ptr;
        double value2 = std::strtod(value1.c_str(), &ptr);
        if(*ptr != '\0')
        {
            std::cout << "Error: invalid value format." << std::endl;
             continue;
        }
        else if (checkToken(date, value2)) {
            line.clear();
            continue;
        }
            
        double btcvalue;
        if (this->stringMap[date])
            btcvalue = this->stringMap[date] * value2;
        else
          btcvalue = lastvalue(date) * value2;
       std::cout << date << " => " << value2 << " = " << std::fixed << std::setprecision(2)<< btcvalue << std::endl;
    }
    file.close();
}

BitcoinExchange::~BitcoinExchange()
{
    return;
}
