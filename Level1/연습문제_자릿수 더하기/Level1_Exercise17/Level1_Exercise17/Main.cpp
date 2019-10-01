#include "Main.h"

/*
�ڸ��� ���ϱ�

���� ����
�ڿ��� N�� �־�����, N�� �� �ڸ����� ���� ���ؼ� return �ϴ� solution �Լ��� ����� �ּ���.
������� N = 123�̸� 1 + 2 + 3 = 6�� return �ϸ� �˴ϴ�.

���ѻ���
N�� ���� : 100,000,000 ������ �ڿ���

	����� ��

	N		answer
	123		6
	987		24

����� �� ����
����� �� #1
������ ���ÿ� �����ϴ�.

����� �� #2
9 + 8 + 7 = 24�̹Ƿ� 24�� return �ϸ� �˴ϴ�.

*/

#include <iostream>

using namespace std;
int solution(int n)
{
	int answer = 0;

	while (n)
	{
		answer += n % 10;
		n /= 10;
	}
	
	return answer;
}

int main(void)
{

	solution(123);

	return 0;
}