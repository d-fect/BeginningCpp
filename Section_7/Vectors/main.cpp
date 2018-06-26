#include <iostream>
#include <vector>       // Needed to include the vector-functionality

using namespace std;    // BAD PRACTICE! Don't use using!! But since I'm lazy I'll use it during this course.

int main() {
    // Example vector declarations
    vector <char> vowels (5);
    vector <int> test_scores (3);

    // Example vector initializers
    vector <char> vokaler {'a', 'e', 'i', 'o', 'u', 'y'};    // Use '' for char.  "" will give you strings
    vector <double> hi_temps (365, 80);                     // Makes a vector with 365 elements with the value 80.0
    
    vector <char> empty_char (5);
    cout << "An empty char vector is initialized with: " << empty_char[0] << endl;
 
    /************************************
     * Playing around with test_scores
     ************************************/

    // A vector is automatically initialized, so this should give us just 0's.
    cout << "\nTest score 1: " << test_scores[0] << endl;
    cout << "Test score 2: " << test_scores[1] << endl;
    cout << "Test score 3: " << test_scores[2] << endl;
    
    // Lets change the scores
    test_scores[0] = 98;             // array-style assignment. Have NO bounds check, so you can go outside the defined vector size
    test_scores.at(1) = 85;          // vector-style assignment. Won't let you go outside
    test_scores.at(2) = 70;
    // test_scores.at(3) = 4;          // This will give you an error when running the program

    cout << "\nUpdated test scores.\n";
    cout << "Test score 1: " << test_scores[0] << endl;
    cout << "Test score 2: " << test_scores.at(1) << endl;
    cout << "Test score 3: " << test_scores.at(2) << endl;
    
    // The statement below gives the number of elements in the vector. 
    // MUCH easier than finding the size of an array. See OutOfBounds-project for example on how to do it with arrays.
    cout << "There are " << test_scores.size() << " scores in the vector." << endl;     
    // cout << "Test score 4: " << test_scores.at(3) << endl;      // This will again give you an error when running the program
    
    // Let's add some elements using push_back-method
    test_scores.push_back(100);     // Adds elements to the vector and grows the size of the vector
    test_scores.push_back(93);
    
    cout << "\nWith the new test scores added.\n";
    cout << "Test score 1: " << test_scores[0] << endl;
    cout << "Test score 2: " << test_scores.at(1) << endl;
    cout << "Test score 3: " << test_scores.at(2) << endl;
    cout << "Test score 4: " << test_scores.at(3) << endl;      // Now we've expanded the vector, so this will now work
    cout << "Test score 5: " << test_scores.at(4) << endl;
    cout << "There are now " << test_scores.size() << " scores in the vector." << endl;
    
    // Let's play with a 2D vector
    // Here I declare a vector of vectors containing integers
    vector <vector <int>> exam_scores
    {
        {100,95,83,87},
        {95,93,92,97},
        {83,85,83,98}
    };
    
    cout << "\nProgress of student #1: " << exam_scores[0][0] << ", ";                                  // Again, you CAN use the array syntax to access it
    cout << exam_scores[0][1] << ", " << exam_scores[0][2] << ", " << exam_scores[0][3] << endl;
    cout << "Progress of student #2: " << exam_scores.at(1).at(0) << ", ";                              // But using vector syntax is better due to error checking etc
    cout << exam_scores.at(1).at(1) << ", " << exam_scores.at(1).at(2) << ", " << exam_scores.at(1).at(3) << endl;
    
	cout << endl;
    return 0;
}