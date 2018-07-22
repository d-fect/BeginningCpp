#include <iostream>
#include <vector>
#include <iomanip>      // This is so we can use fixed and setprecision() later

using namespace std;    // BAD PRACTICE! Don't use using!! But since I'm lazy I'll use it during this course.

int main() {
    for (auto c: "This is a string, and auto will automatically make c a char")
        cout << c << endl;
    cout << endl;
    
//    for (char c: "This is a string, but we have explicitly made c a char")
//        cout << c;
//    cout << endl;

//    for (auto c: "This is a test!")
//        if (c != ' ')
//            cout << c;
            
//    for (auto c: "This is a test!")
//        if (c == ' ')
//            cout << '\t';   // Seems you can use both ''  and "" for this
//        else
//            cout << c;
    
//    int scores[] {10, 20, 30};
//    for (int score: scores)
//        cout << score << endl;

//    vector <double> temperatures {87.9,77.9, 80.0, 72.5};
//    double average_temp {};
//    double total {};
//    for (auto temp:temperatures)
//        total += temp;
//    if (temperatures.size() != 0)
//        average_temp = total / temperatures.size();
//    cout << fixed << setprecision(1);
//    cout << "The average temperatur is " << average_temp << " degrees." << endl;

//    for (auto val: {1,2,3,4,5})
//        cout << val << endl;

    cout << endl;
    return 0;
}