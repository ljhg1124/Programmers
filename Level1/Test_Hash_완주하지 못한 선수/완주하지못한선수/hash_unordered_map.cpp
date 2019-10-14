#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
	string answer = "";
	unordered_map<string,int> result;


	for (auto ai : completion)
	{
		if (result.find(ai) == result.end())
		{
			result.insert(make_pair(ai, 1));
		}
		else
			result[ai]++;
	}

	for (auto ai : participant)
	{
		if (result.find(ai) == result.end())
		{
			answer = ai;
			break;
		}
		else
		{
			if (--result[ai] < 0)
			{
				answer = ai;
				break;
			}
		}
	}
	return answer;
}

int main()
{
	vector<string> A;
	vector<string> B;

	/*
	A.push_back("marina");
	A.push_back("josipa");
	A.push_back("nikola");
	A.push_back("vinko");
	A.push_back("filipa");

	B.push_back("josipa");
	B.push_back("filipa");
	B.push_back("marina");
	B.push_back("nikola");
	*/
	
	A.push_back("mislav");
	A.push_back("stanko");
	A.push_back("mislav");
	A.push_back("ana");

	B.push_back("stanko");
	B.push_back("ana");
	B.push_back("mislav");
	
	solution(A, B);

	return 0;
}