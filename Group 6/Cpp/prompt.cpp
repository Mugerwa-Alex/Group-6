# include <iostream>
# include <string> 
using namespace std;

int main(){
int num;
char character;
string name;
double num1;
//float num2;

cout << "please enter a number:"  << endl;
cin >> num ;
cout << "please enter a character: " << endl;
cin >> character ;
cout << "please enter a string: " << endl;
cin >> name ;
cout << "please enter a double type data: " << endl;
cin >> num1 ;
//cout << "please enter a float type data: " << endl;
//cin >> num2;
// output
cout << "Number: " << num << endl;
cout << "Character: " << character << endl;
cout << "String: " << name << endl;
cout << "Double: " << num1 << endl;
//cout << "Float: " << num2 << endl;
return 0;
}
