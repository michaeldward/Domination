#include <iostream>
#include <cstdio>

int main()
{
    int x, y;
    std::cin >> x >> y;
    for (int i = x; i <= y; ++i)
    {
        std::string output;
        switch(i)
        {
            case 1:
            output = "one";
            break;
            case 2:
            output = "two";
            break;
            case 3:
            output = "three";
            break;
            case 4:
            output = "four";
            break;
            case 5:
            output = "five";
            break;
            case 6:
            output = "six";
            break;
            case 7:
            output = "seven";
            break;
            case 8:
            output = "eight";
            break;
            case 9:
            output = "nine";
            break;
            default:
            if (i % 2 == 0)
            {
                output = "even";    
            }
            else
            {
                output = "odd";
            }  
        }
        std::cout << output << std::endl;
        
    }
    return 0;
}

