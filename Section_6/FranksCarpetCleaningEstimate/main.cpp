#include <iostream>

using namespace std;    // BAD PRACTICE!!! But I'm lazy so doing it in these small programs.

int main() {
    // Declaring constants
    const double price_small_room {25.0};
    const double price_large_room {35.0};
    const double sales_tax_rate {0.06};
    const int estimate_expiry_days {30};
    
    // Intro and getting input from customer
    cout << "Welcome to Franks Carpet Cleaning Service\n";
    cout << "\nPlease provide number of rooms you want cleaned." << endl;
    cout << "Number of small rooms: ";
    int small_rooms {0};
    cin >> small_rooms;
    cout << "Number of large rooms: ";
    int large_rooms {0};
    cin >> large_rooms;
    
    // Calculate costs
    double cost { (price_small_room * small_rooms) + (price_large_room * large_rooms) };
    double sales_tax { cost * sales_tax_rate };
    double total_estimate { cost + sales_tax };
    
    // Present the estimate to customer
    cout << "\nEstimate for carpet cleaning service.\n";
    cout << "Number of small rooms: " << small_rooms << endl;
    cout << "Number of large rooms: " << large_rooms << endl;
    cout << "Price per small room: $" << price_small_room << endl;
    cout << "Price per large room: $" << price_large_room << endl;
    cout << "Cost: $" << cost << endl;
    cout << "Tax: $" << sales_tax << endl;
    cout << "================================================\n";
    cout << "Total estimate: $" << total_estimate << endl;
    cout << "This estimate is valid for " << estimate_expiry_days << " days." << endl;
        
    cout << endl;
    return 0;
}