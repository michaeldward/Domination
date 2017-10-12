#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>

int main()
{
    int num;
    std::cin >> num;
    
    std::map<std::string, std::string> people;
    
    for (int i = 0; i < num; ++i)
    {
        std::string name, number;
        std::cin >> name >> number;
        people[name] = number;
    }
    std::string line;
    getline(std::cin,line);
    while(getline(std::cin,line))
    {
        if (line.empty())
        {
            break;
        }
        if ( people.find(line) == people.end() )  // not found
        {
           std::cout << "Not found\n";
        }
        else // found
        {
            std::cout << line << "=" << people[line] << std::endl;
        }
        
    }
    return 0;
}