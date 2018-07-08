#include <iostream>

using namespace std;    // BAD PRACTICE! Don't use using!! But since I'm lazy I'll use it during this course.

int main() {
    int num1 {}, num2 {};
    bool is_equal {true}, is_not_equal {false};
    
    cout << "What does the boolean variables contain?" << endl;
    cout << noboolalpha;
    cout << "is_equal contains " << is_equal << ", which means the same as " << boolalpha << is_equal << endl;
    cout << noboolalpha;
    cout << "is_not_equal contains " << is_not_equal << ", which means the same as " << boolalpha << is_not_equal << endl;
    cout << noboolalpha;

    cout << "\nEnter two integer numbers separated by a space: ";
    cin >> num1 >> num2;
    is_equal = (num1 == num2);
    is_not_equal = (num1 != num2);
    cout << "Result of checking if numbers are equal: " << is_equal << boolalpha << ", which means the same as " << is_equal << noboolalpha << endl;
    cout << "Result of checking if numbers are not equal: " << is_not_equal << boolalpha << ", which means the same as " << is_not_equal << noboolalpha << endl;
    
    cout << "\nWhat can happen if we check if two different but close doubles are equal?" << endl;
    cout << "Are 10.0 and 9.9999999999999999 the same number?" << endl;
    cout << "C++ says... " << boolalpha << (10.0 == 9.9999999999999999) << noboolalpha << "!!!!" << endl;   // On your system you might have to add some nines to get the same result.
    
	cout << endl;
    return 0;
}