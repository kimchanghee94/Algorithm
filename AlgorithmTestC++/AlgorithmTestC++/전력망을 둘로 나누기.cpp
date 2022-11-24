/*#include <string>
#include <string.h>
#include <vector>
#include <algorithm>
using namespace std;

#define MAX 102

vector<int> graph[MAX];
int flag[MAX], vcnt[3], cut_s, cut_e, sep_cnt;

void dfs(int s){
	flag[s] = 1;
	vcnt[sep_cnt]++;
	for (int i = 0; i < graph[s].size(); i++){
		int n = graph[s][i];
		if (!flag[n] && !((cut_s == s && cut_e == n) || (cut_s == n && cut_e == s))){
			dfs(n);
		}
	}
}

int backtrack(int n, int answer, vector<vector<int>> wires){
	for (int cut = 0; cut < wires.size(); cut++){
		sep_cnt = 0;
		memset(vcnt, 0, sizeof(vcnt));
		memset(flag, 0, sizeof(flag));

		for (int i = 1; i <= n; i++){
			if (!flag[i]){
				if (sep_cnt == 2) {
					sep_cnt++;
					break;
				}
				cut_s = wires[cut][0], cut_e = wires[cut][1];
				dfs(i);
				sep_cnt++;
			}
		}
		if (sep_cnt == 2){
			answer = min(answer, abs(vcnt[1] - vcnt[0]));
			if (!answer) break;
		}
	}
	return answer;
}

int solution(int n, vector<vector<int>> wires) {
	int answer = 100;

	for (int i = 0; i < wires.size(); i++){
		graph[wires[i][0]].push_back(wires[i][1]);
		graph[wires[i][1]].push_back(wires[i][0]);
	}

	return backtrack(n, answer, wires);
}*/