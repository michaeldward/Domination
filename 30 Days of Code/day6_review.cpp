#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>


int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int x;
    std::cin >> x;
    for (int i = 0; i < x; ++i)
    {
        std::string s;
        std::cin >> s;
        std::string odd, even;
        for (int j = 0; j < s.size(); ++j)
        {
            if (j % 2 == 0)
            {
                even += s[j];
            }
            else
            {
                odd += s[j];
            }
        }
        std::cout << even << " " << odd << "\n";
    }
    return 0;
}

