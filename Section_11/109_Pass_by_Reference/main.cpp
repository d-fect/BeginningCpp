#include <iostream>
#include <vector>

using namespace std;    // DON'T DO THIS. It's BAD practice, but I'll use it for this course

// Function Prototypes
void scale_number(int &num);
void swap (int &a, int &b);
void print(const vector<int> &v);

int main() {
    int number {1000};
    cout << number << endl;
    scale_number(number);
    cout << number << endl;
    
    int x{10}, y{20};
    cout << "x = " << x << ", and y = " << y << endl;
    swap(x,y);
    cout << "x = " << x << ", and y = " << y << endl;
    
    vector<int> data {1,2,3,4,5};
    print(data);
    
    cout << endl;
    return 0;
}

// Function Definitions
void scale_number(int &num) {
    if (num > 100)
        num = 100;
}

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void print(const vector<int> &v) {
    // v.at(0) = 200;                   // Will give error, since it's now defined as a constant
    for (auto num: v)
        cout << num << " ";
    cout << endl;
}