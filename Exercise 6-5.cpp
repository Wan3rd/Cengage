#include <iostream>
#include <cctype>
#include <cmath>
using namespace std;

// Function for white space
bool White_space(char whitespace)
{
	const unsigned char i = whitespace;
	return isspace(i);
}

// function that takes as input three numbers
bool Floor_sum(double first, double second, double third)
{
	return floor(first*second) == floor(third);
}

int main()
{
	char character_input;
	cout << "Enter a character: ";
	cin.get(character_input);
	const bool is_ws = White_space(character_input);
	if (!is_ws) cout << "The character you entered is not a whitespace character";
	else cout << "The character you entered is a whitespace character";

	//floor  
	double first_num, second_num, third_num;
	cout << "\nEnter 3 numbers: ";
	cin>>first_num;
	cin>>second_num;
	cin>>third_num;
	
	const bool floor_sum = Floor_sum(first_num, second_num,  third_num);
	if (!floor_sum) cout<<"The product of the first two numbers is not equal to the floor of the third number";
	else cout<<"The product of the first two numbers is equal to the floor of the third number";

	return 0;
}