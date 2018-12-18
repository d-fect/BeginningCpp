#include <iostream>
#include <iomanip>

using namespace std;    // BAD PRACTICE! Don't use using!! But since I'm lazy I'll use it during this course.

// Function Prototypes
double calc_cost(double base_cost, double tax_rate =0.06);

// Function Definitions
double calc_cost(double base_cost, double tax_rate) {
    return base_cost += (base_cost * tax_rate);
}


int main() {
    string item_cost {}, tax {};
    double cost {0};
    std::string::size_type sz;      // Used by stod-function. Uncertain how this works. Need to check.
    
    cout << "Enter the prize of the item: ";
    getline (cin, item_cost);
    
    cout << "Enter tax rate if other than 6%: ";
    getline(cin, tax);
    
    if (tax.empty())
        cost = calc_cost(stod(item_cost,&sz));
    else
        cost = calc_cost(stod(item_cost,&sz), stod(tax,&sz)/100);
        
    cout << fixed << setprecision(2);
    cout << "Total cost of item with prize " << item_cost << " and tax rate of " << (tax.empty()?"6":tax) << "% is " << cost << endl;
    return 0;
}