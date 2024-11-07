#include "funcA.h"
#include <cmath>
#include <vector>


double FuncA::bernoulli(int index) {
   
    static std::vector<double> bernoulliNumbers = {
        1, -0.5, 0.16666666666666666, 0, -0.03333333333333333, 0,
        0.023809523809523808, 0, -0.03333333333333333, 0, 0.07575757575757576
        
    };
    
    return (index < bernoulliNumbers.size()) ? bernoulliNumbers[index] : 0;
}


double FuncA::calculateTrigFunction(double x) {
    double sum = 0;
    for (int k = 1; k <= 3; ++k) {
        int index = 2 * k; 
        double bernoulliNumber = bernoulli(index);
        double term = (bernoulliNumber * pow(-4, k) * (1 - pow(4, k)) * pow(x, 2 * k - 1)) / tgamma(2 * k + 1);
        sum += term;
    }
    return sum;
}

