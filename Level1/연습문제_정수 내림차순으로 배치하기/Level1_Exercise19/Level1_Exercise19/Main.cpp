#include "Main.h"

/*
���� ������������ ��ġ�ϱ�

���� ����
�Լ� solution�� ���� n�� �Ű������� �Է¹޽��ϴ�. n�� �� �ڸ����� ū�ͺ��� ���� ������ ������ ���ο� ������ �������ּ���. ������� n�� 118372�� 873211�� �����ϸ� �˴ϴ�.

���� ����

n�� 1�̻� 8000000000 ������ �ڿ����Դϴ�.

����� ��

n		return
118372	873211

*/

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(long long n) {
	long long answer = 0;
	string num = to_string(n);

	sort(num.rbegin(), num.rend());
	answer = stoll(num);

	return answer;
}

int main(void)
{

	solution(321654987);

	return 0;
}
