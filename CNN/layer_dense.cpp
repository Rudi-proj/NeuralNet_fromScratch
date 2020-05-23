#include "layer_dense.h"

Layer_Dense::Layer_Dense(uint32_t n_inputs, uint32_t n_neurons):n_inputs(n_inputs), n_neurons(n_neurons)
{
    //resize weigths vector
    weights.resize(n_inputs);
    for(uint32_t i=0;i<weights.size();i++){
        weights[i].resize(n_neurons);
    }
    //initialise weights vector
    for(uint32_t i=0;i<n_inputs;i++){
        for(uint32_t j=0;j<n_neurons;j++){
            weights[i][j] = r1.generate_rand(-1,1);
        }
    }

    //resize biases vector
    biases.resize(n_neurons);

    //initialise biases vector
    for(uint32_t i=0;i<biases.size();i++){
        biases[i] = 0;
    }
}

void Layer_Dense::print_weights(){
    //prints the weights matrix
    for(uint32_t i=0;i<n_inputs;i++){
        for(uint32_t j=0;j<n_neurons;j++){
            cout << weights[i][j] << " ";
        }
        cout << "\n";
    }
}
