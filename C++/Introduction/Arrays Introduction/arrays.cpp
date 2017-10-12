#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>


int main()
{
    int size;
    std::vector<int> vect;
    std::cin >> size;
    int num;
    
    for (int i = 0; i < size; ++i)
    {
        std::cin >> num;
        vect.push_back(num);
    }
    for (int i = size - 1; i > 0; --i)
    {
        std::cout << vect[i] << " ";
    }
    std::cout << vect[0];
}

