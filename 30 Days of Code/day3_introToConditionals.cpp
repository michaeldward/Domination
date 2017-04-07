#include <iostream>


int main()
{
    int n;
    std::cin >> n;
    bool weird;
    if (n % 2 == 1)
    {
        weird = true;
    }
    else if (n >= 2 && n <= 5)
    {
        weird = false;
    }
    else if (n >= 6 && n <= 20)
    {
        weird = true;
    }
    else
    {
        weird = true;
    }
    if (weird)
    {
        std::cout << "Weird\n";
    }
    else
    {
        std::cout << "Not Werid\n";
    }
    return 0;
}

