/*#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int backtrack(vector<vector<int>> sizes){
	for (int i = 0; i < sizes.size(); i++) {
		if (sizes[i][0] < sizes[i][1]) {
			int tmp = sizes[i][0];
			sizes[i][0] = sizes[i][1];
			sizes[i][1] = tmp;
		}
	}
	int maxW = 0, maxH = 0;
	for (int i = 0; i < sizes.size(); i++) maxW = max(maxW, sizes[i][0]), maxH = max(maxH, sizes[i][1]);
	return maxW*maxH;
}

int solution(vector<vector<int>> sizes) {
	return backtrack(sizes);
}*/