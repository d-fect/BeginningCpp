#include <iostream>
#include <string>

using namespace std;    // BAD PRACTICE! Don't use using!! But since I'm lazy I'll use it during this course.

int main() {
    string s1 {"This is a test"};
    
    cout << s1.find("This") << endl;
    cout << s1.find("XX") << endl;
    
    if (s1.find("XX") == string::npos)
        cout << "Not found";

    cout << endl;
    return 0;
}