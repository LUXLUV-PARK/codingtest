#include <iostream>
#include <string.h>
#include <cmath>
#include<algorithm>
#include <stack>

using namespace std;

int main()
{
    int k, n, result = 0;
    stack<int> s;
    int size;
    cin >> k;
    for (int i = 0; i < k; i++) {
        cin >> n;
        if (n != 0) {
            s.push(n);
        }
        else {
            s.pop();
        }
    }
    size = s.size();
    for (int i = 0; i < size; i++) {
        result += s.top();
        s.pop();
    }
    cout << result;
}