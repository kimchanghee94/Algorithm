/*#include <string>
#include <vector>
using namespace std;

vector<int> backtrack(int brown, int yellow){
	int total = brown + yellow;
	vector<int> ans;

	for (int w = 3; w <= (total/3); w++){
		for (int h = 3; h <= w; h++){
			if (w*h == total && (h-2)*(w-2) == yellow && (total - yellow == brown)){
				ans.push_back(w);
				ans.push_back(h);
				return ans;
			}
		}
	}
}

vector<int> solution(int brown, int yellow) {
	vector<int> answer = backtrack(brown, yellow);
	return answer;
}*/