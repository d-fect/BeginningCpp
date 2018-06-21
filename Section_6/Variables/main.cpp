#include <iostream>

// This program will calculate the area of a room in square feet
int main() {
    std::cout << "Enter the width of the room in feet: ";
    int room_width {0};
    std::cin >> room_width;
    
    std::cout << "Enter the length of the room in feet: ";
    int room_length {0};
    std::cin >> room_length;
    
    std::cout << "The area of the room is " << room_length * room_width << " square feet." << std::endl;

    return 0;
}