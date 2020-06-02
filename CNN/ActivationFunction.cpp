#include <ActivationFunction.h>
#include <math.h>

double ActivationFunction::Linear(double input){
    return input;
}

double ActivationFunction::RectifiedLinear(double input){
    if(input < 0) return 0;
    return input;
}

double ActivationFunction::Sigmoid(double input){
    return 1/(1+exp(input*-1));
}
