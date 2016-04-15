// Joe Opseth
// CS 237, Spring 2016
// Lab 8
// 14 April 2016
#include <iostream>
#include <list>
#include <stack>
#include <string>
using namespace std;

void pause_237(bool have_newline);
bool is_balanced(string input);

int main()
{

	cout << "Enter a string to check for balanced parentheses:" << endl;
	string input_str;
	cin >> input_str;
	cout << "String is ..." << endl;
	if (is_balanced(input_str)) {
		cout << "balanced" << endl;
	}
	else {
		cout << "unbalanced" << endl;
	}
	cout << endl;

	int input;
	string bad_input;
	list<int> numbers;

	do {
		cout << "Enter an integer (0 to stop): ";
		cin >> input;
		if(cin.fail()) {
			cin.clear();
			getline(cin, bad_input);
			
			cout << "That's not an integer!!!" << endl;
		} else if(input != 0) {
			numbers.push_back(input);
		} 
	} while(input != 0);

	list<int>::iterator i;
	for(i = numbers.begin(); i != numbers.end(); i++) {
		cout << " " << *i;
	}
	cout << endl;

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
		}
		else if (this_char == ')') {
			if (chars.empty() || chars.top() != '(') {
				return false;
			}
			else {
				chars.pop();
			}			
		}
		else if (this_char == ']') {
			if (chars.empty() || chars.top() != '[') {
				return false;
			}
			else {
				chars.pop();
			} 
		}
	}
	return (chars.empty());
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
