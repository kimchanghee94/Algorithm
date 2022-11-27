/*#include <string>
#include <string.h>
#include <vector>
#include <algorithm>
using namespace std;
#define MAX 32
int flag[MAX];
int solution(int n, vector<int> lost, vector<int> reserve) {
	int answer = 0;
	for (int i = 1; i <= n; i++) flag[i] = 1;
	for (int i = 0; i < reserve.size(); i++) flag[reserve[i]]++;
	for (int i = 0; i < lost.size(); i++) flag[lost[i]]--;
	
	//순차적으로 찾지 않을 경우 최대값을 구하지 못할 수 있다ㅠㅠ
	sort(lost.begin(), lost.end());
	for (int i = 0; i < lost.size(); i++){
		if (flag[lost[i]] == 0){
			if (flag[lost[i] - 1] == 2) flag[lost[i] - 1]--, flag[lost[i]]++;
			else if (flag[lost[i] + 1] == 2) flag[lost[i] + 1]--, flag[lost[i]]++;
		}
	}
	for (int i = 1; i <= n; i++) if (flag[i]) answer++;
	return answer;
}*/