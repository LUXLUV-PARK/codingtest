#include <iostream>
#include <string.h>
#include <cmath>
#include<algorithm>
#include <stack>

using namespace std;

int main()
{
	stack<int> s; 
	int N , num, result=0;           
	string command;    

	cin >> N;

	for (int i = 0; i < N; i++) 
	{
		cin >> command;

		if (command == "push") 
		{
			cin >> num;
			s.push(num);
		}

		else if (command == "pop") 
		{
			if (s.size() == 0) 
			{
				result = -1;
				cout << result << endl;
			}
			else 
			{
				result = s.top();
				cout << result << endl;
				s.pop();
			}
		}

		else if (command == "size") 
		{
			cout << s.size() << endl;
		}

		else if (command == "empty") 
		{
			if (s.size() == 0) 
			{
				result = 1;
				cout << result << endl;
			}
			else {
				result = 0;
				cout << result << endl;
			}
		}

		else if (command == "top") 
		{
			if (s.size() == 0) 
			{
				result = -1;
				cout << result << endl;
			}
			else 
			{
				result = s.top();
				cout << result << endl;
			}
		}
	}
}