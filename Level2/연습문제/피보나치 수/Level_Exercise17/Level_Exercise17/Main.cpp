#include "Main.h"

/*

�Ǻ���ġ ��
���� ����
�Ǻ���ġ ���� F(0) = 0, F(1) = 1�� ��, 1 �̻��� n�� ���Ͽ� F(n) = F(n-1) + F(n-2) �� ����Ǵ� �� �Դϴ�.

�������

F(2) = F(0) + F(1) = 0 + 1 = 1
F(3) = F(1) + F(2) = 1 + 1 = 2
F(4) = F(2) + F(3) = 1 + 2 = 3
F(5) = F(3) + F(4) = 2 + 3 = 5
�� ���� �̾����ϴ�.

2 �̻��� n�� �ԷµǾ��� ��, n��° �Ǻ���ġ ���� 1234567���� ���� �������� �����ϴ� �Լ�, solution�� �ϼ��� �ּ���.

���� ����
* n�� 1�̻�, 100000������ �ڿ����Դϴ�.

����� ��

n	return
3	2
5	5

����� �� ����
�Ǻ���ġ���� 0��°���� 0, 1, 1, 2, 3, 5, ... �� ���� �̾����ϴ�.

*/

#include <string>
#include <vector>

using namespace std;

const int namuzi = 1234567;

int solution(int n) {
	int answer = 0;
	int fibo[100000] = { 0, 1, };

	for (int lp = 2; lp <= n; lp++)
	{
		fibo[lp] = ( fibo[lp - 1]% namuzi + fibo[lp - 2]% namuzi ) % namuzi;
	}
	answer = fibo[n] % namuzi;

	return answer;
}

int main(void)
{
	solution(3);

	return 0;
}