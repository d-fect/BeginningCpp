#include <iostream>
#include <iomanip>
#include <string>

using namespace std;    // BAD PRACTICE! Don't use using!! But since I'm lazy I'll use it during this course.

int main() {
    string s0;
    string s1 {"Apple"};
    string s2 {"Banana"};
    string s3 {"Kiwi"};
    string s4 {"apple"};
    string s5 {s1};
    string s6 {s1, 0, 3};
    string s7 (10, 'X');    // Paranthesis (), NOT curlies {}
    
//    cout << s0 << endl;
//    cout << s0.length() << endl;
    
//    // Initialization
//    cout << "\nInitialization" << "\n------------------------------------" << endl;
//    cout << "s1 is initalized to: " << s1 << endl;
//    cout << "s2 is initalized to: " << s2 << endl;
//    cout << "s3 is initalized to: " << s3 << endl;
//    cout << "s4 is initalized to: " << s4 << endl;
//    cout << "s5 is initalized to: " << s5 << endl;
//    cout << "s6 is initalized to: " << s6 << endl;
//    cout << "s7 is initalized to: " << s7 << endl;
    
//    // Comparison
//    cout << "\nComparison" << "\n------------------------------------" << endl;
//    cout << boolalpha;
//    cout << s1 << " == " << s5 << ": " << (s1 == s5) << endl;
//    cout << s1 << " == " << s2 << ": " << (s1 == s2) << endl;
//    cout << s1 << " != " << s2 << ": " << (s1 != s2) << endl;
//    cout << s1 << " < " << s2 << ": " << (s1 < s2) << endl;
//    cout << s2 << " > " << s1 << ": " << (s2 > s1) << endl;
//    cout << s4 << " < " << s5 << ": " << (s4 < s5) << endl;
//    cout << s1 << " == " << "Apple" << ": " << (s1 == "Apple") << endl;

//    // Assignemnt
//    cout << "\nAssignment" << "\n------------------------------------" << endl;
//    
//    s1 = "Watermelon";
//    cout << "s1 is now: " << s1 <<  endl;
//    s2 = s1;
//    cout << "s2 is now: " << s2 <<  endl;
//    
//    s3 = "Frank";
//    cout << "s3 is now: " << s3 <<  endl;
//    s3[0] = 'C';
//    cout << "s3 has after s3[0] = 'C' changed to: " << s3 <<  endl;
//    s3.at(0) = 'P';
//    cout << "s3 has after s3.at(0) = 'P' changed to: " << s3 <<  endl;

//    // Concatenation
//    cout << "\nConcatenation" << "\n------------------------------------" << endl;
//    s3 = "Watermelon";
//    s3 = s5 + " and " + s2 + " juice";
//    cout << "s3 is now: " << s3 << endl;
//    
////    s3 = "nice " + "cold " + s5 + " juice";               // Error, can't add two C-style string literals
    
//    // for loop
//    cout << "\nFor loop" << "\n------------------------------------" << endl;
//    s1= "Apple";
//    for (size_t i {0}; i < s1.length(); i++)
//        cout << s1.at(i);                                   // s1.at(i) is safer than s1[i] because it has bounds checking
//    cout << endl;

//    // Range-based for loop
//    cout << "\nRange based for" << "\n------------------------------------" << endl;
//    for (auto c:s1)
//        cout << c;
//    cout << endl;

//    // Substring
//    cout << "\nSubstring" << "\n------------------------------------" << endl;
//    s1 = "This is a test";
//    cout << s1.substr(0,4) << endl;         // This
//    cout << s1.substr(5,2) << endl;         // is
//    cout << s1.substr(8,1) << endl;         // a
//    cout << s1.substr(10,4) << endl;        // test

//    // Erase
//    cout << "\nErase" << "\n------------------------------------" << endl;
//    s1 = "This is a test";
//    s1.erase(0,5);
//    cout << "s1 is now: " << s1 << endl;

//    // Getline
//    cout << "\nGetline" << "\n------------------------------------" << endl;
//    string full_name {};
//    cout << "Enter your full name: ";
//    getline(cin, full_name);                                // Get one entire line from cin (keyboard) and store it in the variable full_name
//    cout << "Your full name is: " << full_name << endl;

    // Find
    cout << "\nFind" << "\n------------------------------------" << endl;
    s1 = "The secret word is Boo";
    string word {};
    
    cout << "Enter a word to find: ";
    cin >> word;
    
    size_t position = s1.find(word);
    if (position != string::npos)
        cout << "Found " << word << " at position: " << position << endl;
    else
        cout << "Sorry, " << word << " not found" << endl;

    cout << endl;
    return 0;
} 