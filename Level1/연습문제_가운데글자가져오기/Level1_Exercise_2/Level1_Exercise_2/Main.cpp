#include "Main.h"

/*

��� ���� ��������

���� ����
�ܾ� s�� ��� ���ڸ� ��ȯ�ϴ� �Լ�, solution�� ����� ������. �ܾ��� ���̰� ¦����� ��� �α��ڸ� ��ȯ�ϸ� �˴ϴ�.

���ѻ���
s�� ���̰� 1 �̻�, 100������ ��Ʈ���Դϴ�.

����� ��
s		return
abcde	c
qwer	we

*/

#include <string>
#include <vector>

using namespace std;

string solution(string s) {
	string answer = "";
	int len = s.length();

	answer = len % 2 == 0 ? s.substr(len / 2 - 1, 2) : s.substr(len / 2, 1);

	return answer;
}

int main()
{
	string s = { "asdfg" };

	solution(s);

	return 0;
}
