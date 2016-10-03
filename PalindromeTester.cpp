#include <iostream>
#include <string>
#include "Stack.h"
#include "Queue.h"
#include <ctype.h>
#include <fstream>

using namespace std;

int main()
{
	string palindrome, Palindrome;
	char qletter, sletter, ptester;
	Queue q;
	Stack s;

		cout << "Enter a line to see if it is a Palindrome: ";
		getline(cin, palindrome);
		Palindrome = palindrome;
		for(int i = 0; i < Palindrome.length(); i++)
		{
			if(isalpha(Palindrome[i]))
			{
				ptester = tolower(Palindrome[i]);
				q.addQ(ptester);
				s.push(ptester);  
			}
		}

		while(!q.empty() && !s.empty())
		{
			qletter = q.front();
			sletter = s.top();
			if(qletter != sletter || sletter != qletter)
			{
				cout << "Sorry, <" << Palindrome << "> is not a palindrome" << endl;
				break;
			}
			else
			{
				q.removeQueue();
				s.pop();
			}
		}

		if(q.empty() && s.empty())
		{
			cout << "Congradulations, <" << Palindrome << "> is a Palindrome!" << endl;
		}

	return 0;
}