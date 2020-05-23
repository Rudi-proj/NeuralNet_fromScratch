#include <iostream>
#include <vector>
#include <random_value_generator.h>


#ifndef LAYER_DENSE_H
#define LAYER_DENSE_H

using namespace std;

class Layer_Dense
{
public:
    Layer_Dense(uint32_t n_inputs, uint32_t n_neurons);   
    void print_weights();

private:

    vector<vector<double>> weights;
    vector<double> biases;
    Random_Value_Generator r1;
    uint32_t n_inputs;
    uint32_t n_neurons;

};

#endif // LAYER_DENSE_H
