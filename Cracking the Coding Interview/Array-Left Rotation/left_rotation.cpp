#include <vector>
#include <iostream>


std::vector<int> array_left_rotation(std::vector<int> a, int n, int k)
{
    std::vector<int> rotated;
    for (int i = 0; i < n; ++i)
    {
        if (k >= n)
        {
            k = 0; //if index has gone out of bounds, set back to 0
        }
        rotated.push_back(a[k]); //add item at index to new vector
        ++k; //increment index
    }
    return rotated;
}

int main()
{
    int n;
    int k;
    std::cin >> n >> k;
    std::vector<int> a(n);
    for(int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    std::vector<int> output = array_left_rotation(a, n, k);
    for(int i = 0; i < n;i++)
    {
        std::cout << output[i] << " ";
    }  
    std::cout << std::endl;
    return 0;
}