/*#include <string>
#include <vector>
#include <queue>
#include <functional>
using namespace std;

vector<int> solution(vector<string> operations) {
	vector<int> answer;
	priority_queue<int, vector<int>, greater<int>> gpq;
	priority_queue<int, vector<int>, less<int>> lpq;
	int cnt = 0;

	for (int i = 0; i < operations.size(); i++){
		if (operations[i][0] == 'I'){
			int num = stoi(operations[i].substr(2));
			gpq.push(num);
			lpq.push(num);
			cnt++;
		}
		else if (!operations[i].compare("D 1") && cnt){
			lpq.pop();
			cnt--;
		}
		else if (!operations[i].compare("D -1") && cnt){
			gpq.pop();
			cnt--;
		}
		if (!cnt){
			while (!lpq.empty()) lpq.pop();
			while (!gpq.empty()) gpq.pop();
		}
	}

	if (cnt) answer.push_back(lpq.top()), answer.push_back(gpq.top());
	else answer.push_back(0), answer.push_back(0);
	return answer;
}*/