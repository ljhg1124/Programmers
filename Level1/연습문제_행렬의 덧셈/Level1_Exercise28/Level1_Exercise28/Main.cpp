#include "Main.h"

/*
����� ����

���� ����
����� ������ ��� ���� ũ�Ⱑ ���� �� ����� ���� ��, ���� ���� ���� ���� ���� ����� �˴ϴ�. 2���� ��� arr1�� arr2�� �Է¹޾�, ��� ������ ����� ��ȯ�ϴ� �Լ�, solution�� �ϼ����ּ���.

���� ����
��� arr1, arr2�� ��� ���� ���̴� 500�� ���� �ʽ��ϴ�.

����� ��

arr1			arr2			return
[[1,2],[2,3]]	[[3,4],[5,6]]	[[4,6],[7,9]]
[[1],[2]]		[[3],[4]]		[[4],[6]]
*/

#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
	vector< vector<int> > answer;
	
	for (int i = 0; i < arr1.size(); i++)
	{
		vector<int> num;
		for (int j = 0; j < arr1[i].size(); j++)
		{
			num.push_back(arr1[i][j] + arr2[i][j]);
		}
		answer.push_back(num);
	}

	/*
	vector< vector<int> > answer = arr1;
	
	for (int i = 0; i < answer.size(); i++)
	{
		for (int j = 0; j < answer[i].size(); j++)
		{
			answer[i][j] = arr1[i][j] + arr2[i][j];
		}
	}
	*/
	
	return answer;
}

int main(void)
{
	//vector<vector<int>> arr1 = { {1,2}, {2,3} };
	//vector<vector<int>> arr2 = { {3,4}, {5,6} };

	vector<vector<int>> arr1 = { {1,2} };
	vector<vector<int>> arr2 = { {3,4} };

	solution(arr1, arr2);

	return 0;
}