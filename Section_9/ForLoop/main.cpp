#include <iostream>
#include <vector>

using namespace std;    // BAD PRACTICE! Don't use using!! But since I'm lazy I'll use it during this course.

int main() {
    for (int i {1}; i <= 10; i++)
        cout << i << endl;
    
//    for (int i {1}; i <= 10; i+=2)
//        cout << i << endl;

//    for (int i {10}; i > 0; i++)
//        cout << i << endl;
//        cout << "Blastoff!" << endl;    // Will give you a nice, little compiler warning
        
//    for (int i {10}; i <= 100; i+=10) {
//        if (i % 15 == 00)
//            cout << i << endl;
//    }

//    for (int i {1}, j{5}; i <= 5; i++, j++)
//        cout << i << " + " << j << " = " << i+j << endl;

//    for (int i{1}; i<=100; i++) 
//        cout << i << ((i % 10 == 0) ? "\n" : ", ");

//    vector <int> nums {10,20,30,40,50};
//    for (unsigned i {0}; i < nums.size(); i++)
//        cout << nums[i] << endl;
        
//    for (;;)
//        cout << "This is an endless loop!" << endl;

    cout << endl;
    return 0;
}