#include <iostream>

using namespace std;    // BAD PRACTICE! Don't use using!! But since I'm lazy I'll use it during this course.

int main() {
//    int num1 {};
//    cout << "Start the countdown at? ";
//    cin >> num1;
//    
//    while (num1 > 0) {
//        cout << num1 << endl;
//        num1--;
//    }
//    cout << "Blastoff!" << endl;
    
//    int num2 {};
//    cout << "How high will you go? ";
//    cin >> num2;
//    
//    int i{1};
//    while (num2 >= i) {
//        cout << i << endl;
//        i++;
//    }
    
//    int num3 {};
//    cout << "Enter an integer less than 100: ";
//    cin >> num3;
//    
//    while (num3 >= 100) {
//        cout << "Enter an integer LESS than 100: ";
//        cin >> num3;
//    }
//    cout << "Thanks!" << endl;

//    bool done {false};
//    float num4 {0};
//    
//    while (!done) {
//        cout << "Enter an  between 1 and 5: ";
//        cin >> num4;
//        
//        if (num4 <= 1.00 || num4 >=5.00)
//            cout << "That's not right. Do better!" << endl;
//        else {
//            cout << "You did it. YEAY!!!" << endl;
//            done = true;
//        }
//    }

    bool done2 {false};
    int num5 {0};
    
    while (!done2) {
        cout << "Enter an integer between 1 and 5: ";       // Try to guess what happens if you enter 0.99
        cin >> num5;
        
        if (num5 <= 1 || num5 >=5)
            cout << num5 << " is not right. Do better!" << endl;
        else {
            cout << "You did it. YEAY!!!" << endl;
            done2 = true;
        }
    }


    cout << endl;
    return 0;
}