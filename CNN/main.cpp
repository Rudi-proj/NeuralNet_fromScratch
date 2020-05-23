#include <iostream>
#include <random_value_generator.h>
#include <layer_dense.h>

using namespace std;

int main()
{




    //Testing forward function
    /*
    Layer_Dense l(4,3);
    l.print_matrix(l.get_weights());
    vector<vector<double>> X;
    vector<double> row1;
    row1.push_back(1);
    row1.push_back(2);
    row1.push_back(3);
    row1.push_back(4);
    X.push_back(row1);

    l.print_matrix(X);
    l.print_matrix(l.forward(X));
    */

    //Testing dot product
    /*
    vector<vector<double>> matrix1;
    vector<vector<double>> matrix2;
    //Matrix1
    vector<double> row1;
    row1.push_back(2);
    row1.push_back(3);
    row1.push_back(4);
    vector<double> row2;
    row2.push_back(5);
    row2.push_back(6);
    row2.push_back(7);
    matrix1.push_back(row1);
    matrix1.push_back(row2);
    //Matrix2
    vector<double> row21;
    row21.push_back(1);
    row21.push_back(0);
    row21.push_back(1);
    vector<double> row22;
    row22.push_back(2);
    row22.push_back(1);
    row22.push_back(1);
    vector<double> row23;
    row23.push_back(3);
    row23.push_back(2);
    row23.push_back(1);
    matrix2.push_back(row21);
    matrix2.push_back(row22);
    matrix2.push_back(row23);

    Layer_Dense l(2,2);
    l.print_matrix(l.dot_product(matrix1,matrix2));
    */

    //Testing weights matrix
    /*
    Layer_Dense l(4,3);
    l.print_weights();
    cout << "\n" << "\n";

    //Testing biases
    l.print_biases();
    cout << "\n" << "\n";
    */

    //Testing the random value generator
    /*
    Random_Value_Generator r1;
    for(int i=0;i<100;i++){
        cout << r1.generate_rand(-1,1) << endl;
    }
    */
    return 0;
}
