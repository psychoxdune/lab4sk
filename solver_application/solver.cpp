#include <iostream>

#include "solver.hpp"

int main()
{
    double a = 0;
    double b = 0;
    double c = 0;

    std::cin >> a >> b >> c;

    double x1 = 0;
    double x2 = 0;

    solve(a, b, c, x1, x2);

    std::cout << "x1 = " << x1 << std::endl;
    std::cout << "x2 = " << x2 << std::endl;

    return 0;
}
