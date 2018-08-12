#include <iostream>
#include <cmath>

using namespace std;    // BAD PRACTICE! Don't use using!! But since I'm lazy I'll use it during this course.

int add_integers (int a, int b) {
    return a+b;
}

int main() {
    cout << add_integers(10,20) << endl;
    
    double num {};
    cout << "\nEnter a number: ";
    cin >> num;
    
    cout << "The square root of " << num << " is: " << sqrt(num) << endl;
    cout << "The cubed root of " << num << " is: " << cbrt(num) << endl;
    
    cout << "The sine of " << num << " is: " << sin(num) << endl;
    cout << "The cosine of " << num << " is: " << cos(num) << endl;
    
    cout << "The ceil of " << num << " is: " << ceil(num) << endl;
    cout << "The floor of " << num << " is: " << floor(num) << endl;
    cout << "The round of " << num << " is: " << round(num) << endl;
    
    double power {};
    cout << "\nEnter a power to raise " << num << " to: ";
    cin >> power;
    
    cout << num << " raised to the power of " << power << " is: " << pow(num, power) << endl;    

    cout << endl;
    return 0;
} 