#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string str);

int main()
{
    if (isPalindrome("Madam"))
            cout << "Madam" << " is a palindrome." << endl;
    else
            cout << "Madam" << " is not a palindrome." << endl;
            
    if (isPalindrome("abBa"))
            cout << "abBa" << " is a palidrome." << endl;
    else
            cout << "abBa" << " is not a palindrome." << endl;
    if (isPalindrome("22"))
            cout << "22" << " is a palindrome." << endl;
    else
        cout << "22" << " is not a palindrome," << endl;
    if (isPalindrome("67876"))
            cout << "67876" << " is a palindrome." << endl;
    else
            cout << "67876" << " is not a palindrome." << endl;
    if (isPalindrome("444244"))
            cout << "444244" << " is not a palindrome." << endl;
    else
            cout << "444244" << " is not a palindrome." << endl;
    if (isPalindrome("trYmeuemyRT"))
            cout << "trYmeuemyRT" << " is a palindrome." << endl;
    else
            cout << "trYmeuemyRT" << " is not a palindrome." << endl;
  string aStr[] = {"madam",
                   "abba", 
                   "22",
                   "67876",
                   "444244", 
                   "trymeuemyrt"};

    for (int i=0; i<static_cast<int>(sizeof(aStr)/sizeof(aStr[0])); i++) {
    
    if(isPalindrome(aStr[i]))
      cout << aStr[i] << " is a palindrome." << endl;
    else
      cout << aStr[i] << " is not a palindrome." << endl;
}

return 0;
}
bool isPalindrome(string str)
{
int length = str.length();

for (int i = 0; i < length / 2; i++){
    if (tolower(str[i]) != tolower(str[length - 1 - i]))
        return false;
}
return true;
}