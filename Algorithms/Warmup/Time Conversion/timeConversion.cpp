#include <iostream>

int main()
{
    std::string input;
    std::cin >> input;
    std::string output = "";
    int first = std::stoi(input.substr(0, 2));
    std::string second = input.substr(2, 6);
    if (input[8] == 'P' && first != 12)
    {
        first += 12;
    }
    else if (input[8] == 'A' && first == 12)
    {
        first = 0;
    }
    if (first < 10)
    {
        output = "0";
    }
    output += std::to_string(first);
    output += second;
    std::cout << output << std::endl;
    return 0;
}

