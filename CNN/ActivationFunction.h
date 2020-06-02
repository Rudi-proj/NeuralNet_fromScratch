#include <iostream>
#include <vector>
#ifndef ACTIVATIONFUNCTION_H
#define ACTIVATIONFUNCTION_H


namespace ActivationFunction {

    double RectifiedLinear(double input);
    double Linear(double input); //identity
    double Sigmoid(double input); //soft step

}

class Activation_ReLU{
public:
    std::vector<double> forward(std::vector<double> inputs);
};


#endif // ACTIVATIONFUNCTION_H
