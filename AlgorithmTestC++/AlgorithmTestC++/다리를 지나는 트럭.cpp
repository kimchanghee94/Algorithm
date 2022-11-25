/*#include <string>
#include <vector>
#include <queue>
using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
	int answer = 0;
	int cur_idx = 0, cur_weight = 0, exit_truck = 0;
	queue<int> q;
	
	while (1){
		//트럭이 다리를 빠져나간다.
		if (q.size() == bridge_length){
			if (q.front() > 0) exit_truck++;
			cur_weight -= q.front();
			q.pop();
		}
		answer++;

		if (exit_truck == truck_weights.size()) break;

		//트럭이 다리위로 올라 갈 수 있는지 확인한다.
		if (truck_weights[cur_idx] + cur_weight <= weight){
			cur_weight += truck_weights[cur_idx];
			q.push(truck_weights[cur_idx++]);
		}
		else q.push(0);

		//마지막 트럭일 경우
		if (cur_idx == truck_weights.size()){
			answer += bridge_length;;
			break;
		}
	}
	return answer;
}*/