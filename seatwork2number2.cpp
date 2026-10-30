#include <iostream>

using namespace std;

int main() 
{
    float n1;
    float n2;
    char op;
    cout << "Welcome to calculator!"<< endl;
    cout << "Enter first number: ";
    cin >> n1;
    cout << "Enter second number: ";
    cin >> n2;
    cout << "\nSelect an arithmetic operator (+, -, *, /): ";
    cin >> op;

    switch (op) {

        case '+':

            cout << "Result: " << n1+n2;
            break;
        case '-':
            cout << "Result: " << n1-n2;
            break;
        case '*':
            cout << "Result: " << n1*n2;
            break;
        case '/':
             { cout << "Result: " << n1/n2;}
            
            break;
        default:

            cout << "Invalid operator!";

    }

    return 0;

}
