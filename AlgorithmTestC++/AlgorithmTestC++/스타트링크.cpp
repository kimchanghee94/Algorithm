/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <queue>
using namespace std;

#define MAX 1000005

queue<int> q;
int graph[MAX];
int F, S, G, U, D;

void bfs(){
	q.push(S);
	graph[S] = 1;

	while (!q.empty()){
		int fi = q.front();
		q.pop();

		if (fi == G){
			while (!q.empty()) q.pop();
			printf("%d", graph[fi] - 1);
			return;
		}

		for (int d = 0; d < 2; d++){
			int ni = (d == 0) ? fi + U : fi - D;
			if (ni > 0 && ni <= F && !graph[ni]) {
				graph[ni] = graph[fi] + 1;
				q.push(ni);
			}
		}
	}
	printf("use the stairs");
}

int main(){
	scanf("%d %d %d %d %d", &F, &S, &G, &U, &D);
	bfs();
}*/