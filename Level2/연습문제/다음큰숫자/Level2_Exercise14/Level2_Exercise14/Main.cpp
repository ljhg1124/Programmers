#include "Main.h"
/*

���� ū ����
���� ����
�ڿ��� n�� �־����� ��, n�� ���� ū ���ڴ� ������ ���� ���� �մϴ�.

���� 1. n�� ���� ū ���ڴ� n���� ū �ڿ��� �Դϴ�.
���� 2. n�� ���� ū ���ڿ� n�� 2������ ��ȯ���� �� 1�� ������ �����ϴ�.
���� 3. n�� ���� ū ���ڴ� ���� 1, 2�� �����ϴ� �� �� ���� ���� �� �Դϴ�.
���� �� 78(1001110)�� ���� ū ���ڴ� 83(1010011)�Դϴ�.

�ڿ��� n�� �Ű������� �־��� ��, n�� ���� ū ���ڸ� return �ϴ� solution �Լ��� �ϼ����ּ���.

���� ����
n�� 1,000,000 ������ �ڿ��� �Դϴ�.

����� ��
n		result
78		83
15		23

����� �� ����

����� ��#1
���� ���ÿ� �����ϴ�.

����� ��#2
15(1111)�� ���� ū ���ڴ� 23(10111)�Դϴ�.

*/

#include <string>
#include <vector>

using namespace std;

int OneCount(int num)
{
	int count = 0;
	
	while (num)
	{
		if (num % 2 == 1) count++;

		num /= 2;
	}

	return count;
}

int solution(int n) 
{
	int answer = 0;
	int count = OneCount(n);

	while (true)
	{
		n++;
		if (count == OneCount(n))
		{
			answer = n;
			break;
		}
	}

	return answer;
}

int main(void)
{
	solution(78);

	return 0;
}