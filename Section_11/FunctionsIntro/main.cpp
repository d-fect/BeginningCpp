#include <iostream>
#include <ctime>
//#include <cmath>
//#include <cstdlib>
#include <vector>

using namespace std;    // BAD PRACTICE! Don't use using!! But since I'm lazy I'll use it during this course.

int main() {
    int random_number {};
    size_t count {100000};  // How many random numbers do you want to generate?
    int min {20};          // Must be <= max
    int max {30};          // Must be >= min
    
    cout << "RAND_MAX on my system is: " << RAND_MAX << endl;
    srand(time(nullptr));       // Seeding the random number generator to get different series of number each time program runs
    
    // Made a visual demo of the difference between to the random_number-statements above    
    // Filling a vector with number of times each number got randomly selected
    vector <size_t> number_distribution (min + max + 1, 0);
    size_t total {};
    
    for(size_t i {1}; i <= count; i++) {
//        random_number = rand() % (max - min + 1) + min;       // Correct version!!
        random_number = rand() % max + min;     // NOT correct!!
        number_distribution.at(random_number)++;
    }
    
    // Printing out a table of numers and times selected
    cout << "\nmin: \t" << min << endl;
    cout << "max: \t" << max << endl;
    cout << "count: \t" << count << endl;
    cout << "\nnumber\ttimes" << endl;
    cout << "=============" << endl;
    for(size_t i {0}; i < number_distribution.size(); i++) {
        total += number_distribution.at(i);
        if (number_distribution.at(i) !=0)
            cout << i << "\t" << number_distribution.at(i) << endl;
    }
    cout << "\nA sum total of " << total << " numbers was randomly selected. Which " << (total == count ? "is " : "IS NOT ") << "the same as the variable count." << endl;
    
    cout << endl;
    return 0;
} 