/*#include <string>
#include <vector>
using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
	vector<int> answer;
	int chk_cnt = 0;

	while (!progresses.empty()){

		if (progresses[0] < 100){
			if (chk_cnt > 0) {
				answer.push_back(chk_cnt);
				chk_cnt = 0;
			}

			int	remain = (100 - progresses[0]) % speeds[0] ? (100 - progresses[0]) / speeds[0] + 1
				: (100 - progresses[0]) / speeds[0];

			for (int j = 0; j < progresses.size(); j++){
				progresses[j] += (speeds[j] * remain);
			}
		}
		else{
			chk_cnt++;
			progresses.erase(progresses.begin());
			speeds.erase(speeds.begin());
		}
	}
	answer.push_back(chk_cnt);

	return answer;
}*/