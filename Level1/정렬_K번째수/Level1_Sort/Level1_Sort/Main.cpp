#include "Main.h"

/*
���� ����
�迭 array�� i��° ���ں��� j��° ���ڱ��� �ڸ��� �������� ��, k��°�� �ִ� ���� ���Ϸ� �մϴ�.

���� ��� array�� [1, 5, 2, 6, 3, 7, 4], i = 2, j = 5, k = 3�̶��

array�� 2��°���� 5��°���� �ڸ��� [5, 2, 6, 3]�Դϴ�.
1���� ���� �迭�� �����ϸ� [2, 3, 5, 6]�Դϴ�.
2���� ���� �迭�� 3��° ���ڴ� 5�Դϴ�.
�迭 array, [i, j, k]�� ���ҷ� ���� 2���� �迭 commands�� �Ű������� �־��� ��, commands�� ��� ���ҿ� ���� �ռ� ������ ������ �������� �� ���� ����� �迭�� ��� return �ϵ��� solution �Լ��� �ۼ����ּ���.

���ѻ���
array�� ���̴� 1 �̻� 100 �����Դϴ�.
array�� �� ���Ҵ� 1 �̻� 100 �����Դϴ�.
commands�� ���̴� 1 �̻� 50 �����Դϴ�.
commands�� �� ���Ҵ� ���̰� 3�Դϴ�.
����� ��
array					commands							return
[1, 5, 2, 6, 3, 7, 4]	[[2, 5, 3], [4, 4, 1], [1, 7, 3]]	[5, 6, 3]

����� �� ����
[1, 5, 2, 6, 3, 7, 4]�� 2��°���� 5��°���� �ڸ� �� �����մϴ�. [2, 3, 5, 6]�� �� ��° ���ڴ� 5�Դϴ�.
[1, 5, 2, 6, 3, 7, 4]�� 4��°���� 4��°���� �ڸ� �� �����մϴ�. [6]�� ù ��° ���ڴ� 6�Դϴ�.
[1, 5, 2, 6, 3, 7, 4]�� 1��°���� 7��°���� �ڸ��ϴ�. [1, 2, 3, 4, 5, 6, 7]�� �� ��° ���ڴ� 3�Դϴ�.


*/
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> arr = { 1, 5, 2, 6, 3, 7, 4 };
vector<vector<int>> omm = { { 2, 5, 3 }, { 4, 4, 1 }, { 1, 7, 3 } };

vector<int> solution(vector<int> array, vector<vector<int>> commands)
{
	vector<int> answer;
	// commands ũ�⸸ŭ �����ش�.
	for (auto alp : commands)
	{
		vector<int> result;

		// �ε����� 0 ���� �̹Ƿ� ���۽� -1 ����.
		for (int i = alp.at(0)-1; i < alp.at(1); i++)
		{
			// commands ���� �߶� ����.
			result.push_back(array[i]);
		}

		// ������ ����.
		sort(result.begin(), result.end());

		// ������ ����.
		answer.push_back(result.at(alp.at(2) - 1));
	}

	return answer;
}

int main()
{

	solution(arr, omm);

	return 0;
}