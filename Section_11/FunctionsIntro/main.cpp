#include <iostream>
#include <ctime>
#include <vector>
#include <iomanip>
 
using namespace std;    // BAD PRACTICE! Don't use using!! But since I'm lazy I'll use it during this course.
 
int main() {
    int random_number {};
    size_t count {10000000};  // How many random numbers do you want to generate?
    int min {1};          // Must be <= max
    int max {20};          // Must be >= min
    vector <size_t> number_distribution (min + max + 1, 0);
    size_t total_numbers {};
    size_t unique_numbers {};
    
    cout << "RAND_MAX on my system is: " << RAND_MAX << endl;
    srand(time(nullptr));       // Seeding the random number generator to get different series of number each time program runs
    
    // Run only ONE of the random_number-statements in this loop
    for(size_t i {1}; i <= count; i++) {
        random_number = rand() % (max - min + 1) + min;         // Correct version!!
//        random_number = rand() % max + min;                     // NOT correct!!
        number_distribution.at(random_number)++;
    }
    
    // Printing out a table of numbers and how many times that got selected
    cout << "\nmin: \t" << min << endl;
    cout << "max: \t" << max << endl;
    cout << "count: \t" << count << endl;
    cout << "\nnumber\ttimes\tpercent" << endl;
    cout << "=======================" << endl;
    cout << fixed << setprecision(2);
    for(size_t i {0}; i < number_distribution.size(); i++) {
        total_numbers += number_distribution.at(i);
        if (number_distribution.at(i) !=0) {
            cout << i << "\t" << number_distribution.at(i) << "\t" << setw(7) << right << static_cast<double>(number_distribution.at(i))/count * 100 << endl;
            unique_numbers++;
        }
    }
    cout << "\nNumber of unique numbers selected: " << unique_numbers << endl;
    cout << "Total numbers selected: " << total_numbers << ". This " << (total_numbers == count ? "is " : "IS NOT ") << "the same as the count variable." << endl;
    
    cout << endl;
    return 0;
} 