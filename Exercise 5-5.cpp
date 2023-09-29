    /*The program outputs how many numbers are multiples of 3 
    and how many numbers are multiples of 5 between the two integers (inclusive).*/

#include <iostream>

using namespace std;

int main() {
    int num1, num2;
    int Multiples_of_3 = 0;
    int Multiples_of_5 = 0;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    if (num1 > num2) {
        swap(num1, num2);
    }

    for (int i = num1; i <= num2; ++i) {
        if (i % 3 == 0) {
            Multiples_of_3++;
        }

        if (i % 5 == 0) {
            Multiples_of_5++;
        }
    }

    cout <<Multiples_of_3 << endl;
    cout <<Multiples_of_5 << endl;

    return 0;
}