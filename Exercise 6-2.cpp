#include <iostream>

using namespace std;

bool isVowel(char vowel);

bool isVowel(char vowel)
{
    if ((vowel == 'A') || (vowel == 'E')  || (vowel == 'I')  || (vowel == 'O')  || (vowel == 'U') ||(vowel == 'a') || (vowel == 'e')  || (vowel == 'i')  || (vowel == 'o')  || (vowel == 'u'))
    return true;
    else
    return false;
}

int main() {
    char alphabet;
    cout<<"Enter an alpabet: ";
    cin>>alphabet;


    const bool is_it_vowel = isVowel(alphabet);

    cout<<alphabet<<" is a vowel: "<<is_it_vowel;

    return 0;
}