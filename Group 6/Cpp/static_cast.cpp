#include <iostream>
using namespace std;

int main() {

    int intVar = 42;
    double doubleVar = intVar;
    cout << "(Implicit)int to double: " << doubleVar << endl;

    double pi = 3.14159;
    int intPi = static_cast<int>(pi);
    cout << "(Explicit)double to int): " << intPi << endl;

    float floatVar = 9.75;
    int intVarFromFloat = static_cast<int>(floatVar);
    cout << "float to int: " << intVarFromFloat << endl;


    return 0;
}
