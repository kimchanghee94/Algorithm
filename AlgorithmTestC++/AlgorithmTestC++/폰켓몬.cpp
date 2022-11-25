/*#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int solution(vector<int> nums)
{
	map<int, int> m;
	for (auto n : nums)	m[n]++;
	return min(m.size(), nums.size() / 2);
}*/