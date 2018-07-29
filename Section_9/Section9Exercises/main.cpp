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
    
    // 10: If Statement - Can you Drive?
    if (age >= 16)
        cout << "Yes - you can drive!";
    
    // 11: If-Else Statemente - Can you Drive?
    if (age >= 16)
        cout << "Yes - you can drive!";
    else
        cout << "Sorry, come back in " << 16 - age << " years";
    
    // 12: Nested If Statemente - Can you Drive?
    if (age >= 16) {
        if (has_car)
            cout << "Yes - you can drive!";
        else
            cout << "Sorry, you need to buy a car before you can drive!";
    }     
    else
        cout << "Sorry, come back in " << 16 - age << " years and be sure you own a car when you come back.";
    
    // 13: Switch Statement - Day of the Week
    switch(day_code) {
        case 0:
            cout << "Sunday";
            break;
        case 1:
            cout << "Monday";
            break;
        case 2:
            cout << "Tuesday";
            break;
        case 3:
            cout << "Wednesday";
            break;
        case 4:
            cout << "Thursday";
            break;
        case 5:
            cout << "Friday";
            break;
        case 6:
            cout << "Saturday";
            break;
        default:
            cout << "Error - illegal day code";
            break;
    }
    
    // 14: For loop - Sum of Odd Integers
    int sum {};
    for (int i {1}; i <= 15; i++)
        if (i % 2)
            sum += i;
            
    // 15: Using the range-based for loop
    int count {};
    for (auto val: vec) {
        if (!(val % 3) || !(val % 5)) {
            count++;
        }
    }

    // 16: While loop exercise
    int count {};
    int pos {};
    while (pos < vec.size() && vec.at(pos) != -99) {
        count++;
        pos++;
    }

    // 17: Nested Loops - Sum of the Product of all Pairs of Vector Elements
    int result {};
    for(size_t i{};i < vec.size(); i++) {
        for(size_t j{i+1};j < vec.size(); j++) {
            result += vec.at(i) * vec.at(j);
        }
    }

    cout << endl;
    return 0;
}