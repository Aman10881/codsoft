#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main() {
    string s;
   do{ 
    char operation;
    double number1, number2;

    cout << "Enter operator (+, -, *, /): ";
    cin >> operation;

    cout << "Enter two numbers: ";
    cin >> number1 >> number2;

    switch (operation) {
        case '+':
            cout << number1 << " + " << number2 << " = " << number1 + number2;
            break;
        case '-':
            cout << number1 << " - " << number2 << " = " << number1 - number2;
            break;
        case '*':
            cout << number1 << " * " << number2 << " = " << number1 * number2;
            break;
        case '/':
            if (number2 == 0) {
                cout << "Error! Division by zero is not allowed.";
            } else {
                cout << number1 << " / " << number2 << " = " << number1 / number2;
            }
            break;
        default:
            cout << "Invalid operator! Please enter +, -, *, or /.";
            break;
    }
    cout<<"Do you want do more calculations?(yes/no)"<<endl;
    cin>>s;
   }while("yes"||"YES");

    return 0;
}