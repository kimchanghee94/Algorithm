/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <vector>
using namespace std;

#define MAX 105

vector<int> v[MAX];
int flag[MAX];
int E, cnt;

void dfs(int S){
	if (S == E) cnt = flag[S];
	else{
		for (int i = 0; i < v[S].size(); i++) {
			int nS = v[S][i];
			if (!flag[nS] && !cnt) {
				flag[nS] = flag[S] + 1;
				dfs(nS);
			}
		}
	}
}

int main(){
	int n, m, S, x, y;
	scanf("%d %d %d %d", &n, &S, &E, &m);
	for (int i = 0; i < m; i++){
		scanf("%d %d", &x, &y);
		v[x].push_back(y);
		v[y].push_back(x);
	}

	flag[S] = 1, dfs(S);
	if (cnt == 0) printf("-1");
	else printf("%d", cnt - 1);
}*/