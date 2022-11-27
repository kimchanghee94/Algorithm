/*#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(string name) {
	int answer = 0;
	for (auto n : name) answer += min(n - 'A', 'Z' - n + 1);
	int len = name.length();
	int move = len - 1;
	int next;
	for (int i = 0; i < len; i++){
		next = i + 1;
		while (next < len && name[next] == 'A') next++;
		move = min(move, i + (len - next) + min(i, len - next));
	}
	answer += move;
	return answer;
}*/

//�Ʒ� ������ �ڵ�� �������̽��� ���� ����...
/*
int solution(string name) {
	int answer = 0;
	string copy;
	for (int i = 0; i < name.size(); i++) copy += "A";

	int lidx = 0, ridx = 0, lcnt = 0, rcnt = 0;
	while (1){
		if (name[lidx] != 'A'){
			//���� �̵� ������ ��������
			if (rcnt < lcnt){
				lidx = ridx;
				answer += rcnt;
				lcnt = rcnt = 0;
			}
			//���� �̵� ������ �� �����ų� ����.
			else{
				ridx = lidx;
				answer += lcnt;
				lcnt = rcnt = 0;
			}
			int aNum = name[lidx] - 'A';
			int zNum = 'Z' - name[lidx] + 1;

			answer += min(aNum, zNum);
			copy[lidx] = name[lidx];
		}

		//��Ī �������� ��� ����
		if (!copy.compare(name)) break;

		do{
			if (lidx == 0) lidx = name.size() - 1;
			else lidx--;
			lcnt++;
		} while (name[lidx] == copy[lidx]);

		do{
			if (ridx == name.size() - 1) ridx = 0;
			else ridx++;
			rcnt++;
		} while (name[ridx] == copy[ridx]);
	}
	return answer;
}
*/
/*int solution(string name) {
	int answer = 0;
	string copy;
	for (int i = 0; i < name.size(); i++) copy += "A";

	int lidx = 0, ridx = 0;
	while (1){
		//�������� ������ �� �� ���� ����
		if (name[lidx] != 'A'){
			ridx = lidx;

			int aNum = name[lidx] - 'A';
			int zNum = 'Z' - name[lidx] + 1;

			answer += min(aNum, zNum);
			copy[lidx] = name[lidx];
		}
		//�������� �������� �� �� ���� ����
		else if (name[ridx] != 'A'){
			lidx = ridx;

			int aNum = name[ridx] - 'A';
			int zNum = 'Z' - name[ridx] + 1;

			answer += min(aNum, zNum);
			copy[ridx] = name[ridx];
		}
		//��Ī �������� ��� ����
		if (!copy.compare(name)) break;

		//�·ΰ��� ��ΰ��� ���� ������ idx�� �� ������.
		if (!lidx) lidx = name.size() - 1;
		else lidx--;
		if (ridx == name.size() - 1) ridx = 0;
		else ridx++;

		//�̵��� ���� �߰�
		answer++;
	}

	return answer;
}*/