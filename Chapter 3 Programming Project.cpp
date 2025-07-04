// Chapter 3 Programming Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <random>
#include <iomanip>
using namespace std;

int main()
{
	// Program 1: Ingredient Adjuster
	float sugar = 2.75, butter = 1, flour = 1.5, cookies; //Define variables
	cout << "How many cookies do you want to make? " << "\n"; //Asks user how many cookies they want to make
	cin >> cookies;
	cookies /= 48; // 48 cookies per batch
	// Adjust the amount of ingredients based on the number of cookies
	sugar *= cookies;
	flour *= cookies;
	butter *= cookies;
	cout << "You will need: " << "\n" //Display the amount of ingredients needed
		<< sugar << " cups of sugar" << "\n"
		<< butter << " cups of butter" << "\n"
		<< flour << " cups of flour" << endl << "\n\n\n";

	//Program 2: Math Tutor 
	int rand1, rand2, answer; //Define variables
	//Creating random number generator
	std::random_device rand;
	std::mt19937 gen(rand());
	std::uniform_int_distribution<> randint(0, 100);
	//Generate number & store in variable so it can be used later to determine answer
	rand1 = randint(gen);
	rand2 = randint(gen);
	std::cout << setw(3) << rand1 << "\n" << "+" << setw(3) << rand2 << "\n" << "-----" << std::endl;//Print the two random numbers with a plus sign in between
	
	cin.get();// Wait for user input before proceeding
	answer = rand1 + rand2;//Add the two random numbers together to get the answer
	cin.get();// Wait for user input before proceeding
	std::cout << answer << "\n\n\n" << std::endl;

	//Program 3: Interest Earned
	float interestRate, principal, interest, savings, compounded;//Define variables
	//Ask user for input
	cout << "Enter the interest rate: " << "\n";
	cin >> interestRate;
	cout << "Enter the principal: " << "\n";
	cin >> principal;
	cout << "Enter the times compounded: " << "\n";
	cin >> compounded;
	//Calculate interest and savings
	interest = (principal * compounded * interestRate) - principal;
	savings = principal * (pow(1+(interestRate / compounded), compounded));
	cout << setprecision(2) << fixed;//limits numbers after the decimal to 2 digits
	//Display the results in formatted output
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
