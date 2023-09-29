#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
    int num,sum = 0,reverse = 0,digital;

    cout<<"Enter number: ";
    cin>>num;

    int digit = abs(num);

    while (digit != 0) // reverse digits
    {
        digital = digit % 10;
        reverse = reverse * 10 + digital;
        sum += digital; 
        digit /= 10;
    }

    while (reverse > 0)
    {
        int correct = reverse % 10;
        cout<<correct<<" ";
        reverse /= 10;
    }
    cout<<endl;
    cout<<sum;
}