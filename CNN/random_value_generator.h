#include <random>
#include <time.h>

#ifndef RANDOM_VALUE_GENERATOR_H
#define RANDOM_VALUE_GENERATOR_H


class Random_Value_Generator
{
public:
    Random_Value_Generator();  
    double generate_rand(double low, double high);
    std::default_random_engine generator;
};

#endif // RANDOM_VALUE_GENERATOR_H
