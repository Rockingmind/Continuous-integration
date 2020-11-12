// Continuous integration.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#define _USE_MATH_DEFINES

#include<math.h>
#include <numbers>
#include <iostream>

double fact(double n) {
    return (n == 0) || (n == 1) ? 1 : n * fact(n - 1);
}

double taylor_cos(double x, int num) {
    double result = 0;
    for (int i = 0; i < num; i++) {
        result += pow(-1, i) * pow(x, i * 2) / fact(i * 2);
    }
    return result;
}

int main()
{
    double degrees, rads;
    int num;

    std::cout << "enter degrees: ";
    std::cin >> degrees;
    std::cout << "number of Taylor series members: ";
    std::cin >> num;

    rads = (M_PI / 180)* degrees;
    std::cout << "cos " << degrees << " = " << taylor_cos(rads, num);

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
