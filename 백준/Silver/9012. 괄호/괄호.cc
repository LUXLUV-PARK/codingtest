#include <iostream>
#include <string.h>
#include <cmath>
#include<algorithm>
#include <stack>

using namespace std;

int main()
{
	int k;
	cin >> k;

	while (k > 0) {
		k--;
		string a;
		cin >> a;
		stack<char> st;
		string answer = "YES";
		for (int i = 0; i < a.length(); i++) 
		{
			if (a[i] == '(') 
			{
				st.push(a[i]);
			}
			else if (!st.empty() && a[i] == ')' && st.top() == '(') 
			{
				st.pop();
			}
			else 
			{
				answer = "NO";
				break;
			}
		}
		if (!st.empty()) answer = "NO";

		cout << answer << endl;
	}
}