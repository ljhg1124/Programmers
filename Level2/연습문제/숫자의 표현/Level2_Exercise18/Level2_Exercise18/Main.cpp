#include "Main.h"

/*
������ ǥ��
���� ����
Finn�� ���� ���а��ο� ���� �ֽ��ϴ�. ���� ���θ� �ϴ� Finn�� �ڿ��� n�� ������ �ڿ������ ǥ�� �ϴ� ����� ��������� ����� �˰� �Ǿ����ϴ�. 
������� 15�� ������ ���� 4������ ǥ�� �� �� �ֽ��ϴ�.

1 + 2 + 3 + 4 + 5 = 15
4 + 5 + 6 = 15
7 + 8 = 15
15 = 15
�ڿ��� n�� �Ű������� �־��� ��, ���ӵ� �ڿ������ n�� ǥ���ϴ� ����� ���� return�ϴ� solution�� �ϼ����ּ���.

���ѻ���
n�� 10,000 ������ �ڿ��� �Դϴ�.

����� ��
n		result
15		4

����� �� ����
����� ��#1
������ ���ÿ� �����ϴ�.
*/

#include <string>
#include <vector>

using namespace std;

int solution(int n) {
	int answer = 0;

	for (int i = 1; i <= n; i++)
	{
		int result = 0;
		for (int j = i; j <= n; j++)
		{
			result += j;
			
			if (result == n)
			{
				answer++;
				break;
			}
			else if (result > n)
			{
				break;
			}
		}
	}

	return answer;
}

int main(void)
{

	solution(15);

	return 0;
}