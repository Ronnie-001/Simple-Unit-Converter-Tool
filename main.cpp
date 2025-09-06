#include <iostream>
#include <string>

#include "conversions.h"

int main() {
    std::cout << "Welcome to the unit converter tool!" << '\n';

    std::cout << '\n';

    // list all the avaliale unit conversions
    std::cout << "Unit conversions avaliable: " << '\n';
    
    // Strings that contain the units for distance temperature & weight.
    std::string distanceUnits = "kilometres miles";
    std::string temperatureUnits = "celcius farrenheight";
    std::string weight = "kilograms stone";

    std::cout << "1. Distance -> (kilometres, miles)" << '\n'; 
    std::cout << "2. Temperature -> (celcius, farrenheight)" << '\n'; 
    std::cout << "3. Weight -> (kilograms, stone)" << '\n'; 

    std::cout << '\n';

    // Collect user input
    int choice;    
    std::cout << "What measurement are you converting? Choose the corresponding number for the avaliable unit conversions: ";
    std::cin >> choice;
    
    // Collect values from user for unit conversion.
    double value;
    std::cout << "Enter the value that you would like to convert: ";
    std::cin >> value; 
   
    switch (choice) {
        case 1: 
            std::cout << "1. kilometres, 2. miles" << '\n'; 
            
            int DISTANCE_convFrom, DISTANCE_convTo;
            std::cout << "Chose the corresponding numbers you would like to convert from and to: " << '\n';

            std::cout << "Convert from: ";
            std::cin >> DISTANCE_convFrom;
            
            std::cout << "Convert to: ";
            std::cin >> DISTANCE_convTo;

            std::cout << "Result of conversion: " << conversions::handleDistanceConversion(value, DISTANCE_convFrom, DISTANCE_convTo);
            
            break;
        case 2:
            std::cout << "1. celcius, 2. farrenheight" << '\n'; 
            
            int TEMP_convFrom, TEMP_convTo;
            std::cout << "Chose the corresponding numbers you would like to convert from and to: " << '\n';

            std::cout << "Convert from: ";
            std::cin >> TEMP_convFrom;
            
            std::cout << "Convert to: ";
            std::cin >> TEMP_convTo;
        
            std::cout << "Result of conversion: " << conversions::handleTemperatureConversion(value, TEMP_convFrom, TEMP_convTo);

            break;
        case 3:
            std::cout << "1. weight (in kilograms), 2. stone" << '\n'; 
            
            int WEIGHT_convFrom, WEIGHT_convTo;
            std::cout << "Chose the corresponding numbers you would like to convert from and to: " << '\n';

            std::cout << "Convert from: ";
            std::cin >> WEIGHT_convFrom;

            std::cout << "Convert to: ";
            std::cin >> WEIGHT_convTo;

            std::cout << "Result of conversion: " << conversions::handleWeightConversion(value, WEIGHT_convFrom, WEIGHT_convTo);

            break;
    }

    return 0;
}
