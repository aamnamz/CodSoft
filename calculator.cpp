#include <iostream>
using namespace std;
int main() {
    double num1, num2;
    char opr;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter an operation (+, -, *, /): ";
    cin >> opr;
    cout << "Enter second number: ";
    cin >> num2;
    switch (opr) {
        case '+':
            cout<<num1<<" + "<<num2<<" = "<<num1+num2;
            break;
        case '-':
            cout<<num1<<" - "<<num2<<" = "<<num1-num2;
            break;
        case '*':
            cout<<num1<<" * "<<num2<<" = "<<num1*num2;
            break;
        case '/':
            if (num2 != 0) {
                cout<<num1<<" / "<<num2<<" = "<<num1/num2;
            } else {
                cout << "Error! Division by zero is undefined." << endl;
            }
            break;
        default:
            cout << "Error! You have entered incorrect operator." << endl;
    }
}
