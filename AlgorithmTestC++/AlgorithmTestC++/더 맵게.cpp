/*#include <string>
#include <functional>
#include <vector>
#include <queue>
using namespace std;

int solution(vector<int> scoville, int K) {
	int answer = 0;
	priority_queue<int, vector<int>, greater<int>> pq;
	for (auto s : scoville) pq.push(s);

	while (1){
		int first = pq.top();
		if (first >= K) break;
		pq.pop();

		if (pq.empty()){
			return -1;
		}

		int second = pq.top();
		pq.pop();

		int third = first + (second * 2);
		pq.push(third);
		
		answer++;
	}

	return answer;
}*/