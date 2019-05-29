// ConsoleApplication4.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"
#include <iostream>
#include <benchmark.h>


int Jump(int s, int k)
{
	int iJump = 0;
	bool bIsStay = false;

	for (int i = 0; i < s + 1; ++i)
	{
		iJump += i;
		if (iJump == k)
		{
			bIsStay = true;
		}
	}
	return iJump = (bIsStay) ? iJump - 1 : iJump;
}

static void Test(benchmark::State&state)
{
	for (auto _ : state)
	{
		Jump(4, 6);	// 돌릴 함수로직
	}
}

BENCHMARK(Test);
BENCHMARK_MAIN();