#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    cout << "num1 before swapping = " << num1 << endl; 
    cout << "num2 before swapping = " << num2 << endl;

    num1 = num1 + num2;  
    num2 = num1 - num2;  
    num1 = num1 - num2;  

    cout << "num1 after swapping = " << num1 << endl; 
    cout << "num2 after swapping = " << num2 << endl;

    return 0;
}
