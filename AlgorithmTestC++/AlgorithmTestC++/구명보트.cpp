/*#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> people, int limit) {
	int answer = 0;
	int right = people.size() - 1;
	sort(people.begin(), people.end());
	for (int i = 0; i <= right; right--){
		if (people[i] + people[right] <= limit) i++;
		answer++;
	}
	return answer;
}*/


/* 또 시간 초과...
#include <string>
#include <vector>
#include <functional>
#include <algorithm>
using namespace std;

int solution(vector<int> people, int limit) {
	int answer = 0;
	int fir_tot_people = people.size();
	sort(people.begin(), people.end(), greater<>());

	while (fir_tot_people > 0){
		int tmp_limit = limit;
		for (int i = 0, two_chk = 0; i < people.size() && two_chk < 2; i++){
			if (tmp_limit >= people[i]){
				tmp_limit -= people[i];
				fir_tot_people--;
				two_chk++;

				if (tmp_limit < 40) break;
			}
		}
		answer++;
	}
	return answer;
}*/