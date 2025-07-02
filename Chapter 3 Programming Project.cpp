// Chapter 3 Programming Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	float sugar = 2.75, butter = 1, flour = 1.5, cookies, c, s, b, f;
	cout << "How many cookies do you want to make? " << "\n";
	cin >> cookies;
	c = cookies / 48; // 48 cookies per batch
	s = sugar * c;
	f = flour * c;
	b = butter * c;
	cout << "You will need: " << "\n"
		<< s << " cups of sugar" << "\n"
		<< b << " cups of butter" << "\n"
		<< f << " cups of flour" << "\n";
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
