#include "Main.h"

/*

�̻��� ���� �����

���� ����
���ڿ� s�� �� �� �̻��� �ܾ�� �����Ǿ� �ֽ��ϴ�. �� �ܾ�� �ϳ� �̻��� ���鹮�ڷ� ���еǾ� �ֽ��ϴ�. �� �ܾ��� ¦����° ���ĺ��� �빮�ڷ�, Ȧ����° ���ĺ��� �ҹ��ڷ� �ٲ� ���ڿ��� �����ϴ� �Լ�, solution�� �ϼ��ϼ���.

���� ����
���ڿ� ��ü�� ¦/Ȧ�� �ε����� �ƴ϶�, �ܾ�(������ ����)���� ¦/Ȧ�� �ε����� �Ǵ��ؾ��մϴ�.
ù ��° ���ڴ� 0��° �ε����� ���� ¦����° ���ĺ����� ó���ؾ� �մϴ�.

����� ��
s					return
try hello world		TrY HeLlO WoRlD

����� �� ����
try hello world�� �� �ܾ� try, hello, world�� �����Ǿ� �ֽ��ϴ�. �� �ܾ��� ¦����° ���ڸ� �빮�ڷ�, Ȧ����° ���ڸ� �ҹ��ڷ� �ٲٸ� TrY, HeLlO, WoRlD�Դϴ�. ���� TrY HeLlO WoRlD �� �����մϴ�.

*/
#include <stdio.h>
#include <string>
#include <vector>

using namespace std;

// toupper : �빮�ڷ� ����
// tolower : �ҹ��ڷ� ����

string solution(string s) 
{
	string answer = "";
	int count = 0;

	for (auto alp : s)
	{
		// �����̸� ī��Ʈ �ʱ�ȭ.
		if (alp == ' ')
		{
			answer += " ";
			count = 0;
		}
		else
		{
			count++;
			answer += count & 1 ? toupper(alp) : tolower(alp);
		}
	}
	return answer;
}

int main(void)
{
	string s = "try hello world";

	solution(s);

	return 0;
}