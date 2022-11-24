/*#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
	vector<int> answer;
	for (int i = 0; i < commands.size(); i++){
		vector<int> tmp;
		int s = commands[i][0] - 1;
		int d = commands[i][1];
		int e = commands[i][2] - 1;

		tmp.resize((int)(d - s));
		copy(array.begin() + s, array.begin() + d, tmp.begin());
		sort(tmp.begin(), tmp.end());
		answer.push_back(tmp[e]);
	}
	return answer;
}*/