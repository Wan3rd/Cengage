#include <iostream>
#include <string>

using namespace std;

void Count_vowel(string sentence);

void Count_vowel(string sentence)
{
    int num = 0;
    for (char character : sentence)
    {
        if (isalpha(character))
        {
            if ((character == 'A') || (character == 'E')  || (character == 'I')  || (character == 'O')  || (character == 'U') ||(character == 'a') || (character == 'e')  || (character == 'i')  || (character == 'o')  || (character == 'u'))
            {
                num++;
            }
        }
    }

    cout<<num<<" vowels in this sentence.";
}

int main() 
{
    string sentence;
    cout<<"Enter a sentence: ";
    getline(cin, sentence);

    Count_vowel(sentence);
    return 0;
}