/*#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct pos {
	int idx, cnt;
};

pos v[5000001];

bool comp(pos a, pos b) {
	if (a.cnt == b.cnt) return a.idx < b.idx;
	return a.cnt > b.cnt;
}

vector<int> solution(int e, vector<int> starts) {
	vector<int> answer;

	for (int i = 1; i <= e; i++) {
		for (int j = 1; j <= e / i; j++) {
			v[i*j].idx = i * j, v[i*j].cnt++;
		}
	}
	sort(v + 1, v + e + 1, comp);
	for (int i = 0; i < starts.size(); i++) {
		for (int j = 1; j <= e; j++) {
			if (starts[i] <= v[j].idx && v[j].idx <= e) {
				answer.push_back(v[j].idx);
				break;
			}
		}
	}

	return answer;
}*/