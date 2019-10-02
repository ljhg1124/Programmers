#include "Main.h"

/*
��� ���ϱ�

���� ����
������ ��� �ִ� �迭 arr�� ��հ��� return�ϴ� �Լ�, solution�� �ϼ��غ�����.

���ѻ���
arr�� ���� 1 �̻�, 100 ������ �迭�Դϴ�.
arr�� ���Ҵ� -10,000 �̻� 10,000 ������ �����Դϴ�.

����� ��
arr			return
[1,2,3,4]	2.5
[5,5]		5

*/

#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr)
{
	double answer = 0;

	// #include <numeric>  - accumulate(����, ��, 0) �迭 ���� �Լ�
	// double answer = accumulate(arr.begin(), arr.end(), 0);

	for (auto alp : arr)
	{
		answer += alp;
	}

	answer /= arr.size();

	return answer;
}

int main(void)
{


	return 0;
}
