#include <iostream>
using namespace std;

int Perimeter(int length, int width) {
    return 2 * (length + width);
}

int Area(int length, int width) {
    return length * width;
}

int main() {
    int length, width;
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;

    int perimeter = Perimeter(length, width);
    cout << "The perimeter of the rectangle is: " << perimeter << endl;

    int area = Area(length, width);
    cout << "The area of the rectangle is: " << area << endl;

    return 0;
}
