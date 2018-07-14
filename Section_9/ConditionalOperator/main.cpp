#include <iostream>

using namespace std;    // BAD PRACTICE! Don't use using!! But since I'm lazy I'll use it during this course.

int main() {
    int num {};
    
    cout << "Enter an integer: ";
    cin >> num;
    
    cout << "*** Example with if-else ***" << endl;
    if (num % 2 == 0)
        cout << num << " is even." << endl; 
    else
        cout << num << " is odd." << endl;
    
    cout << "\n*** Example with conditional operator ***" << endl;
    cout << num << " is "  << ((num % 2 == 0) ? "even." : "odd.") << endl;
    
    int num1 {}, num2 {};
    cout << "\nEnter two integers separated by space: ";
    cin >> num1 >> num2;
    
    if (num1 != num2) {
        cout << "The largest number is " << ((num1 > num2) ? num1 : num2) << endl;
        cout << "The smallest number is " << ((num1 > num2) ? num2 : num1) << endl;
    } else {
        cout << "The numbers are the same." << endl;
    }
    
    
    cout << endl;
    return 0;
}