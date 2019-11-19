#include "Main.h"

/*

멀쩡한 사각형
문제 설명
가로 길이가 Wcm, 세로 길이가 Hcm인 직사각형 종이가 있습니다. 종이에는 가로, 세로 방향과 평행하게 격자 형태로 선이 그어져 있으며, 모든 격자칸은 1cm x 1cm 크기입니다.
이 종이를 격자 선을 따라 1cm × 1cm의 정사각형으로 잘라 사용할 예정이었는데, 누군가가 이 종이를 대각선 꼭지점 2개를 잇는 방향으로 잘라 놓았습니다. 
그러므로 현재 직사각형 종이는 크기가 같은 직각삼각형 2개로 나누어진 상태입니다. 
새로운 종이를 구할 수 없는 상태이기 때문에, 이 종이에서 원래 종이의 가로, 세로 방향과 평행하게 1cm × 1cm로 잘라 사용할 수 있는 만큼만 사용하기로 하였습니다.
가로의 길이 W와 세로의 길이 H가 주어질 때, 사용할 수 있는 정사각형의 개수를 구하는 solution 함수를 완성해 주세요.

제한사항
W, H : 1억 이하의 자연수

입출력 예
W	H	result
8	12	80

입출력 예 설명
입출력 예 #1

가로가 8, 세로가 12인 직사각형을 대각선 방향으로 자르면 총 16개 정사각형을 사용할 수 없게 됩니다. 원래 직사각형에서는 96개의 정사각형을 만들 수 있었으므로, 96 - 16 = 80 을 반환합니다.

*/

/*
	직선의 공식 : y = ax + b			// a: 기울기 , b는 y의 절편 


*/
#include <stdio.h>
#include <algorithm>

using namespace std;

// 각도 구하기.
double make_Angle(int x1, int y1, int x2, int y2)
{
	return (y2 - y1) / (x2 - x1);
}

// Y 절편 구하기
double make_axisY(int x, int y, double ang)
{
	return y - ang * x;
}

long long solution(int w, int h)
{
	long long answer = 1;

	double m = make_Angle(0, 0, w, h);		// 기울기
	double b = make_axisY(0, 0, m);			// y 절편

	for (int i = 1; i <= w*h; i++)
	{
		printf("*");

		if (i % w == 0) printf("\n");

	}

	/*
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			if(j == (int)(m*i+b)) printf("*");
			else			 printf(" ");
		}

		
	}
	*/
	printf("\n\n 기울기:%.f", m);

	return answer;
}

int main(void)
{
	solution(8, 12);

	
	return 0;
}
