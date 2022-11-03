/*#include <string>
#include <vector>
using namespace std;

#define MAX 10
#define PMAX 10000000

int flag[MAX], pri_flag[PMAX], answer;

void check_pri(int pri){
	int chk = 0;
	for (int i = 1; i <= pri; i++) if (!(pri%i)) chk++;
	if (chk == 2) answer++;
}

void backtrack(string numbers, string tmp, int cnt){
	if (cnt == numbers.size()) return;
	for (int i = 0; i < numbers.size(); i++){
		if (!flag[i]){
			int next = stoi(tmp + numbers[i]);
			if (!pri_flag[next]) pri_flag[next] = 1, check_pri(next);
			flag[i] = 1;
			backtrack(numbers, tmp + numbers[i], cnt + 1);
			flag[i] = 0;
		}
		backtrack(numbers, tmp, cnt + 1);
	}
}

int solution(string numbers) {
	backtrack(numbers, "", 0);
	return answer;
}

int main(){
	printf("%d\n", solution("17"));
}*/