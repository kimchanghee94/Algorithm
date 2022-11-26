/*#include <string>
#include <vector>
#include <stack>
using namespace std;*/

//2중 포문으로 해결(시간복잡도 해결 못해줄 듯...)
/*vector<int> solution(vector<int> prices) {
	vector<int> answer;

	for (int i = 0; i < prices.size() - 1; i++){
		int first = prices[i];
		int chk = 0;
		for (int j = i + 1; j < prices.size(); j++){
			int next = prices[j];
			if (first > next){
				answer.push_back(j - i);
				chk = 1;
				break;
			}
		}
		if (!chk) answer.push_back(prices.size() - 1 - i);
	}
	answer.push_back(0);
	return answer;
}*/


//stack으로 해본다면...
/*vector<int> solution(vector<int> prices) {
	vector<int> answer(prices.size());
	stack<int> s;
	int size = prices.size();

	for (int i = 0; i < size; i++){
		int first = prices[i];
		while (!s.empty() && prices[s.top()] > first){
			answer[s.top()] = i - s.top();
			s.pop();
		}
		s.push(i);
	}

	while (!s.empty()){
		answer[s.top()] = size - 1 - s.top();
		s.pop();
	}
	return answer;
}*/