/*#include <string>
#include <queue>
#include <vector>
using namespace std;

#define MAX 52
int flag[MAX];
queue<pair<int, string>> q;

bool valid(string fq, string dq){
	int chk = 0;
	for (int i = 0; i<fq.size(); i++) if (fq[i] != dq[i]) chk++;
	if (chk == 1) return 1;
	else return 0;
}

int bfs(string b, string t, vector<string> w){
	q.push(pair<int, string>(0, b));
	while (!q.empty()){
		int fi = q.front().first;
		string fq = q.front().second;
		q.pop();
		if (!fq.compare(t)) return flag[fi];
		for (int d = 0; d< w.size(); d++){
			if (!flag[d] && valid(fq, w[d])) {
				flag[d] = flag[fi] + 1;
				q.push(pair<int, string>(d, w[d]));
			}
		}
	}
	return 0;
}

int solution(string begin, string target, vector<string> words) {
	int answer = bfs(begin, target, words);
	return answer;
}*/