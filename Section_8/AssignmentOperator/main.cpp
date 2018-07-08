#include <iostream>

using namespace std;    // BAD PRACTICE! Don't use using!! But since I'm lazy I'll use it during this course.

int main() {
    int num1 {10};  // This is NOT assignment, this is initialization
    int num2 {20};  // This is NOT assignment, this is initialization
    
    // Assigning a literal 
    num1 = 100;     // This is an assignment statement, left hand side is assigned the value from the right hand side
    
    cout << "num1 is " << num1 << endl;
    cout << "num2 is " << num2 << endl;
    
    // Assigning one variable the value of another variable
    num1 = num2;

    cout << "\nnum1 is " << num1 << endl;
    cout << "num2 is " << num2 << endl;
    
    // Assigning more values at once
    num1 = num2 = 1000;
    
    cout << "\nnum1 is " << num1 << endl;
    cout << "num2 is " << num2 << endl;
    
    // Some examples of assignment that's not valid
    // Assigning to a const 
    const int num3 {30};
//    num3 = 50;      // The compiler will tell you that it can't change the value of num3 as it's a constant
    
    // Both sides of the statements needs to have the same type
//    num1 = "This is a string";     // The compiler will give an error message saying it can't convert the values to the same type
    
    // Using == instead of =
    num1 = 10;
    num2 = 20;
    cout << "\nnum1 is " << num1 << endl;
    cout << "num2 is " << num2 << endl;
    
    num1 == num2;   // The compiler will give you a warning that this statement doesn't do anything, but it won't stop the program from compiling and running
    // When we print out the values now, they haven't changed
    cout << "\nnum1 is " << num1 << endl;
    cout << "num2 is " << num2 << endl;
    
	cout << endl;
    return 0;
}