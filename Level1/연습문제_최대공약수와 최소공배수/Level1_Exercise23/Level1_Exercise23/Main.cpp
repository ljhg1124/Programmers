#include "Main.h"

/*
�ִ������� �ּҰ����

���� ����
�� ���� �Է¹޾� �� ���� �ִ������� �ּҰ������ ��ȯ�ϴ� �Լ�, solution�� �ϼ��� ������. 
�迭�� �� �տ� �ִ�����, �״��� �ּҰ������ �־� ��ȯ�ϸ� �˴ϴ�.
���� ��� �� �� 3, 12�� �ִ������� 3, �ּҰ������ 12�̹Ƿ� solution(3, 12)�� [3, 12]�� ��ȯ�ؾ� �մϴ�.

���� ����
�� ���� 1�̻� 1000000������ �ڿ����Դϴ�.

����� ��

n	m	return
3	12	[3, 12]
2	5	[1, 10]

����� �� ����
����� �� #1
���� ����� �����ϴ�.

����� �� #2
�ڿ��� 2�� 5�� �ִ������� 1, �ּҰ������ 10�̹Ƿ� [1, 10]�� �����ؾ� �մϴ�.
*/

#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
	vector<int> answer;
	int MaxNum = n * m;

	// ū�� ��
	if (n > m) swap(n, m);

	while (1)
	{
		if (m % n == 0)
		{
			answer.push_back(n);
			answer.push_back(MaxNum / n);
			break;
		}
		else
		{
			int temp = m % n;
			m = n;
			n = temp;
		}
	}

	return answer;
}

int main(void)
{


	return 0;
}
