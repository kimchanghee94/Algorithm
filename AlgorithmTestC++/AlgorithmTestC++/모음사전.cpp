/*#include <string>
#include <vector>
using namespace std;

#define DICTION_CNT 781

string diction = "AEIOU";
int answer, cnt;

void backtrack(string word, string start, int limit){
	cnt++;
	if (!word.compare(start)) {
		answer = cnt;
	}
	if (limit != 5){
		for (int i = 0; i < diction.size() && !answer; i++){
			backtrack(word, start + diction[i], limit + 1);
		}
	}
}

int solution(string word) {
	for (int i = diction.size() - 1; i >= 0; i--){
		string start;
		start += diction[i];
		if (start <= word){
			backtrack(word, start, 1);
			answer += (i * DICTION_CNT);
			break;
		}
	}
	return answer;
}*/