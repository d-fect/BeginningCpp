#include <iostream>
#include <string>
#include <vector>

using namespace std;    // DON'T DO THIS. It's BAD practice, but I'll use it for this course

void print(int);
void print(double);
void print(string);
void print(string, string);
void print(vector<string>);

void print(int num) {
    cout << "Printing int: " << num << endl;
}

void print(double num) {
    cout << "Printing double: " << num << endl;
}

void print(string str) {
    cout << "Printing string: " << str << endl;
}

void print(string str1, string str2) {
    cout << "Printing string 1: " << str1 << ". Printing string 2: " << str2 << endl;
}

void print(vector<string> vec) {
    int i {1};
    for (string str: vec) {
        cout << "Printing vector of strings, part " << i << "/" << vec.size() << ": " << str << endl;
        i++;
    }
}

int main() {
    int i {10};
    double dbl {23.23};
    string str1 {"String #1"};
    string str2 {"String #2"};
    vector<string> string_vector {str1, str2};
    
    print(i);
    print('A'); // Character is always promoted to int
    print(dbl);
    print(123.3F);  // Float is promoted to double
    print(str1);
    print("C-style string");    // C-style strinbg converted to C++ string
    print(str1, str2);
    print(string_vector);
    
    cout << endl;
    return 0;
}