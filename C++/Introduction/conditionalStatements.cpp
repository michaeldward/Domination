#include <iostream>


int main()
{
    int n;
    std::cin >> n;
    // your code goes here
    std::string numz[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    if (n <= 9)
    {
        std::cout << numz[n-1] << std::endl;
    }
    else
    {
        std::cout << "Greater than 9\n";
    }
    return 0;
}

