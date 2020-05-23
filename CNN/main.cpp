#include <iostream>
#include <random_value_generator.h>

using namespace std;

int main()
{




    //Testing the random value generator
    Random_Value_Generator r1;
    for(int i=0;i<100;i++){
        cout << r1.generate_rand(-1,1) << endl;
    }

    return 0;
}
