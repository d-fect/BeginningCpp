// Just playing around with some math stuff
#include <iostream>
#include <cmath>

using namespace std;    // BAD PRACTICE! Don't use using!! But since I'm lazy I'll use it during this course.

const double PI {3.14159265};

int main() {
    for(int degree {0}; degree <= 360; degree++)
        cout << "cos(" << degree << ") = " << cos(degree * PI / 180.0) << endl;     // cos uses radians so need to convert degrees to rad
    
    cout << endl;
    return 0;
}