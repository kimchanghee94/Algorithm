/*#include <string>
#include <vector>
using namespace std;

int solution(string s) {
	int answer = 0;
	int org = 1, comp = 0, total = 0;
	char c = s[0];

	for (int i = 1; i < s.length(); i++){
		if (c == s[i])	org++;
		else comp++;

		if (org == comp) {
			total = org + comp;
			if (i + 1 != s.length()) c = s[++i], org = 1;
			answer++;
			comp = 0;
		}
	}
	if (total != s.length()) answer++;
	return answer;
}*/