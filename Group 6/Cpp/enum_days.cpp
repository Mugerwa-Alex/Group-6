#include <iostream>
using namespace std;

int main() {
    enum Day { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };
    Day today;

    today = Wednesday;
    cout << "The value of today (Wednesday) is: " << today << endl;

    switch(today) {
        case Sunday: cout << "Today is Sunday"; break;
        case Monday: cout << "Today is Monday"; break;
        case Tuesday: cout << "Today is Tuesday"; break;
        case Wednesday: cout << "Today is Wednesday"; break;
        case Thursday: cout << "Today is Thursday"; break;
        case Friday: cout << "Today is Friday"; break;
        case Saturday: cout << "Today is Saturday"; break;
    }

    return 0;
}
