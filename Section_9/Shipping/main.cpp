#include <iostream>
#include <iomanip>

using namespace std;    // BAD PRACTICE! Don't use using!! But since I'm lazy I'll use it during this course.

int main() {
    int length {}, width {}, height {};

    const double base_cost {2.50};
    const int max_dimension_length {10};

    const int tier1_threshold {100};
    const int tier2_threshold {500};
    const double tier1_surcharge {0.10};
    const double tier2_surcharge {0.25};
    
//    int package_volume {};
    
    cout << "Welcome to package cost calculator" << endl;
    cout << "Enter length, width, and height of the package separated by spaces: ";
    cin >> length >> width >> height;
    
    // added check to make sure package actually have 
    if (length < 1 || width < 1 or height < 1) {
        cout << "Your package needs to have three dimensions" << endl;
    } else if (length > max_dimension_length || width > max_dimension_length || height > max_dimension_length) {
        cout << "Sorry, package rejected - dimensions exceeded" << endl;
    } else {
        double package_cost {};
        int package_volume = length * width * height;
        package_cost = base_cost;
        
        if (package_volume > tier2_threshold) {
            package_cost += package_cost * tier2_surcharge;
//            cout << "\n** adding tier 2 surcharge" << endl;
        } else if (package_volume > tier1_threshold) {
            package_cost += package_cost * tier1_surcharge;
//            cout << "\n** adding tier 1 surcharge" << endl;
        }
        
        cout << fixed << setprecision(2);
        cout << "\nThe volume of your package is: " << package_volume << endl;
        cout << "Your package will cost $" << package_cost << " to ship" << endl;
    }
    
    cout << endl;
    return 0;
}