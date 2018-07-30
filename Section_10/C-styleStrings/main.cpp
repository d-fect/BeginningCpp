#include <iostream>

using namespace std;    // BAD PRACTICE! Don't use using!! But since I'm lazy I'll use it during this course.

int main() {
    char my_name[9];
    
    cout << my_name << endl;
    
    for(int i {1} ; i<=9 ; i++)
        cout <<i;
    cout << endl;
    
    for(auto val:my_name)
        cout << val;

    cout << endl;
    return 0;
}