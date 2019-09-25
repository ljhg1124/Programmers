#include "main.h"

/*
���ڿ� �� ������� �����ϱ�

���� ����
���ڿ��� ������ ����Ʈ strings��, ���� n�� �־����� ��, �� ���ڿ��� �ε��� n��° ���ڸ� �������� �������� �����Ϸ� �մϴ�. ���� ��� strings�� [sun, bed, car]�̰� n�� 1�̸� �� �ܾ��� �ε��� 1�� ���� u, e, a�� strings�� �����մϴ�.

���� ����
strings�� ���� 1 �̻�, 50������ �迭�Դϴ�.
strings�� ���Ҵ� �ҹ��� ���ĺ����� �̷���� �ֽ��ϴ�.
strings�� ���Ҵ� ���� 1 �̻�, 100������ ���ڿ��Դϴ�.
��� strings�� ������ ���̴� n���� Ů�ϴ�.
�ε��� 1�� ���ڰ� ���� ���ڿ��� ���� �� ���, ���������� �ռ� ���ڿ��� ���ʿ� ��ġ�մϴ�.

����� ��
strings				n	return
[sun, bed, car]		1	[car, bed, sun]
[abce, abcd, cdx]	2	[abcd, abce, cdx]

����� �� ����

����� �� 1
sun, bed, car�� 1��° �ε��� ���� ���� u, e, a �Դϴ�. �̸� �������� strings�� �����ϸ� [car, bed, sun] �Դϴ�.

����� �� 2
abce�� abcd, cdx�� 2��° �ε��� ���� c, c, x�Դϴ�. ���� ���� �Ŀ��� cdx�� ���� �ڿ� ��ġ�մϴ�. abce�� abcd�� ���������� �����ϸ� abcd�� �켱�ϹǷ�, ���� [abcd, abce, cdx] �Դϴ�.
*/

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> strings = { "sun","bed","car" };
int num;

int compare(string first, string end)
{
	return first[num] != end[num] ? first[num] < end[num] : first < end;
}

vector<string> solution(vector<string> strings, int n) {
	vector<string> answer = strings;
	num = n;

	sort(answer.begin(), answer.end(), compare);

	return answer;
}

int main(void)
{
	solution(strings, n);

	return 0;
}
