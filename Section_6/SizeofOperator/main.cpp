#include <iostream>
#include <climits>
#include <cfloat>

using namespace std;

int main() {
    cout << "===============================\n";
    cout << "sizeof information of types\n";
    cout << "===============================\n\n";
    
    cout << "integers\n";
    cout << "===============================\n";
    cout << "char: " << sizeof(char) << " bytes.\n";
    cout << "int: " << sizeof(int) << " bytes.\n";
    cout << "unsigned int: " << sizeof(unsigned int) << " bytes.\n";
    cout << "short: " << sizeof(short) << " bytes.\n";
    cout << "long: " << sizeof(long) << " bytes.\n";
    cout << "long long: " << sizeof(long long) << " bytes.\n" << endl;
    
    cout << "floats\n";
    cout << "===============================\n";

    cout << "float: " << sizeof(float) << " bytes.\n";
    cout << "double: " << sizeof(double) << " bytes.\n";
    cout << "long double: " << sizeof(long double) << " bytes.\n" << endl;
    
    cout << "===============================\n";
    cout << "Information from <climits>\n";
    cout << "===============================\n\n";
    
    cout << "Minimum values:\n";
    cout << "===============================\n";
    cout << "char: " << CHAR_MIN << endl;
    cout << "int: " << INT_MIN << endl;
    cout << "short: " << SHRT_MIN << endl;
    cout << "long: " << LONG_MIN << endl;
    cout << "longlong: " << LLONG_MIN << endl << endl;
    
    cout << "Maximum values:\n";
    cout << "===============================\n";
    cout << "char: " << CHAR_MAX << endl;
    cout << "int: " << INT_MAX << endl;
    cout << "short: " << SHRT_MAX << endl;
    cout << "long: " << LONG_MAX << endl;
    cout << "longlong: " << LLONG_MAX << endl << endl;

    cout << "===============================\n";
    cout << "Information from <cfloat>\n";
    cout << "===============================\n\n";
    
    cout << "Minimum values:\n";
    cout << "===============================\n";
    cout << "float: " << FLT_MIN << endl;
    cout << "double: " << DBL_MIN << endl;
    cout << "long double: " << LDBL_MIN << endl << endl;
    
    cout << "Maximum values:\n";
    cout << "===============================\n";
    cout << "float: " << FLT_MAX << endl;
    cout << "double: " << DBL_MAX << endl;
    cout << "long double: " << LDBL_MAX << endl << endl;

    cout << "===============================\n";
    cout << "sizeof information of variables\n";
    cout << "===============================\n\n";
    
    cout << "sizeof using variable names\n";
    cout << "===============================\n";
    int age {21};
    cout << "age is " << sizeof(age) << " bytes.\n";
    cout << "age is " << sizeof age << " bytes.\n";    // sizeof on variables can omit ()
    
    double wage {22.4};
    cout << "wage is " << sizeof(wage) << " bytes.\n";
    cout << "wage is " << sizeof wage << " bytes.\n";    // sizeof on variables can omit ()
    
    cout << endl;
    return 0;
}