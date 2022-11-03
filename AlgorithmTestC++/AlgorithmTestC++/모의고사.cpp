/*#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> backtrack(vector<int> answers){
	int arr[3][11] = {
		{ 1, 2, 3, 4, 5, 0, 0, 0, 0, 0, 0 },
		{ 2, 1, 2, 3, 2, 4, 2, 5, 0, 0, 0 },
		{ 3, 3, 1, 1, 2, 2, 4, 4, 5, 5, 0 }
	};
	for (int i = 0; i < answers.size(); i++){
		if (answers[i] == arr[0][i % 5]) arr[0][10]++;
		if (answers[i] == arr[1][i % 8]) arr[1][10]++;
		if (answers[i] == arr[2][i % 10]) arr[2][10]++;
	}
	int maxChk = max(arr[0][10], max(arr[1][10], arr[2][10]));
	vector<int> answer;
	for (int i = 0; i < 3; i++) if (arr[i][10] == maxChk) answer.push_back(i + 1);
	return answer;
}

vector<int> solution(vector<int> answers) {
	return backtrack(answers);
}*/