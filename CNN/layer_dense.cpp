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

vector<vector<double>> Layer_Dense::forward(vector<vector<double>> inputs){

    vector<vector<double>> output;

    if(inputs[0].size() != weights.size()){
        cout << "Error! wrong input size" << "\n";
    }

    output.resize(inputs[0].size());
    for(uint32_t i=0;i<inputs[0].size();i++){
        output[i].resize(weights.size());
    }

    output = dot_product(inputs, weights);

    return output;
}

vector<vector<double>> Layer_Dense::dot_product(vector<vector<double>> matrix1, vector<vector<double>> matrix2){
    vector<vector<double>> output;
    //resize out put matrix
    output.resize(matrix1.size());
    for(uint32_t i=0;i<matrix1.size();i++){
        output[i].resize(matrix2[0].size());
    }

    double value_dot_product = 0;
    //evaluate dot product;
    for(uint32_t i=0;i<output.size();i++){
        for(uint32_t j=0;j<output[0].size();j++){
            for(uint32_t p=0;p<matrix2.size();p++){
                value_dot_product += matrix1[i][p]*matrix2[p][i];
            }
            output[i][j] = value_dot_product;
            value_dot_product = 0;
        }
    }

    return output;
}

void Layer_Dense::print_matrix(vector<vector<double>> matrix){
    for(uint32_t i=0;i<matrix.size();i++){
        for(uint32_t j=0;j<matrix[0].size();j++){
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
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

void Layer_Dense::print_biases(){
    for(uint32_t i=0;i<n_neurons;i++){
        cout << biases[i] << " ";
    }
    cout << "\n";
}

vector<vector<double>> Layer_Dense::get_weights(){
    return this->weights;
}
