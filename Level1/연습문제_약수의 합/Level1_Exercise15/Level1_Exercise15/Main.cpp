#include "Main.h"

/*
����� ��

���� ����
�ڿ��� n�� �Է¹޾� n�� ����� ��� ���� ���� �����ϴ� �Լ�, solution�� �ϼ����ּ���.

���� ����
n�� 0 �̻� 3000������ �ڿ����Դϴ�.

����� ��

n	return
12	28
5	6

����� �� ����

����� �� #1
12�� ����� 1, 2, 3, 4, 6, 12�Դϴ�. �̸� ��� ���ϸ� 28�Դϴ�.

����� �� #2
5�� ����� 1, 5�Դϴ�. �̸� ��� ���ϸ� 6�Դϴ�.
*/

#include <string>
#include <vector>

using namespace std;

int solution(int n) 
{
	int answer = 0;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
			answer += i;
	}
	return answer;
}

int main(void)
{

	solution(12);

	return 0;
}