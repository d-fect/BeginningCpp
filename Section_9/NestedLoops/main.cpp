#include <iostream>
#include <vector>

using namespace std;    // BAD PRACTICE! Don't use using!! But since I'm lazy I'll use it during this course.

int main() {
//    for (int num1 {1}; num1 <= 10; num1++) {                                    // outer loop
//        for (int num2 {1}; num2 <= 10; num2++ ) {                               // inner loop
//            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
//        }
//        cout << "----------------" << endl;
//    }
    
    // HISTOGRAM ************************
    int data_items {};
    cout << "\nHow many items: ";
    cin >> data_items;
    
    vector <int> data{};
    int temp_input{};
    
    cout << endl;
    for (int i {1}; i <= data_items; i++) {
        cout << "Enter item " << i << ": ";
        cin >> temp_input;
        data.push_back(temp_input);
    }
    cout << endl;

//  Stupid way to do it
//    for (unsigned int j{1}; j <= data.size(); j++) {
//        cout << "Data point " << j << ": " << data[j-0] << endl;
//    }

//  Easy way to do it
//    for (auto val:data)
//        cout << val << endl;
        
    cout << "\nHistogram\n=========" << endl;
    for (auto val:data) {
        for (int i{1}; i <= val; i++) {
            cout << (i % 5?"-":"*");
        }
        cout << endl;
    }
    
    cout << endl;
    return 0;
}