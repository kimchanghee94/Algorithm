/*#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(int a, int b){
	return a > b;
}

int solution(vector<int> citations) {
	int answer = 0;
	sort(citations.begin(), citations.end(), comp);

	for (int i = 0; i < citations.size(); i++){
		if (i + 1 > citations[i]) break;
		answer++;
	}

	return answer;
}*/