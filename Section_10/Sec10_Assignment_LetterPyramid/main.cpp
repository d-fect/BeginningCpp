#include <iostream>
#include <string>

using namespace std;    // BAD PRACTICE! Don't use using!! But since I'm lazy I'll use it during this course.

int main() {
    string user_string {};
    cout << "Please enter string: ";
    getline(cin, user_string);
    
    string complete_line {};
    size_t line_number {0};
    
    for (line_number = 1; line_number <= user_string.length(); line_number++) {
        // Prepare padding
        for (size_t space_padding {0}; space_padding < user_string.length() - line_number; space_padding++)
            complete_line += " ";
        // Prepare front part of pyramid line
        for (size_t front_char {0}; front_char < line_number; front_char++)
            complete_line.push_back(user_string.at(front_char));
        // Prepare last part of pyramid line
        for (size_t back_char {line_number-1}; back_char > 0; back_char--)
            complete_line.push_back(user_string.at(back_char-1));
        
        cout << complete_line << endl;
//        complete_line.erase();    // I used this in my solution
        complete_line.clear();      // This would be the correct way to do it
    }
    
    cout << endl;
    return 0;
}