#include <iostream>
using namespace std;

int main() {
    using VEC = int*;   // defines a type alias called VEC that is an alias for a pointer to an int.
    using MATRIX = VEC*; // defines a type alias called MATRIX that is an alias for a pointer to a VEC

    // variable definitions
    int a = 5;
    VEC v = &a; 
    MATRIX m = &v;

    // display the value of a by using v and m
    cout << "Value of a using v: " << *v << endl;
    cout << "Value of a using m: " << **m << endl;

    return 0;
}

