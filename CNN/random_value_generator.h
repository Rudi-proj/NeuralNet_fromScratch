#ifndef RANDOM_VALUE_GENERATOR_H
#define RANDOM_VALUE_GENERATOR_H


class Random_Value_Generator
{
public:
    Random_Value_Generator();

    template<typename T>
    T generate_rand(T low, T high);
};

#endif // RANDOM_VALUE_GENERATOR_H
