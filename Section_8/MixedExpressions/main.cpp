#include <iostream>
#include <vector>

using namespace std;    // BAD PRACTICE! Don't use using!! But since I'm lazy I'll use it during this course.

int main() {
    int total {};
    int count {};

    cout << "How many integers do you want to enter? ";
    cin >> count;
    vector <int> numbers (count, 0);
    
    for(int i {0}; i < count; i++) {
        cout << "Enter integer " << i+1 << ": "; 
        cin >> numbers.at(i);
        total += numbers.at(i);
    }

    double average {0.0};
    cout << "\nThe sum of the " << count << " numbers is: " << total << endl;
    
    // Calculating average without casting
    average = total / count;        // The compiler will use integer division 
    cout << "The average of the " << count << " numbers using integer division is: " << average << endl;
    
    // Calulating average WITH casting
    average = static_cast<double>(total) / count;   // This is modern C++ style casting and it checks that the casting is valid.
    // average = (double)total / count;             // This is old C-style casting and it just assumes total can be converted to double. Don't use this type.
    cout << "The average of the " << count << " numbers using explicit cast to double is: " << average << endl;
    
    cout << endl;
    return 0;
}