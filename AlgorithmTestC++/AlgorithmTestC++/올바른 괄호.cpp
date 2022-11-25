/*#include<string>
#include <iostream>
using namespace std;

bool solution(string s)
{
	int in = 0, out = 0;
	for (int i = 0; i < s.size(); i++){
		if (s[i] == '(') in++;
		else if (s[i] == ')') out++;
		if (out > in) return false;
	}
	if (in != out) return false;
	return true;
}*/