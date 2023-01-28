#include <iostream>
#include <string.h>
#include <cmath>
#include<algorithm>
#include<vector>

using namespace std;
vector<pair<int, int>> xy;

int main()
{
	int num;
	int x, y;
	std::cin >> num;
	for (int i = 0; i < num; i++)
	{
		std::cin >> x >> y;
		xy.push_back({ y ,x });
	}

	sort(xy.begin(), xy.end());

	for (int i = 0; i < num; i++)
	{
		std::cout << xy[i].second << " " << xy[i].first << '\n';
	}
}