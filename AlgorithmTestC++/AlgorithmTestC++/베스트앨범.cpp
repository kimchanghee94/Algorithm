/*#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

bool comp(pair<string, int> a, pair<string, int> b){
	return a.second > b.second;
}

bool r_comp(pair<int, int> a, pair<int, int> b){
	return a.second > b.second;
}

vector<int> solution(vector<string> genres, vector<int> plays) {
	vector<int> answer;
	unordered_map<string, int> sm;
	unordered_map<string, vector<pair<int, int>>> rm;
	for (int i = 0; i < genres.size(); i++)	sm[genres[i]] += plays[i];
	vector<pair<string, int>> vm(sm.begin(), sm.end());
	sort(vm.begin(), vm.end(), comp);
	for (int i = 0; i < genres.size(); i++) rm[genres[i]].push_back(pair<int, int>(i, plays[i]));
	
	//�����ͷ� �޾Ƽ� call-by-referenced ���·� ���� ������ �ֵ��� �Ѵ�.
	//C++������ ������ ����
	for (auto &elem : rm) sort(elem.second.begin(), elem.second.end(), r_comp);

	for (auto elem : vm){
		for (int i = 0; i < 2 && i < rm[elem.first].size(); i++){
			answer.push_back(rm[elem.first][i].first);
		}
	}
	return answer;
}*/