/*#include <string>
#include <vector>
using namespace std;

#define MAX 10005

int fin, flag[MAX];

vector<vector<string>> bubblesort(vector<vector<string>> tickets){
	for (int i = 0; i < tickets.size(); i++){
		for (int j = 0; j < tickets.size() - i - 1; j++){
			if (tickets[j][1].compare(tickets[j + 1][1]) > 0){
				vector<string> tmp = tickets[j];
				tickets[j] = tickets[j + 1];
				tickets[j + 1] = tmp;
			}
		}
	}
	return tickets;
}

vector<string> dfs(vector<vector<string>> tickets, vector<string> answer, int cur, int count){
	if (count == tickets.size()){
		answer.push_back(tickets[cur][0]);
		answer.push_back(tickets[cur][1]);
		fin = 1;
		return answer;
	}
	else {
		flag[cur] = 1;
		answer.push_back(tickets[cur][0]);
		for (int i = 0; i < tickets.size() && !fin; i++)
		if (!tickets[cur][1].compare(tickets[i][0]) && !flag[i])
			answer = dfs(tickets, answer, i, count + 1);
		if (!fin) answer.pop_back(), flag[cur] = 0;
		return answer;
	}
}

vector<string> solution(vector<vector<string>> tickets) {
	vector<string> answer;
	tickets = bubblesort(tickets);
	for (int i = 0; i < tickets.size() && !fin; i++)
	if (!tickets[i][0].compare("ICN")) answer = dfs(tickets, answer, i, 1);
	return answer;
}*/