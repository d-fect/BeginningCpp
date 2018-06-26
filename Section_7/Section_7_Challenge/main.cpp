#include <iostream>
#include <vector>

using namespace std;    // BAD PRACTICE! Don't use using!! But since I'm lazy I'll use it during this course.

int main() {
    // Declare 2 empty vectors, vector1 and vector2
    vector <int> vector1;
    vector <int> vector2;
    
    // Add 10 and 20 to vector1 using push_back()
    // Display elements and size of vector1 using at() and size()
    vector1.push_back(10);
    vector1.push_back(20);
    vector1.push_back(30);
    
    for(int i {0}; i < vector1.size(); i++) {
        cout << "vector1[" << i << "] = " << vector1.at(i) << endl;
    }
    cout << "Vector1 size = " << vector1.size() << endl << endl;
    
    // Add 100 and 200 to vector2 using push_back()
    // Display elements and size of vector2 using at() and size()
    vector2.push_back(100);
    vector2.push_back(200);
    
    for(int i {0}; i < vector2.size(); i++) {
        cout << "vector2[" << i << "] = " << vector2.at(i) << endl;
    }
    cout << "Vector2 size = " << vector2.size() << endl << endl;
    
    // Declare empty 2D vector, vector_2d
    vector <vector<int>> vector_2d;
    
    // Add vector1 and vector2 to vector_2d
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    
    // Display the elements of vector_2d
    for(int i {0}; i < vector_2d.size(); i++) {
        for (int j {0}; j < vector_2d.at(i).size(); j++) {
        cout << "vector_2d[" << i << "][" << j << "] = " << vector_2d.at(i).at(j) << endl;
        }
    }
    
    cout << "\nVector_2d[0] size = " << vector_2d.at(0).size() << endl;
    cout << "Vector_2d[1] size = " << vector_2d.at(1).size() << endl;
    cout << "Vector_2d size = " << vector_2d.size() << endl << endl;
    
    // Change vector1.at(0) to 1000
    vector1.at(0) = 1000;

    // Display the elements of vector_2d again
    for(int i {0}; i < vector_2d.size(); i++) {
        for (int j {0}; j < vector_2d.size(); j++) {
        cout << "vector_2d[" << i << "][" << j << "] = " << vector_2d.at(i).at(j) << endl;
        }
    }
    cout << "Vector_2d size = " << vector_2d.at(0).size() << endl << endl;
    
    // Display the elements in vector1
    for(int i {0}; i < vector1.size(); i++) {
        cout << "vector1[" << i << "] = " << vector1.at(i) << endl;
    }
    cout << "Vector1 size = " << vector1.size() << endl << endl;
    
	cout << endl;
    return 0;
}