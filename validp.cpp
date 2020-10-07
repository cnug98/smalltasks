#include <iostream>
#include <stack>
#include <string>
using namespace std;
void valid_p (string input)
{
 stack <char> str; //set up a stack for the given string
 int length = input.length();
 char top;
 for(int i = 0; i< length; i++){ //pass through the string
   if(input[i] == '(' || input[i] == '{' || input[i] == '['){ //check for left bracket
     str.push(input[i]);
   }
   else {
     if(str.empty()){ //if a right bracket is missing by the end of the string, the set is invalid
       cout<<input<<" contains invalid parentheses."<<endl;
       return;
     }
      else{
        top = str.top(); //otherwise check for right bracket

        if(input[i] == ')' && top == '(' || input[i] == '}' && top == '{' || input[i] == ']' && top == '[') {
            str.pop();
        }
        else{ //any other character returns false
            cout<<input<<" contains invalid parentheses."<<endl;
            return;
        }
     }
   }
 }
 if (str.empty()){ //if the stack is empty at the end of the loop, the set is valid
   cout<<input<<" contains valid parentheses."<<endl;
 }
 else{
   cout<<input<<" contains invalid parentheses."<<endl;
 }
}
int main() { //standard input procedure
    string input;
    cout<<"Please input a string with a set of parentheses: "<<endl;
    cin>>input;
    valid_p(input);
    return 0;
}
