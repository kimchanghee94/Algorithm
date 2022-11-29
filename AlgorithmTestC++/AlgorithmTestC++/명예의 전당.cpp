/*#include <string>
#include <vector>
#include <queue>
#include <functional>
using namespace std;

vector<int> solution(int k, vector<int> score) {
	vector<int> answer;
	priority_queue<int, vector<int>, greater<int>> pq;
	for (auto s : score) {
		if (pq.size() == k) {
			if (pq.top() < s) {
				pq.pop();
				pq.push(s);
			}
			answer.push_back(pq.top());		
		}
		else {
			pq.push(s);
			answer.push_back(pq.top());
		}
	}
	return answer;
}*/