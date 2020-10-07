#include <iostream>
using namespace std;

int totalmul (int n) { 
    int sum = 0;
    for (int i = 3; i < n; i++) { //find every number below n, we can start at 3 here since that is the smallest number that can return a value other than 0.
        if ( i % 3 == 0 || i % 5 == 0) { //if the number is divisible by 3 or 5, add it to our sum
            sum += i;
        }
    }
    return sum;
} 

int main() {
    int num;
    cout << "Enter a number to get the total sum of every multiple of 3 and 5 below it: " << endl; //standard input prompt
    cin >> num;
    if (num < 3) { //3 is the smallest number that can return a result.
        cout << "Cannot get a sum for this number." << endl;
        return 0;
    }
    int total = totalmul(num); //get the total sum and print the result.
    cout << "The sum of all multiples of 3 and 5 under " << num << " is " << total << "." << endl;

} 
