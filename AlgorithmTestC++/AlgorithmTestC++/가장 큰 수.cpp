/*#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(string a, string b){
	return a + b > b + a;
}

string solution(vector<int> numbers) {
	string answer = "";
	vector<string> tmp;
	for (int i = 0; i < numbers.size(); i++) tmp.push_back(to_string(numbers[i]));
	sort(tmp.begin(), tmp.end(), comp);
	//00000과 같은 문자열 예외 처리를 위해 따로 조건 분기 추가
	if (!tmp[0].compare("0")) return "0";
	for (int i = 0; i < tmp.size(); i++) answer += tmp[i];
	return answer;
}*/