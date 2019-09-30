#include "Main.h"

/*
소수 찾기

문제 설명
1부터 입력받은 숫자 n 사이에 있는 소수의 개수를 반환하는 함수, solution을 만들어 보세요.

소수는 1과 자기 자신으로만 나누어지는 수를 의미합니다.
(1은 소수가 아닙니다.)

제한 조건
n은 2이상 1000000이하의 자연수입니다.

입출력 예
n	result
10	4
5	3

입출력 예 설명

입출력 예 #1
1부터 10 사이의 소수는 [2,3,5,7] 4개가 존재하므로 4를 반환

입출력 예 #2
1부터 5 사이의 소수는 [2,3,5] 3개가 존재하므로 3를 반환

*/

/*
	아라토스테네스의 체 방식 적용.

1. 2부터 소수를 구하는 모든 구간의 수를 나열
2. 2값을 저장후 2로 떨어지는 모든 수를 제외 시킨다.
3. 3값을 저장후 3으로 떨어지는 모든 수를 제외 시킨다.
4. 4값은 2값에서 제외 되었으니 통과
5. 5값을 저장후 5로 떨어지는 모든 수를 제외 시킨다.
6. 위 과정을 반복하면 모든 구간의 소수가 남는다.
*/

#include <string>
#include <vector>

using namespace std;

int solution(int n) 
{
	int answer = 0;

	// 아라토스테네스의 체 공식 적용.

	vector<bool> Chk(n + 1);

	for (int i = 2; i < n+1; i++)
	{
		if (!Chk[i]) answer++;

		for (int j = i; j <= n; j+=i )
		{
			Chk[j] = true;
		}
	}

	return answer;
}

int main(void)
{
	solution(5);


	return 0;
}

