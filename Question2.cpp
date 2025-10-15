#include <iostream>
#include <iomanip>   // for setw()
using namespace std;

int main() {
    float sub1, sub2, sub3, sub4, sub5, total, percentage;
    string grade;

    cout << "Enter marks for 5 subjects: ";
    cin >> sub1 >> sub2 >> sub3 >> sub4 >> sub5;

    total = sub1 + sub2 + sub3 + sub4 + sub5;
    percentage = total / 5;

    if (percentage >= 90)
        grade = "A+";
    else if (percentage >= 80)
        grade = "A";
    else if (percentage >= 70)
        grade = "B";
    else if (percentage >= 60)
        grade = "C";
    else if (percentage >= 50)
        grade = "D";
    else
        grade = "F";
        
    string result;

    if (percentage >= 50)
        result = "Pass";
    else
        result = "Fail";
        

    cout << "\n----------- Report Card -----------\n";
    cout << left << setw(20) << "Subject 1:" << sub1 << endl;
    cout << left << setw(20) << "Subject 2:" << sub2 << endl;
    cout << left << setw(20) << "Subject 3:" << sub3 << endl;
    cout << left << setw(20) << "Subject 4:" << sub4 << endl;
    cout << left << setw(20) << "Subject 5:" << sub5 << endl;
    cout << "-----------------------------------\n";
    cout << left << setw(20) << "Total Marks:" << total << endl;
    cout << left << setw(20) << "Percentage:" << percentage << "%" << endl;
    cout << left << setw(20) << "Grade:" << grade << endl;
    cout << left << setw(20) << "Result:" << result << endl;
    cout << "-----------------------------------\n";

    return 0;
}
