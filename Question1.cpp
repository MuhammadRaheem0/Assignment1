#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    cout << fixed << setprecision(3);
    cout << "\nOutputs in Floating Point" << endl;
    cout << "Sum: " << (num1 + num2) << endl;
    cout << "Difference: " << (num1 - num2) << endl;
    cout << "Product: " << (num1 * num2) << endl;
    cout << "Quotient: " << (num1 / num2) << endl;

    int intNum1 = (int)num1;
    int intNum2 = (int)num2;

    cout << "\nOutputs after Casting to Integers" << endl;
    cout << "First number as integer: " << intNum1 << endl;
    cout << "Second number as integer: " << intNum2 << endl;

    int sum1 = intNum1 + intNum2;
    int diff1 = intNum1 - intNum2;
    int prod1 = intNum1 * intNum2;
    int quo1 = intNum1 / intNum2;
    
    cout << "The Sum after casting: " << sum1 << endl;
    cout << "The Difference after casting: " << diff1 << endl;
    cout << "The Product after casting: " << prod1 << endl;
    cout << "The Quotient after casting: " << quo1 << endl;

    /*
       Casting (int)num1 and (int)num2 removes the decimal part
       Example: 7.89 becomes 7, 2.45 becomes 2.
       This changes the results.
    */

    return 0;
}
