/*#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#define MAX 102
int set[MAX];

bool comp(vector<int> a, vector<int> b){
	return a[2] < b[2];
}

int getParent(int node){
	if (set[node] == node) return node;
	return set[node] = getParent(set[node]);
}

int solution(int n, vector<vector<int>> costs) {
	int answer = 0;
	sort(costs.begin(), costs.end(), comp);
	for (int i = 0; i < n; i++) set[i] = i;
	for (int i = 0; i < costs.size(); i++){
		int start = getParent(costs[i][0]);
		int end = getParent(costs[i][1]);
		int cost = costs[i][2];
		
		if (start != end){
			answer += cost;
			set[end] = start;
		}
	}
	return answer;
}*/