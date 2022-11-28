/*#include <string>
#include <vector>
using namespace std;

string solution(string number, int k) {
	string answer = "";
	int num_len = number.length();
	int ans_len = num_len - k;
	int strt_idx = 0;

	for (int i = 0; i < ans_len; i++){
		char tmp = number[strt_idx++];
		for (int j = strt_idx; j < num_len - ans_len + i + 1; j++){
			if (number[j] > tmp){
				tmp = number[j];
				strt_idx = j + 1;
			}
		}
		answer += tmp;
	}
	return answer;
}*/

/* 시간 초과
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string answer = "";

void backtrack(string number, int k, int cnt, int start, string value){
	if (k == cnt && answer < value) answer = value;
	else{
		for (int i = start; i < number.length(); i++){
			backtrack(number, k, cnt + 1, i + 1, value + number[i]);		
		}
	}
}

string solution(string number, int k) {
	backtrack(number, number.length() - k, 0, 0, "");
	return answer;
}*/