#include <iostream>
#include <cctype>

using namespace std;

bool isPalindrome(string str);

bool isPalindrome(string word) 
{

    string str = "";
    for (char ch : word)
    { 
        ch = tolower(ch);
        str += ch;
    }
    cout<<str<<endl;
    int length = str.length();
    for (int i = 0; i < length / 2; i++) 
    {
        if (str[i] != str[length - 1 - i]) {
            cout<< str << " is not a palindrome\n";
            return true;
        }  
    } 
    cout<< str << " is a palindrome\n";
    return false;
}

int main() {

    isPalindrome("Madam");
    isPalindrome("abBa");
    isPalindrome("22");
    isPalindrome("67876");
    isPalindrome("444244");
    isPalindrome("trYmeuemyRT");

    return 0;
}