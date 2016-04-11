// Your name here
// CS 237, Spring 2016
// Lab 8
// Date
#include <iostream>
// Remember your #includes!
using namespace std;

void pause_237(bool have_newline);
bool is_balanced(string input);

int main()
{
	// Part 1:
	// TODO: make a list of integers
	// TODO: read numbers into the list in a loop
	// TODO: traverse and print the list with an iterator.



	// Part 2:
	// TODO: implement is_balanced() function.
	// TODO: read a line of input
	// TODO: test and print whether the line is balanced.

	pause_237(true);
	return 0;
}

bool is_balanced(string input)
{
	//TODO
}

void pause_237(bool have_newline)
{
	if (have_newline) {
		// Ignore the newline after the user's previous input.
		cin.ignore(200, '\n');
	}

	// Prompt for the user to press ENTER, then wait for a newline.
	cout << endl << "Press ENTER to continue." << endl;
	cin.ignore(200, '\n');
}