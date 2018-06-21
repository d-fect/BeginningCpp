#include <iostream>
using namespace std;

int main() {
    /**********************************************
     *  Character type
     **********************************************/
    char middle_initial {'J'};
    cout << "My middle initial is " << middle_initial << endl;
    
    /**********************************************
     * Integer types
     **********************************************/
    unsigned short int exam_score {55};
    cout << "My exam score was " << exam_score << endl;
    
//    long people_on_earth {7'600'000'000};  // This will throw an error when compiling, as the number doesn't fit in a long
//    long people_on_earth = 7'600'000'000;  // This will give an unexpected result. You do get a warning from the compiler, but it will build and run the program. It's therefore better to use {} when declaring a variable
    long long people_on_earth {7'600'000'000};  // You can use ' as a divider in C++14 to ease reading of large numbers
    cout << "There are about " << people_on_earth << " people on earth" << endl;
    
    /**********************************************
     * Floating point types
     **********************************************/
    float car_payment {401.23};
    cout << "My car payment is " << car_payment << endl;
    
    long double large_amount {2.7e120};
    cout << large_amount << " is a very big number" << endl;
    
    /**********************************************
     * Boolean type
     **********************************************/
    bool game_over {false};
    cout << "The value of game_over is " << game_over << endl;
    
    /**********************************************
     * Overflow example
     **********************************************/
    short value1 {30000};
    short value2 {1000};
    short product {value1 * value2};  // Will give an overflow and not the correct result. 
    cout << "The product of " << value1 << " and " << value2 << " is " << product << endl; 
    
    return 0;
}