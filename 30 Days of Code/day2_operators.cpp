#include <iostream>

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    double mealCost, tip, tax;
    std::cin >> mealCost >> tip >> tax;
    tip /= 100;
    tax /= 100;
    //round the number
    double cost = mealCost * (1 + tax + tip);
    int roundedCost = int(cost);
    if (cost - int(cost) > 0.5)
    {
        roundedCost += 1;
    }
    std::cout << "The total meal cost is " << roundedCost << " dollars.";
    return 0;
}

