/*#include <string>
#include <vector>
using namespace std;

#define MAX 202
vector<int> v[MAX];
int flag[MAX];

void dfs(int start){
	flag[start] = 1;
	for (int i = 0; i<v[start].size(); i++) if (!flag[v[start][i]]) dfs(v[start][i]);
}
int solution(int n, vector<vector<int>> computers) {
	int answer = 0;
	for (int i = 0; i<n; i++) for (int j = 0; j<n; j++) if (i != j && computers[i][j]) v[i].push_back(j), v[j].push_back(i);
	for (int i = 0; i<n; i++) if (!flag[i]) answer++, dfs(i);
	return answer;
}*/