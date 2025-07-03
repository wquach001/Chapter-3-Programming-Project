// Chapter 3 Programming Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <random>
#include <iomanip>
using namespace std;

int main()
{
	float sugar = 2.75, butter = 1, flour = 1.5, cookies;
	cout << "How many cookies do you want to make? " << "\n";
	cin >> cookies;
	cookies /= 48; // 48 cookies per batch
	sugar *= cookies;
	flour *= cookies;
	butter *= cookies;
	cout << "You will need: " << "\n"
		<< sugar << " cups of sugar" << "\n"
		<< butter << " cups of butter" << "\n"
		<< flour << " cups of flour" << endl << "\n\n\n";

	int rand1, rand2, answer;
	std::random_device rand;
	std::mt19937 gen(rand());
	std::uniform_int_distribution<> randint(0, 100);
	rand1 = randint(gen);
	rand2 = randint(gen);
	std::cout << setw(3) << rand1 << "\n" << "+" << setw(3) << rand2 << "\n" << "-----" << std::endl;
	
	cin.get();// Wait for user input before proceeding
	answer = rand1 + rand2;
	cin.get();// Wait for user input before proceeding
	std::cout << answer << "\n\n\n" << std::endl;


	float interestRate, principal, interest, savings, compounded;
	cout << "Enter the interest rate: " << "\n";
	cin >> interestRate;
	cout << "Enter the principal: " << "\n";
	cin >> principal;
	cout << "Enter the times compounded: " << "\n";
	cin >> compounded;
	interest = (principal * compounded * interestRate) - principal;
	savings = principal * (pow(1+(interestRate / compounded), compounded));
	cout << setprecision(2) << fixed;
	cout << "Interest Rate: " << setw(20) << std::right << interestRate << "%" << "\n";
	cout << "Times Compounded" << setprecision(0) << fixed << setw(20) << std::right << compounded << "\n";
	cout << "Principal: " << setprecision(2) << fixed << setw(20) << std::right << "$" << principal << "\n";
	cout << "Interest: " << setw(20) << std::right << "$" << interest << "\n";
	cout << "Amount in Savings: " << setw(12) << std::right << "$" << savings << "\n";
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
