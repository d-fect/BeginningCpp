#include <iostream>

using namespace std;    // BAD PRACTICE! Don't use using!! But since I'm lazy I'll use it during this course.

int main() {
    int amount {}, dollars {}, quarters {}, dimes {}, nickels {}, pennies {}, remainder {};

    // Ask user for amount
    cout << "Enter amount in cents: ";
    cin >> amount;
    
    // Declaring the different values
    const int dollar_value {100};
    const int quarter_value {25};
    const int dime_value {10};
    const int nickel_value {5};
    
    // Calculate the different values for dollars, quarters etc
    dollars = amount / dollar_value ;
    remainder = amount % dollar_value ;
    quarters = remainder / quarter_value;
    remainder %= quarter_value;
    dimes = remainder / dime_value;
    remainder %= dime_value;
    nickels = remainder / nickel_value;
    pennies = remainder % nickel_value;
    
    // Present result to user
    cout << "\nYou can provide this change as follows:" << endl;
    cout << "dollars  : " << dollars << endl;
    cout << "quarters : " << quarters << endl;
    cout << "dimes    : " << dimes << endl;
    cout << "nickels  : " << nickels << endl;
    cout << "pennies  : " << pennies << endl;
    
	cout << endl;
    return 0;
}