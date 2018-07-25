//
// My solution for this is not the same as the instructor shows in the lecture
// Just shows that there are many ways to do things
// I watched the example and wrote this before I watched the instructor wrote his
// I really 
//

#include <iostream>

using namespace std;    // BAD PRACTICE! Don't use using!! But since I'm lazy I'll use it during this course.

int main() {
    char selection {};
    bool done {false};
    
    do {
        cout << "\n---------------------" << endl;
        cout << "1. Do this\n2. Do that\n3. Do something else\nQ: Quit" << endl;
        cout << "\nEnter your selection: ";
        cin >> selection;
        
        switch (selection) {
            case '1':
                cout << "You chose " << selection << " - doing this" << endl;
                break;
            case '2':
                cout << "You chose " << selection << " - doing that" << endl;
                break;
            case '3':
                cout << "You chose " << selection << " - doing something else" << endl;
                break;
            case 'q':
            case 'Q':
                cout << "\nGoodbye..." << endl;
                done = true;
                break;
            default:
                cout << "\n" << selection << " is an unknown option - try again...";
                break;
        } 
    } while (!done);
    
    
    cout << endl;
    return 0;
}