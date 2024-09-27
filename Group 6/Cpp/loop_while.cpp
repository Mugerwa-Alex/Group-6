#include <iostream>
#include <string>
using namespace std;

void age_checker(int a)
{
    if (a >= 18)
    {
        cout << "eligible" << endl;
    }
    else
    {
        cout << "not eligible" << endl;
    }
}
int main()
{
    int age;
    string name;
    cout << "hello world" << endl;
    cin >> age;

    do
    {

        cout << age << endl;
        age_checker(age);

        cin >> age;
    } while (age);

    // age_checker(age);

    // cout << "enter your name: ";
    // getline(cin, name);
    // cout << "your name is " << name << endl;
    return 0;
}
