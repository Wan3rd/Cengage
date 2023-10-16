#include <iostream>

using namespace std;

bool isVowel(char);
int countVowels(string);
void printBool(bool);

int main()
{
    string line;
    
    cout << "Enter sentence: ";
    getline(cin,line);

    
    cout<<countVowels(line)<<" vowels in this sentence.";
    
    return 0;
}

bool isVowel(char c){                        
    switch( static_cast<char>(tolower(c)) ){
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            return true;
        default:
            return false;
    }

}

void printBool(bool a){
    if(a){
        cout << " true";
    } else {
        cout << "false";
    }
}

int countVowels(string s){
    
    int totalVowels = 0;
    
    int l = s.length();
    

    for(int i= 0; i < l; i++){
        if( isVowel(s[i]) ){
            totalVowels++;
        }
    }
    return totalVowels;
}
