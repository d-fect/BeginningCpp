#include <iostream>
using namespace std;    // DON'T DO THIS. It's BAD practice, but I'll use it for this course

const double pi {3.14159};

double calc_area_circle(double radius) {
    return pi * radius * radius;
}

double calc_volume_cylinder(double radius, double height) {
    return calc_area_circle(radius) * height;
}

void area_circle() {
    double radius {};
    cout << "\nEnter the radius: ";
    cin >> radius;
    
    cout << "The area of a circle with radius " << radius << " is " << calc_area_circle(radius) << endl;
}

void volume_cylinder() {
    double height {}, radius {};
    cout << "\nEnter the radius: ";
    cin >> radius;
    
    cout << "Enter the height: ";
    cin >> height;

    cout << "The volum of a cylinder with radius " << radius << " and height " << height << " is " << calc_volume_cylinder(radius, height) << endl;
}

int main() {
    area_circle();
    volume_cylinder();
    
    cout << endl;
    return 0;
}