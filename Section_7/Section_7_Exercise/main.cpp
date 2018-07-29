#include <iostream>
#include <vector>    

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
    
    // 5: Declaring, Initializing and Accessing an Array
    int arr[10] {};
    arr[0] = 100;
    arr[9] = 1000;
    
    // 6: Declaring, Initializing and Accessing Vectors
    vector <int> vec {10,20,30,40,50};
    vec[0] = 100;
    vec[4] = 1000;
    
    cout << endl;
    return 0;
}