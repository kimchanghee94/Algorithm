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
	//00000�� ���� ���ڿ� ���� ó���� ���� ���� ���� �б� �߰�
	if (!tmp[0].compare("0")) return "0";
	for (int i = 0; i < tmp.size(); i++) answer += tmp[i];
	return answer;
}*/