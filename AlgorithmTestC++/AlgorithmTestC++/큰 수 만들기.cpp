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
}