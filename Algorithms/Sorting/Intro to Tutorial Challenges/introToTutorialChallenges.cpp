#include <vector>
#include <iostream>


int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, s;
    std::vector<int> v;
    std::cin >> n >> s;
    for (int i = 0; i < s; ++i)
    {
        int x;
        std::cin >> x;
        v.push_back(x);
    }
    for (int i = 0; i < v.size(); ++i)
    {
        if (v[i] == n)
        {
            std::cout << i;
            break;
        }
    }
    return 0;
}

