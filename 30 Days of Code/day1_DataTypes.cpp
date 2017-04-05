#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    // Declare second integer, double, and String variables.
    int i2;
    double d2;
    std::string s2;
    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    std::cin >> i2 >> d2;
    std::getline(std::cin >> std::ws, s2);
    // Print the sum of both integer variables on a new line.
    std::cout << i + i2 << std::endl;
    // Print the sum of the double variables on a new line.
    std::cout << std::fixed << std::setprecision(1) << d + d2 << std::endl;
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    std::cout << s + s2 << std::endl;
    return 0;
}