#include "Main.h"

/*

���� ������ �Ǻ�

���� ����
������ ���� ���� n�� ����, n�� � ���� ���� x�� �������� �ƴ��� �Ǵ��Ϸ� �մϴ�.
n�� ���� ���� x�� �����̶�� x+1�� ������ �����ϰ�, n�� ���� ���� x�� ������ �ƴ϶�� -1�� �����ϴ� �Լ��� �ϼ��ϼ���.

���� ����
n�� 1�̻�, 50000000000000 ������ ���� �����Դϴ�.

����� ��

n		return
121		144
3		-1

����� �� ����

����� ��#1
121�� ���� ���� 11�� �����̹Ƿ�, (11+1)�� ������ 144�� �����մϴ�.

����� ��#2
3�� ���� ������ ������ �ƴϹǷ�, -1�� �����մϴ�.

*/

#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(long long n) {
	long long result = sqrt(n);
	long long answer = (sqrt(n) + 1) * (sqrt(n) + 1);

	if (n != result * result) answer = -1;

	return answer;
}

// �ٸ���� Ǯ��
/*
long long solution(long long n) {
	long long answer = sqrt(n);

	return powl(answer, 2) == n ? powl(answer + 1, 2) : -1;
}
*/

int main()
{
	solution(121);
	return 0;
}