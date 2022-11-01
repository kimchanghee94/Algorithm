/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <algorithm>
#include <string.h>
#include <vector>
#include <queue>
using namespace std;

#define MAX 1001

queue<int> q;
vector<int> v[MAX];
bool flag[MAX];

void dfs(int start){
	printf("%d ", start);
	flag[start] = 1;
	for (int i = 0; i < v[start].size(); i++){
		if (!flag[v[start][i]]) dfs(v[start][i]);
	}
}

void bfs(int start){
	q.push(start);
	flag[start] = 1;

	while (!q.empty()){
		int fq = q.front();
		q.pop();
		printf("%d ", fq);
		for (int i = 0; i < v[fq].size(); i++){
			int nq = v[fq][i];
			if (!flag[nq]){
				q.push(nq);
				flag[nq] = 1;
			}
		}
	}
}

int main(){
	int N, M, V;
	int S, E;

	scanf("%d %d %d", &N, &M, &V);
	for (int i = 0; i < M; i++){
		scanf("%d %d", &S, &E);
		v[S].push_back(E), v[E].push_back(S);
	}
	for (int i = 0; i < MAX; i++) sort(v[i].begin(), v[i].end());
	dfs(V); puts(""); 
	memset(flag, 0, sizeof(flag));
	bfs(V);
}*/