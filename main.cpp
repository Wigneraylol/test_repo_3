#include <iostream>
#include "lib/lib.h"

int main(int argc, char** argv) {
    
    if (argc != 3) {
        std::cout << "Bad arguments.\nUsage: ./degree_converter <mode> <degree>\n";
        std::cout << "\t<mode>\t\t-- c2f or f2c\n";
        std::cout << "\t<degree>\t-- <double>";
        std::cout << std::endl;
        return 1;
    }

    double degrees = std::stod(argv[2]);

    EMode mode = GetMode(argv[1]);
    switch (mode) {
        case kC2F:
            std::cout << "Fahrenheit = " << CelsiusToFahrenheit(degrees) << std::endl;
            break;
        case fF2C:
            std::cout << "Celsium = " << FahrenheitToCelsius(degrees) << std::endl;
            break;
        default:
            std::cout << "Unknown mode. Supported: f2c or c2f" << std::endl;
            return 1;
    }

    return 0;
}