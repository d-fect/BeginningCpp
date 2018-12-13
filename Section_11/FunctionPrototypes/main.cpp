#include <iostream>
#include <cmath>

using namespace std;    // DON'T DO THIS. It's BAD practice, but I'll use it for this course

double static const pi = 3.14159;

// Function Prototypes
void say_hello();
double calc_area_circle(double radius, double height);
void area_circle();
void volume_cylinder();       

// Function Definiton
void say_hello() {      
    cout << "Hello, World!" << endl;
}

int main() {
    say_hello();
    
    area_circle();
    volume_cylinder();
    
    cout << endl;
    return 0;
}

// More Function Definitons
double calc_area_circle(double radius) {
//    return pi * radius * radius;
    return pi * pow(radius,2);
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
    double height {}, radius {};
    cout << "\nEnter the radius: ";
    cin >> radius;
    
    cout << "Enter the height: ";
    cin >> height;

    cout << "The volum of a cylinder with radius " << radius << " and height " << height << " is " << calc_volume_cylinder(radius, height) << endl;
}