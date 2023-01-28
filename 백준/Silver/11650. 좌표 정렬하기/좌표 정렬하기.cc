#include <iostream>
#include <string.h>
#include <cmath>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	int num;
	int x, y;
    vector<pair<int, int>> xy;
	std::cin >> num;
	for (int i = 0; i < num; i++)
	{
		std::cin >> x >> y;
		xy.push_back({ x ,y });
	}

	sort(xy.begin(), xy.end());

	for (int i = 0; i < num; i++)
	{
		std::cout << xy[i].first << " " << xy[i].second << '\n';
	}
}