// Your name here
// CS 237, Spring 2016
// Lab 8
// Date
#include <iostream>
#include <list>
#include <stack>
// Remember your #includes!
using namespace std;

void pause_237(bool have_newline);
bool is_balanced(string input);

int main()
{
	int input;
	string bad_input;
	list<int> numbers;

	do {
		cout << "Enter an integer: ";
		cin >> input;
		if(cin.fail()) {
			get_line(cin, bad_input);
			cin.clear();
			cout << "That's not an integer!!!";
		} else if(input != 0) {
			list.push_back(input);
		} 
	} while(input != 0);

	list<int>::iterator i;
	for(i = numbers.begin(); i != numbers.end(); i++) {
		cout << " " << *i;
	}
	cout << endl;
	
	
	





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
	stack<char> chars;
	for(int i=0; i < input.length(); i++) {
		char this_char = input[i];
		if(this_char == '(' || this_char == '[') {
			chars.push(this_char);
		} else if(this_char == ')') {
			if(stack.is_empty()) { ### TODO
				return false;
			} else if(stack
			
	}
	
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
