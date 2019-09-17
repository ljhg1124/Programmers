#include "main.h"

/* ////////////////////////////////////////////////////////////////////////

���� ����
�����ڴ� ������ ������ ����� �ظ��Դϴ�. ������ ���ι��� ���ǰ�翡 ���� ������ ���� ������ �մϴ�. �����ڴ� 1�� �������� ������ �������� ������ ���� ����ϴ�.

1�� �����ڰ� ��� ���: 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, ...
2�� �����ڰ� ��� ���: 2, 1, 2, 3, 2, 4, 2, 5, 2, 1, 2, 3, 2, 4, 2, 5, ...
3�� �����ڰ� ��� ���: 3, 3, 1, 1, 2, 2, 4, 4, 5, 5, 3, 3, 1, 1, 2, 2, 4, 4, 5, 5, ...

1�� �������� ������ ���������� ������ ������� ���� �迭 answers�� �־����� ��, ���� ���� ������ ���� ����� �������� �迭�� ��� return �ϵ��� solution �Լ��� �ۼ����ּ���.

���� ����
������ �ִ� 10,000 ������ �����Ǿ��ֽ��ϴ�.
������ ������ 1, 2, 3, 4, 5�� �ϳ��Դϴ�.
���� ���� ������ ���� ����� ������ ���, return�ϴ� ���� �������� �������ּ���.
����� ��
answers	return
[1,2,3,4,5]	[1]
[1,3,2,4,2]	[1,2,3]
����� �� ����
����� �� #1

������ 1�� ��� ������ �������ϴ�.
������ 2�� ��� ������ Ʋ�Ƚ��ϴ�.
������ 3�� ��� ������ Ʋ�Ƚ��ϴ�.
���� ���� ������ ���� ���� ����� ������ 1�Դϴ�.

����� �� #2

��� ����� 2�������� ������ϴ�.

//////////////////////////////////////////////////////////////////////// */

#include <algorithm>
#include <string>
#include <vector>

using namespace std;

vector<int> spg1 = { 1, 2, 3, 4, 5 };
vector<int> spg2 = { 2, 1, 2, 3, 2, 4, 2, 5 };
vector<int> spg3 = { 3, 3, 1, 1, 2, 2, 4, 4, 5, 5 };

vector<int> solution(vector<int> answers) {
	vector<int> answer;
	vector<int> score(3);

	for (int i = 0; i < answers.size(); i++) 
	{
		if (spg1[i % spg1.size()] == answers[i]) score[0]++;
		if (spg2[i % spg2.size()] == answers[i]) score[1]++;
		if (spg3[i % spg3.size()] == answers[i]) score[2]++;
	}

	int MaxScore = *max_element(score.begin(), score.end());

	for (size_t i = 0; i < 3; i++)
	{
		if (score[i] == MaxScore)
			answer.push_back(i + 1);
	}

	return answer;
}

int main()
{
	vector<int> item;
	item.push_back(1);
	item.push_back(3);
	item.push_back(2);
	item.push_back(4);
	item.push_back(2);

	solution(item);

}
