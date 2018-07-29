#include <iostream>

using namespace std;    // BAD PRACTICE! Don't use using!! But since I'm lazy I'll use it during this course.

int main() {
    // I will only include the code that are "between the lines"
    // DO NOT LOOK HERE BEFORE YOU HAVE EXHAUSTED ALL OTHER POSSIBILITES
    // At least look through the section videos once more
    // THEN use Google
    // THEN use the Q&A in the course
    // THEN sleep on it
    // Have you asked your friendly rubber duck zen master for help? https://rubberduckdebugging.com/
    // OK, feel free to look at the code below
    // I will not guarantee it's the best solution, but my solutions are tested on Udemy and passes

    // 7: Using the Assignment Operator
    int num1 {13};
    int num2 {};
    num1 = 5;
    num2 = num1; 
    
    // 8: Using the Arithmetic Operators
    // Doing the statements one by one
    // Initialization and output is NOT part of exercise, just included to test calculations
    // int number {3};
    // int original_number {3};
    number = number * 2;
    number = number + 9;
    number = number - 3;
    number = number / 2;
    number = number - original_number;
    number = number % 3;
    //cout << "One by one: " << number << endl;;
    
    // Doing the calculation in just ONE statement
    // Initialization and output is NOT part of exercise, just included to test calculations
    //number = 3;
    number = ((number * 2 + 9 - 3) / 2 - original_number) % 3;
    //cout << "One statment: " << number << endl;;
    
    // 9: Logical Operators and Operator Precedence - Can you work?
    (age >= 18 || (age > 15 && parental_consent)) && ssn && !accidents
    
    cout << endl;
    return 0;
}