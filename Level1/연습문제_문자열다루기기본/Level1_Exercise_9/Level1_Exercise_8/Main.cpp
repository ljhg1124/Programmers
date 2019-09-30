#include "Main.h"

/*
���ڿ� �ٷ�� �⺻

���� ����
���ڿ� s�� ���̰� 4 Ȥ�� 6�̰�, ���ڷθ� �������ִ��� Ȯ�����ִ� �Լ�, solution�� �ϼ��ϼ���. ���� ��� s�� a234�̸� False�� �����ϰ� 1234��� True�� �����ϸ� �˴ϴ�.

���� ����
s�� ���� 1 �̻�, ���� 8 ������ ���ڿ��Դϴ�.

����� ��
s		return
a234	false
1234	true
*/

#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
	int len = s.length();

	// ���� ����
	if (!(len == 4 || len == 6)) return false;

	for (auto alp : s)
	{
		if (!(alp >= '0' && alp <= '9')) return false;
	}

	return true;
}

int main(void)
{

	string s = { "1234" };

	solution(s);

	return 0;
}
