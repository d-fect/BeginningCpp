#include <iostream>
#include <ctime>
#include <cmath>
#include <cstdlib>
#include <vector>

using namespace std;    // BAD PRACTICE! Don't use using!! But since I'm lazy I'll use it during this course.

int add_integers (int a, int b) {
    return a+b;
}

int main() {
//    cout << add_integers(10,20) << endl;
    
    // Math stuff
//    double num {};
//    cout << "\nEnter a number: ";
//    cin >> num;
//    
//    cout << "The square root of " << num << " is: " << sqrt(num) << endl;
//    cout << "The cubed root of " << num << " is: " << cbrt(num) << endl;
//    
//    cout << "The sine of " << num << " is: " << sin(num) << endl;
//    cout << "The cosine of " << num << " is: " << cos(num) << endl;
//    
//    cout << "The ceil of " << num << " is: " << ceil(num) << endl;
//    cout << "The floor of " << num << " is: " << floor(num) << endl;
//    cout << "The round of " << num << " is: " << round(num) << endl;
//    
//    double power {};
//    cout << "\nEnter a power to raise " << num << " to: ";
//    cin >> power;
//    
//    cout << num << " raised to the power of " << power << " is: " << pow(num, power) << endl;

    // Random numbers
    int random_number {};
    size_t count {100000};  // How many random numbers do you want to generate?
    int min {153};           
    int max {155};          
    
    cout << "RAND_MAX on my system is: " << RAND_MAX << endl;
    srand(time(nullptr));       // Seeding the random number generator to get different series of number each time program runs
    
    // Made a visual demo of the difference between to the random_number-statements above    
    // Filling a vector with number of times each number got randomly selected
    vector <size_t> number_distribution (min + max, 0);
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
    for(size_t i {}; i < number_distribution.size(); i++) {
        total += number_distribution.at(i);
        if (number_distribution.at(i) !=0)
            cout << i << "\t" << number_distribution.at(i) << endl;
    }
    cout << "\nA sum total of " << total << " numbers was randomly selected. Which " << (total == count ? "is " : "IS NOT ") << "the same as the variable count." << endl;
    
    cout << endl;
    return 0;
} 