#include "conversions.h"

namespace conversions {
    
    // Conversion rate for kiloometers to meters.
    constexpr double KM_TO_M = 1.609; 
    constexpr double KG_TO_ST = 6.35; 
  
    // handle the distance conversion.
    double handleDistanceConversion(double val, int convFrom, int convTo) {
        return convFrom == 1 ? val / KM_TO_M : val / KM_TO_M;
    }
    
    // handle the weight conversion.
    double handleTemperatureConversion(double val, int convFrom, int convTo) {
        double newTemp;
        if (convFrom == 1) {
            newTemp = (val * 1.8) + 32;
        } else {
            newTemp = (val - 32) / 1.8;
        }

        return newTemp;
    }

    // handle the weight conversion.
    double handleWeightConversion(double val, int convFrom, int convTo) {
        return convFrom == 1 ? val / KG_TO_ST : val * KG_TO_ST; 
    }
}
