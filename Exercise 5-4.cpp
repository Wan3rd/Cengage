//**********************************************************
// Program: Telephone Digits
// This is an example of a sentinel-controlled loop. This
// program converts uppercase letters to their corresponding
// telephone digits.
//**********************************************************
#include<iostream>
#include<string> 
#include<cctype>

using namespace std;

int main()
{
    char choice;
    int digit, num;
    string word, letters,Phone_Number;    
    cout<<"Enter Y/y to convert a telephone number from letters to digits."<<endl;
    cout<<"Enter any other letter to terminate the program: ";
    cin>>choice;
    choice = toupper(choice);
    cin.ignore(); // Purpose is to consume the newline character

    while (choice == 'Y')
    {
        cout << "Enter a telephone number using letters: ";
        getline(cin, word); 

        Phone_Number = "";
        int digitCount = 0;
        for (char character : word) 
        {
            if (isalpha(character))
            {
                // letters += character;
                character = toupper(character);
                switch (character) 
                {
                    case 'A': case 'B': case 'C':
                        Phone_Number += '2';
                        break;
                    case 'D': case 'E': case 'F':
                        Phone_Number += '3';
                        break;
                    case 'G': case 'H': case 'I':
                        Phone_Number += '4';
                        break;
                    case 'J': case 'K': case 'L':
                        Phone_Number += '5';
                        break;
                    case 'M': case 'N': case 'O':
                        Phone_Number += '6';
                        break;
                    case 'P': case 'Q': case 'R': case 'S':
                        Phone_Number += '7';
                        break;
                    case 'T': case 'U': case 'V':
                        Phone_Number += '8';
                        break;
                    case 'W': case 'X': case 'Y': case 'Z':
                        Phone_Number += '9';
                        break;
                }
                digitCount++;
            }
            else if (isdigit(character)) 
            {
                Phone_Number += character;
                digitCount++;
            }
            if (digitCount == 3) // Para may hypen after ng 3rd digit
            {
                Phone_Number += '-';
            }
            if (digitCount >= 8) // limits the number up to 8
            {
                break;
            }
        }
        // For Output
        cout<<"=============================================="<<endl;
        cout<<"The corresponding telephone number in digits is: "<<Phone_Number<<endl;
        letters.clear(); // Clear the letters for the next input

        cout<<"To process another telephone number, enter Y/y"<<endl;
        cout<<"Enter any other letter to terminate the program: ";
        cin>>choice;
        choice = toupper(choice);
        cin.ignore(); // Consume the newline character
    }
    return 0;
}