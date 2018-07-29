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
    
    vector <int> list {};
    char selection {};

    do {
        cout << "\nP - Print numbers\n";
        cout << "A - Add a number\n";
        cout << "M - Display mean of the numbers\n";
        cout << "S - Display the smallest number\n";
        cout << "L - Display the largest number\n";
        cout << "F - Find a number in the list\n";
        cout << "C - Clear the list\n";
        cout << "Q - Quit" << endl;
        cout << "\nEnter your choice: ";
        cin >> selection;
        
        switch (tolower(selection)) {
            case 'p':
                if (list.size() == 0)
                    cout << "[] - the list is empty" << endl;
                else {
                    cout << "[ ";
                    for (auto val:list)
                        cout << val << " ";
                    cout << "]" << endl;
                }
                break;
            case 'a': {
                int new_element {};
                cout << "Please provide a new integer: ";
                cin >> new_element;
                list.push_back(new_element);
                cout << list.back() << " added" << endl;
                break;
            }

// Alternate version of add functionality, not allowing duplicates
//            case 'a': {
//                bool already_exists {false};
//                int new_element {};
//                cout << "Please provide a new integer: ";
//                cin >> new_element;
//                for (auto val:list)
//                    if (new_element == val)
//                        already_exists = true;
//                if (already_exists)
//                    cout << "That number is already in the list, not added" << endl;
//                else {
//                    list.push_back(new_element);
//                    cout << list.back() << " added" << endl;
//                }
//                break;
//            }
            
            case 'm': {
                if (list.size() == 0)
                    cout << "Unable to calculate the mean - no data" << endl;
                else {
                    double mean {};
                    for (auto val:list)
                        mean += val;
                    mean /= list.size();
                    cout << "List average is: " << mean << endl;
                }
                break;
            }
            case 's': {
                if (list.size() == 0)
                    cout << "Unable to determine the smallest number - list is empty" << endl;
                else {
                    int smallest {list.at(0)};
                    for (auto val:list) {
                        if (val < smallest)
                            smallest = val;
                    }
                    cout << "The smallest number is " << smallest << endl;
                }
                break;
            }
            case 'l': {
                if (list.size() == 0)
                    cout << "Unable to determine the largest number - list is empty" << endl;
                else {
                    int largest {list.at(0)};
                    for (auto val:list) {
                        if (val > largest)
                            largest = val;
                    }
                    cout << "The largest number is " << largest << endl;
                }
                break;
            }
            case 'f': {
                int search_value {};
                int count {};
    
                if (list.size() == 0)
                    cout << "Unable to search - list is empty" << endl;
                else {
                    cout << "Enter the integer to search for: ";
                    cin >> search_value;
                    for (auto val:list) {
                        if (search_value == val)
                            count++;
                    }
                    if (count == 0)
                        cout << "The number " << search_value << " was not found in the list." << endl;
                    else
                        cout << "The number " << search_value << " was found " << count << " times in the list." << endl;
                }
                break;
            }
            case 'c': {
                char clear_list {};
                if (list.size() == 0)
                    cout << "List is already empty" << endl;
                else {
                    cout << "This will erase all the numbers from the list.\nAre you sure (y/n)? ";
                    cin >> clear_list;
                    if (tolower(clear_list) == 'y') {
                        list.clear();
                        cout << "The list is now empty." << endl;
                    }
                    else {
                        cout << "The list has not been changed." << endl;
                    }
                }
                break;
            }
            case 'q':
                cout << "Goodbye" << endl;
                break;
            default:
                cout << "Unknown selection, please try again" << endl;
                break;
        }
    } while (tolower(selection) != 'q');
    
    cout << endl;
    return 0;
}