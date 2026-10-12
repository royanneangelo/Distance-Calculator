#include <iostream>
#include <cmath>

int main() {

    // MENU
    std::cout << "********** Distance between points **********";
    
    // Variables
    double x1;
    double x2;
    double y1;
    double y2;
    double distanceofpoint;

    // I/O
    std::cout << "\nValue of X1: ";
    std::cin >> x1;

    std::cout << "Value of X2: ";
    std::cin >> x2;

    std::cout << "Value of Y1: ";
    std::cin >> y1;

    std::cout << "Value of Y2: ";
    std::cin >> y2;

    // Processing
    double xsquared = (x2 - x1) * (x2 - x1);
    double ysquared = (y2 - y1) * (y2 - y1);

    distanceofpoint = sqrt(xsquared + ysquared);

    // Output
    std::cout << "Distance between the points is: " << distanceofpoint;

    return 0;
}
