#include <iostream>
using namespace std;

// Function to add two numbers
int add(int a, int b) {
    return a + b;
}

// Function to find the maximum of two numbers
int findMax(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}


void printMessage() {
    cout << "C++ funtion" << endl;
}

int main() {

    int num1 = 10, num2 = 20;
    int sum = add(num1, num2);
    cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << endl;


    int maxVal = findMax(num1, num2);
    cout << "The maximum of " << num1 << " and " << num2 << " is: " << maxVal << endl;


    printMessage();

    return 0;
}
