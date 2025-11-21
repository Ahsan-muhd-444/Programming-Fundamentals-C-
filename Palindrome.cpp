#include <iostream>
using namespace std;

int main() 
{
    int num, original, reversed = 0, digit;
    
    cout << "Enter a number: ";
    cin >> num;
    
    original = num;  // Store original number
    
    while (num > 0)
	{
        digit = num % 10;            // Get last digit
        reversed = reversed * 10 + digit;  // Build reversed number
        num /= 10;                   // Remove last digit
    }
    
    if (original == reversed)
        cout << "Palindrome";
    else
        cout << "Not a palindrome";

    return 0;
}
