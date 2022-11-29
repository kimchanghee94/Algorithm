/*#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<vector<int>> routes) {
	int answer = 0;
	sort(routes.begin(), routes.end());
	int comp = routes[0][1];
	
	for (auto r : routes) {
		if (comp <= r[0]) {
			answer++;
			comp = r[1];
		}
		if (comp > r[1]) comp = r[1];
	}
	return answer;
}*/