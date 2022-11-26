/*#include <string>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

struct mycomp {
	bool operator()(vector<int> a, vector<int> b) {
		return a[1] > b[1];
	}
};

int solution(vector<vector<int>> jobs) {
	int answer = 0, idx = 0, time = 0;
	sort(jobs.begin(), jobs.end());
	priority_queue<vector<int>, vector<vector<int>>, mycomp> pq;

	while (idx < jobs.size() || !pq.empty()){
		if (idx < jobs.size() && jobs[idx][0] <= time){
			pq.push(jobs[idx++]);
			continue;
		}
		if (!pq.empty()){
			time += pq.top()[1];
			answer += time - pq.top()[0];
			pq.pop();
		}
		else time = jobs[idx][0];
	}
	return answer / jobs.size();
}*/

/* (내 풀이) 위처럼 풀이보면 사람들은 이런케이스 저런케이스가 나열화되면서 정확히 머릿속에 어떻게 정리가 되는 거지...
문제를 많이 푸는 수밖에...

//우선순위큐에서 우선순위를 재정의하는 compare 구조체, sort와 반대임
struct mycomp {
	bool operator()(pair<int, int> a, pair<int, int> b) {
		return a.second > b.second;
	}
};

int solution(vector<vector<int>> jobs) {
	int answer = 0;
	priority_queue<pair<int, int>, vector<pair<int, int>>, mycomp> pq;

	//first값이 낮은 순 그리고 first값들이 같으면 second값들의 오름차순으로 정렬
	sort(jobs.begin(), jobs.end());

	//첫 요청 작업 시작
	int cur_idx = 0;
	int start_time = jobs[cur_idx][0];
	int period = jobs[cur_idx][1];
	int end_time = start_time + period;
	answer += period;
	cur_idx++;

	while (cur_idx < jobs.size()){
		for (int i = cur_idx; i < jobs.size(); i++){
			//현재 작업 중인 job이 있을 경우 우선순위 Q에 담아둔다.
			//담는 과정에 겹치는 애들도 고려해야한다.
			if (start_time <= jobs[i][0] && jobs[i][0] < end_time){
				pq.push(pair<int, int>(jobs[i][0], jobs[i][1]));
			}
		}

		//중복 작업이 없는 경우 먼저들어온 요청을 처리한다.
		if (pq.empty()){
			start_time = jobs[cur_idx][0];
			period = jobs[cur_idx][1];
			end_time = start_time + period;
			answer += period;
			cur_idx++;
		}
		//중복 작업이 존재하는 경우
		//pq에서 처리시간이 작은 값부터 시작한다.
		else{
			start_time = end_time;
			period = pq.top().second;
			answer += ((start_time - pq.top().first) + period);
			end_time = start_time + period;
			cur_idx++;
			pq.pop();
		}
	}
	return answer/jobs.size();
}*/