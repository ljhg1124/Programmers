#include "Main.h"

/*
��ɰ���

���� ����
���α׷��ӽ� �������� ��� ���� �۾��� ���� ���Դϴ�. �� ����� ������ 100%�� �� ���񽺿� �ݿ��� �� �ֽ��ϴ�.

��, �� ����� ���߼ӵ��� ��� �ٸ��� ������ �ڿ� �ִ� ����� �տ� �ִ� ��ɺ��� ���� ���ߵ� �� �ְ�, �̶� �ڿ� �ִ� ����� �տ� �ִ� ����� ������ �� �Բ� �����˴ϴ�.

���� �����Ǿ�� �ϴ� ������� �۾��� ������ ���� ���� �迭 progresses�� �� �۾��� ���� �ӵ��� ���� ���� �迭 speeds�� �־��� �� �� �������� �� ���� ����� �����Ǵ����� return �ϵ��� solution �Լ��� �ϼ��ϼ���.

���� ����
�۾��� ����(progresses, speeds�迭�� ����)�� 100�� �����Դϴ�.
�۾� ������ 100 �̸��� �ڿ����Դϴ�.
�۾� �ӵ��� 100 ������ �ڿ����Դϴ�.
������ �Ϸ翡 �� ���� �� �� ������, �Ϸ��� ���� �̷�����ٰ� �����մϴ�. ���� ��� �������� 95%�� �۾��� ���� �ӵ��� �Ϸ翡 4%��� ������ 2�� �ڿ� �̷�����ϴ�.

����� ��

progresses	speeds		return
[93,30,55]	[1,30,5]	[2,1]

����� �� ����
ù ��° ����� 93% �Ϸ�Ǿ� �ְ� �Ϸ翡 1%�� �۾��� �����ϹǷ� 7�ϰ� �۾� �� ������ �����մϴ�.
�� ��° ����� 30%�� �Ϸ�Ǿ� �ְ� �Ϸ翡 30%�� �۾��� �����ϹǷ� 3�ϰ� �۾� �� ������ �����մϴ�. ������ ���� ù ��° ����� ���� �ϼ��� ���°� �ƴϱ� ������ ù ��° ����� �����Ǵ� 7��° �����˴ϴ�.
�� ��° ����� 55%�� �Ϸ�Ǿ� �ְ� �Ϸ翡 5%�� �۾��� �����ϹǷ� 9�ϰ� �۾� �� ������ �����մϴ�.

���� 7��°�� 2���� ���, 9��°�� 1���� ����� �����˴ϴ�.

*/

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
	vector<int> answer;
	vector<pair<int,bool>> chk;

	int len = progresses.size();
	int lp = 0;

	for (int i = 0; i < len; i++)
	{
		chk.push_back(make_pair(progresses[i], false));
	}

	while (true)
	{
		int count = 0;

		for (int i = lp; i < len; i++)
		{
			chk[i].first += speeds[i];

			if (chk[i].first >= 100) chk[i].second = true;

			if (chk[i].second)
			{
				count++;

				if(chk[i-1].second == true)
				{
					lp += count;
					answer.push_back(count);
					continue;
				}
			}
		}
			
		if (lp >= len) break;
	}

	return answer;
}

int main(void)
{
	vector<int> progresses = { 93, 30, 55 };
	vector<int> speeds = { 1, 30, 5 };

	//vector<int> progresses = { 90, 90, 90, 90, 90, 90, 90 };
	//vector<int> speeds = { 3, 2, 5, 1, 1, 2, 1 };

	solution(progresses, speeds);
	return 0;
}