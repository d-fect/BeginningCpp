#include <iostream>

using namespace std;    // DON'T DO THIS. It's BAD practice, but I'll use it for this course

void print_array(const int numbers [], size_t SIZE);    // const avoids accidentaly changing the value of the array
void zero_array(int numbers [], size_t SIZE);
void set_array(int numbers [], size_t SIZE, int value);

int main() {
    int my_numbers[] {1,2,3,4,5};
    
    print_array(my_numbers, 5);
    zero_array(my_numbers, 5);
    print_array(my_numbers, 5);
    set_array(my_numbers, 5, 123);
    print_array(my_numbers, 5);
    
    cout << endl;
    return 0;
}

void print_array(const int numbers [], size_t size) {
    for (size_t i {0}; i < size; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;
}

void zero_array(int numbers [], size_t size) {
    for (size_t i {0}; i < size; i++) 
        numbers[i] = 0;
}

void set_array(int numbers [], size_t size, int val) {
    for (size_t i {0}; i < size; i++) 
        numbers[i] = val;
}