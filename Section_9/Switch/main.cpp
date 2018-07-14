#include <iostream>

using namespace std;    // BAD PRACTICE! Don't use using!! But since I'm lazy I'll use it during this course.

int main() {
    
    char letter_grade {};
    
    cout << "Enter the letter grade you expect on the exam: ";
    cin >> letter_grade;
    
    switch (toupper(letter_grade)) {
        case 'a':   // Don't needed since I check with toupper(), but included as an example that you can have two case-statements work almost as an OR
        case 'A':
            cout << "You need a 90 or above, study hard!" << endl;
            break;
        case 'B':
            cout << "You need 80-89 for a B, go study!" << endl;
            break;
        case 'C':
            cout << "You need a 70-79 for an average grade." << endl;
            break;
        case 'D':
            cout << "Hmmm, you should strive for a better grade. All you need is 60-69 for a D." << endl;
            break;
        case 'F':
        {
            char confirm {};
            cout << "Are you sure (Y/N)? ";
            cin >> confirm;
            
            if (toupper(confirm) == 'Y')
                cout << "OK, I guess you didn't study..." << endl;
            else if (toupper(confirm) == 'N')
                cout << "Good, go study!" << endl;
            else
                cout << "OK, you probably deserve that F...";
            
            break;
        }
        default:
            cout << "Please provide a valid grade.";
    }
    
    cout << endl;
    return 0;
}