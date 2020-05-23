#include "random_value_generator.h"

Random_Value_Generator::Random_Value_Generator()
{
    generator.seed(time(NULL));
    //For Testing:
    //generator.seed(666);
}

double Random_Value_Generator::generate_rand(double low, double high){
    std::uniform_real_distribution<double> distibution(low, high);
    return distibution(generator);
}
