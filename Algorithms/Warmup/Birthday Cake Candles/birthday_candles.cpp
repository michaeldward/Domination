#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>


int main()
{
    int n;
    std::cin >> n;
    std::vector<int> vect;
    for (int i = 0; i < n; ++i)
    {
        int x;
        std::cin >> x;
        vect.push_back(x);
    }
    
    int max = -1;
    int count = 0;
    for (int i = 0; i < n; ++i)
    {
        if (vect[i] > max)
        {
            max = vect[i];
            count = 1;
        }
        else if (vect[i] == max)
        {
            ++count;
        }
    }
    std::cout << count << std::endl;
    
    return 0;
}

