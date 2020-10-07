#include <iostream>
#include <string>

using namespace std;

string middle(string s) {
    
    if (s.size() % 2 == 0) { //if string is even, return the middle 2 characters
        return s.substr((s.size()-1)/2, 2);
    } 
    else { //otherwise return the middle character (odd-length strings have one median)
        return s.substr(s.size()/2, 1);
    }
}

int main() {
    string input;
    cout << "Give a string: " << endl; //standard std prompt
    cin >> input;
    string str = middle(input);
    if (str.size() % 2 == 0) { // if there are two middle characters, print both separately
        cout << "The middle characters of " << input << " are " << str.front() << " and " << str.back() << "." << endl;
    }
    else { //otherwise only print the one character
        cout << "The middle character of " << input << " is " << str << "." << endl;
    }
    return 0;
}
