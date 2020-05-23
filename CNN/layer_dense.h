#include <iostream>
#include <vector>


#ifndef LAYER_DENSE_H
#define LAYER_DENSE_H

using namespace std;

class Layer_Dense
{
public:
    Layer_Dense(uint32_t n_inputs, uint32_t n_neurons);

    uint32_t n_inputs;
    uint32_t n_neurons;

private:
    vector<vector<double>> weights;


};

#endif // LAYER_DENSE_H
