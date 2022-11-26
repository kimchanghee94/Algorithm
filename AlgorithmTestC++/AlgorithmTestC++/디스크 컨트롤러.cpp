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

/* (�� Ǯ��) ��ó�� Ǯ�̺��� ������� �̷����̽� �������̽��� ����ȭ�Ǹ鼭 ��Ȯ�� �Ӹ��ӿ� ��� ������ �Ǵ� ����...
������ ���� Ǫ�� ���ۿ�...

//�켱����ť���� �켱������ �������ϴ� compare ����ü, sort�� �ݴ���
struct mycomp {
	bool operator()(pair<int, int> a, pair<int, int> b) {
		return a.second > b.second;
	}
};

int solution(vector<vector<int>> jobs) {
	int answer = 0;
	priority_queue<pair<int, int>, vector<pair<int, int>>, mycomp> pq;

	//first���� ���� �� �׸��� first������ ������ second������ ������������ ����
	sort(jobs.begin(), jobs.end());

	//ù ��û �۾� ����
	int cur_idx = 0;
	int start_time = jobs[cur_idx][0];
	int period = jobs[cur_idx][1];
	int end_time = start_time + period;
	answer += period;
	cur_idx++;

	while (cur_idx < jobs.size()){
		for (int i = cur_idx; i < jobs.size(); i++){
			//���� �۾� ���� job�� ���� ��� �켱���� Q�� ��Ƶд�.
			//��� ������ ��ġ�� �ֵ鵵 ����ؾ��Ѵ�.
			if (start_time <= jobs[i][0] && jobs[i][0] < end_time){
				pq.push(pair<int, int>(jobs[i][0], jobs[i][1]));
			}
		}

		//�ߺ� �۾��� ���� ��� �������� ��û�� ó���Ѵ�.
		if (pq.empty()){
			start_time = jobs[cur_idx][0];
			period = jobs[cur_idx][1];
			end_time = start_time + period;
			answer += period;
			cur_idx++;
		}
		//�ߺ� �۾��� �����ϴ� ���
		//pq���� ó���ð��� ���� ������ �����Ѵ�.
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