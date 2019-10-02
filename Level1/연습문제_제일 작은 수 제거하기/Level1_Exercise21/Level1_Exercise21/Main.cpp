#include "Main.h"

/*
���� ���� �� �����ϱ�

���� ����
������ ������ �迭, arr ���� ���� ���� ���� ������ �迭�� �����ϴ� �Լ�, solution�� �ϼ����ּ���. 
��, �����Ϸ��� �迭�� �� �迭�� ��쿣 �迭�� -1�� ä�� �����ϼ���. 
������� arr�� [4,3,2,1]�� ���� [4,3,2]�� ���� �ϰ�, [10]�� [-1]�� ���� �մϴ�.

���� ����

arr�� ���� 1 �̻��� �迭�Դϴ�.
�ε��� i, j�� ���� i �� j�̸� arr[i] �� arr[j] �Դϴ�.

����� ��

arr			return
[4,3,2,1]	[4,3,2]
[10]		[-1]

*/

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
	vector<int> answer;

	vector<int>::iterator ret = arr.begin();
	for (vector<int>::iterator it = arr.begin(); it != arr.end(); it++) {
		if (*it < *ret) ret = it;
	}
	arr.erase(ret);

	if (arr.empty())
		answer.push_back(-1);
	else
		answer = arr;

	return answer;
}

int main(void)
{
	vector<int> arr = {4, 3, 2, 1};

	solution(arr);

	return 0;
}

