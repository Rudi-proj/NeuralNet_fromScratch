#include <iostream>
#include <random_value_generator.h>
#include <layer_dense.h>

using namespace std;

int main()
{

    //Testing weights matrix
    Layer_Dense l(4,3);
    l.print_weights();
    cout << "\n" << "\n";

    //Testing biases
    l.print_biases();
    cout << "\n" << "\n";


    //Testing the random value generator
    /*
    Random_Value_Generator r1;
    for(int i=0;i<100;i++){
        cout << r1.generate_rand(-1,1) << endl;
    }
    */
    return 0;
}
