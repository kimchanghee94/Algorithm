/*#include <string>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

#define MAX 10000002
int flag[MAX];

int solution(int k, vector<int> tangerine) {
	int answer = 0;
	vector<int> cnt_vec;
	sort(tangerine.begin(), tangerine.end());
	for (auto t : tangerine) flag[t]++;
	for (int i = 1; i <= tangerine[tangerine.size() - 1]; i++)
		if (flag[i]) cnt_vec.push_back(flag[i]);
	sort(cnt_vec.begin(), cnt_vec.end(), greater<>());
	for (int i = 0; i < cnt_vec.size(); i++) {
		k -= cnt_vec[i];
		answer++;
		if (k < 1) break;
	}
	return answer;
}*/