#include <iostream>
#include <string>

int main() {
    std::cout << "Welcome to the unit converter tool!" << '\n';

    std::cout << '\n';

    // list all the avaliale unit conversions
    std::cout << "Unit conversions avaliable: " << '\n';
    
    std::cout << "1. Distance -> (metres, centimetres, millimitres)"<< '\n'; 
    std::cout << "2. Temperature"<< '\n'; 
    std::cout << "3. Weight"<< '\n'; 

    // Collect user input
    std::string choice;    
    std::cout << "What measurement are you converting? Choose one of the avaliable unit conversions: ";
    std::getline(std::cin >> std::ws, choice); 
    
    std::cout << '\n';
    
    // Collect values from user for unit conversion.
    int value;
    std::cout << "Enter the value that you would like to convert: " << '\n';
    std::cin >> value; 
    
    // Collect user choice on what they want to convert to and from. 
    std::string convFrom, convTo; 

    std::cout << "What are you converting from?: " << '\n';
    std::getline(std::cin >> std::ws, convFrom);

    std::cout << "What are you converting to?: " << '\n';
    std::getline(std::cin >> std::ws, convTo);

    return 0;
}
