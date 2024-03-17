
#include"Losers.hpp"

Loser::Loser()
{
}

Loser::~Loser()
{
}

std::string ft_replace(std::string str, std::string find, std::string replace)
{
    std::string content;
    size_t prevPos = 0;
    size_t pos = 0;

    while ((pos = str.find(find,prevPos)) != std::string::npos) {
        content += str.substr(prevPos, pos - prevPos);
        content += replace;
        prevPos = pos + find.length();
    }
    content += str.substr(prevPos);
    return (content);
}

void Loser::Los(std::string str, std::string str2, std::string str3)
{
    std::ifstream file(str);
    std::string content;

    if(!file.is_open())
    {
        std::cout << "Error: File not found" << std::endl;
        exit(0);
    }
    std::ofstream file2(str + ".replace");
    if(!file2.is_open())
    {
        std::cout << "Error: File not found" << std::endl;
        file.close(); 
        exit(0);
    }
    while(std::getline(file, content))
    {
        file2 << ft_replace(content, str2, str3)  << std::endl;
        content.clear();
    }
    file.close(); 
    file2.close();
}