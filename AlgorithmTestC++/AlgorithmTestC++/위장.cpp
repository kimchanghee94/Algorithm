/*#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

int solution(vector<vector<string>> clothes) {
	unordered_map<string, int> m;
	int answer = 1;
	for (auto c : clothes) m[c[1]]++;
	for (auto elem : m)	answer *= (elem.second + 1);
	return answer - 1;
}*/