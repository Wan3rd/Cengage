#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

int main()
{
    int num, sum, digit;

    cout<<"Enter a number: ";
    cin>>num;

    digit = abs(num);

    string string_num = to_string(digit); // converts digits to string

    for (char extract : string_num) 
    {
        int value = extract - '0';
        cout<<value<<" ";
        sum += value;
    }

    while (digit > 0)
    {
        digit = num % 10;
        sum += digit; 
        num /= 10;
    }

    cout<<endl;
    cout<<"The sum is "<<sum;

    return 0;
}