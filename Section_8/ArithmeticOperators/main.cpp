#include <iostream>

using namespace std;    // BAD PRACTICE! Don't use using!! But since I'm lazy I'll use it during this course.

int main() {
    int num1 {100};
    int num2 {200};
    int result {0};
    
    // This is the easy part
    result = num1 + num2;
    cout << num1 << " + " << num2 << " = " << result << endl;
    cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
    cout << num2 << " / " << num1 << " = " << num2 / num1 << endl;
    
    // Now to some examples of integer math
    cout << "\nInteger math" << endl;
    cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;  // Normally this would be 0.5, but since num1 and num2 are integers, everything after the period is chopped off
    cout << "1 / 3 = " << 1 / 3 << endl;
    
    // But you can use double to get what you was expecting
    double num3 {100};
    double num4 {300};

    cout << "\nFloating point math" << endl;
    cout << num3 << " * " << num4 << " = " << num3 * num4 << endl;
    cout << num3 << " / " << num4 << " = " << num3 / num4 << endl;

    // Let's play around with modulo
    int num5 {3};
    cout << "\nThe modulo operator" << endl;
    cout << "10 divided by 2 equals " << 10 / 2 << " with a remainder of " << 10 % 2 << endl;
    cout << "2 divided by 10 equals " << 2 / 10 << " with a remainder of " << 2 % 10 << endl;
    cout << num1 << " divided by " << num5 << " equals " << num1 / num5 << " with a remainder of " << num1 % num5 << endl;
    cout << num5 << " divided by " << num1 << " equals " << num5 / num1 << " with a remainder of " << num5 % num1 << endl;
    
	cout << endl;
    return 0;
}