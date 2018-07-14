#include <iostream>

using namespace std;    // BAD PRACTICE! Don't use using!! But since I'm lazy I'll use it during this course.

int main() {
    enum Direction {left, right, up, down};
    
    Direction heading {left};
    
    switch (heading) {
        case left:
            cout << "Going left" << endl;
            break;
        case right:
            cout << "Going right" << endl;
            break;
// If you don't include all options or a default, the compiler will throw a warning on switch-case on an enumerator
// Uncomment the code below to remove the warnings when compiling
//        default :
//            cout << "OK" << endl;
//            break;
    }
    
    cout << endl;
    return 0;
}