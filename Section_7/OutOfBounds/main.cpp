#include <iostream>

using namespace std;    // BAD PRACTICE! Don't use using!! But since I'm lazy I'll use it during this course.

/********************************************************************************
 * This is just a template I found for finding the size of an array
 * Hopefully the course will show us something better as I don't understand this
 * Snatched it from http://www.cplusplus.com/forum/general/33669/
 * ******************************************************************************/
template <typename T,unsigned S>
inline unsigned arraysize(const T (&v)[S]) { return S; }

int main() {
    int test_scores [5] {100,95,99,87,88};
    
    cout << "The number of elements in the array is " << arraysize(test_scores) << endl;
    cout << "The total size of the the array is " << sizeof(test_scores) << " bytes" << endl;
    
    cout << "\nThe content of the elements in the array is:" << endl;
    for (int i {0}; i<5; i++) {           // This prints only the values in the array
//    for (int i {0}; i<10; i++) {            // This will go out of bounds of the array and print garbage values. You won't get ANY errors or warning, so be careful of this.
        cout << "Element " << i << ": "<< test_scores[i] << endl;
    }
    
/******************************************************************************
 * Running the piece of code below have high probabilty of crashing something
 * You will write data into some memoryspace some other programs might be using
 * Do it at your own risk
 * I take no responsibility of data loss or other unwanted effects
 ******************************************************************************/
//    cout << "Enter a test score: ";
//    int score {0};
//    cin >> score;
//    test_scores[10] = score;

    cout << endl;
    return 0;
}