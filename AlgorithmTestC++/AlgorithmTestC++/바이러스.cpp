/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <vector>
using namespace std;

#define MAX 102

vector<int> graph[MAX];
int flag[MAX];
int virus_cnt;

void dfs(int start){
	flag[start] = 1;
	for (int i = 0; i < graph[start].size(); i++){
		if (!flag[graph[start][i]]){
			virus_cnt++;
			dfs(graph[start][i]);
		}
	}
}


int main(){
	int N, M, S, E;

	scanf("%d %d", &N, &M);
	for (int i = 0; i < M; i++){
		scanf("%d %d", &S, &E);
		graph[S].push_back(E);
		graph[E].push_back(S);
	}
	dfs(1);
	printf("%d", virus_cnt++);
}*/