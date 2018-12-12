#include <iostream>
#define _USE_MATH_DEFINES   // Need this to use m_PI
#include <cmath>

using namespace std;    // BAD PRACTICE! Don't use using!! But since I'm lazy I'll use it during this course.

//const double pi {3.14159};    // Use this if M_PI doesn't work

double calc_area_circle(double radius) {
    return M_PI * pow(radius,2);
//    return pi * pow(radius,2);       // Use this line if M_PI doesn't work
}

double calc_volume_cylinder(double radius, double height) {
    return calc_area_circle(radius) * height;
}

void area_circle() {
    double radius {};
    cout << "\nEnter radius: ";
    cin >> radius;
    cout << "The area of a circle with radius " << radius << " is " << calc_area_circle(radius) << endl;
}

void volume_cylinder() {
    double radius, height {};
    cout << "\nEnter radius: ";
    cin >> radius;
    cout << "Enter height: ";
    cin >> height;
    
    cout << "The volume of a cylinder with radius " << radius << " and height " << height << " is " << calc_volume_cylinder(radius, height) << endl;
    
}

int main() {
    cout << "C++ defines PI as: " << M_PI << endl;
    
    area_circle();
    volume_cylinder();
    
    cout << endl;
    return 0;
}