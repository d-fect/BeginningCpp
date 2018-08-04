// Section 10
// Challenge - 
// Substitution Cipher

/*
A simple and very old method of sending secret messages is the substitution cipher.
You might have used this cipher with your friends when you were a kid.
Basically, each letter of the alphabet gets replaced by another letter of the alphabet.
For example, every 'a' get replaced with an 'X', and every 'b' gets replaced with a 'Z', etc.

Write a program thats ask a user to enter a secret message.

Encrypt this message using the substitution cipher and display the encrypted message.
Then decryped the encrypted message back to the original message.

You may use the 2 strings below for  your subsitition.
For example, to encrypt you can replace the character at position n in alphabet 
with the character at position n in key.

To decrypt you can replace the character at position n in key
with the character at position n in alphabet.

Have fun! And make the cipher stronger if you wish!
Currently the cipher only substitutes letters - you could easily add digits, puncuation, whitespace and so
forth. Also, currently the cipher always substitues a lowercase letter with an uppercase letter and vice-versa.
This could also be improved.

Remember, the less code you write the less code you have to test!
Reuse existing functionality in libraries and in the std::string class!
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890!'?, ."};
    string key  {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr2580963147, !.'?"};
    
    string clear_text {};
    string cypher_text {};
    size_t position {};
    
    cout << "Enter string to encrypt: ";
    getline(cin, clear_text);
    
    cout << "\nEncrypting message..." << endl;
    cypher_text = "";
    for(char c: clear_text) {
        position = alphabet.find(c);
        if (position != string::npos)
            cypher_text.push_back(key.at(position));
        else
            cypher_text.push_back(c);
    }
    cout << "\nEncrypted message: " << cypher_text << endl;
    
    cout << "\nDecrypting message..." << endl;
    clear_text = "";
    for(char c: cypher_text) {
        position = key.find(c);
        if (position != string::npos)
            clear_text.push_back(alphabet.at(position));
        else
            clear_text.push_back(c);
    }
    cout << "\nDecrypted message: " << clear_text << endl;
    
    cout << endl;
    return 0;
}

