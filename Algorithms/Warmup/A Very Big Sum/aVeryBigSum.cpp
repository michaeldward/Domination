#include <vector>
#include <iostream>


int main()
{
    int n;
    std::cin >> n;
    std::vector<int> arr(n);
    for(size_t i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
    long long sum = 0;
    for (size_t i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    std::cout << sum;
    return 0;
}
