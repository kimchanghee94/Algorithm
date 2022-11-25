/*#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

bool solution(vector<string> phone_book) {
	unordered_map<string, int> m;
	for (auto p : phone_book) m[p] = 1;
	for (auto p : phone_book){
		for (int i = 0; i < p.size() - 1; i++){
			string tmp = p.substr(0, i + 1);
			if (m[tmp]) return false;
		}
	}
	return true;
}*/