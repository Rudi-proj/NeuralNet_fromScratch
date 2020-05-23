#include "random_value_generator.h"

Random_Value_Generator::Random_Value_Generator()
{
}

double Random_Value_Generator::generate_rand(double low, double high){
    std::uniform_real_distribution<double> distibution(low, high);
    return distibution(generator);
}
