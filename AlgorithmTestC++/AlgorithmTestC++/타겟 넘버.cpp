/*
#include <string>
#include <vector>
using namespace std;

vector<int> num;
int tar, ans;
int di[2] = { 1, -1 };

void dfs(int start, int sum){
	if (start == num.size() && sum == tar) ans++;
	else if (start < num.size()){
		for (int d = 0; d<2; d++){
			int ni = num[start] * di[d];
			dfs(start + 1, sum + ni);
		}
	}
}

int solution(vector<int> numbers, int target) {
	int answer = 0;
	num = numbers;
	tar = target;
	dfs(0, 0);

	answer = ans;
	return answer;
}*/