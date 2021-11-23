#include <iostream> 
#include <math.h>

#define CPP2_PRIME_UPPER_LIMIT 1000000 //探索する値の上限値。 


/* --------------------------------------------------------------- */
/*
*  nth_prime
*
*  与えられた正整数 a と d と n に対して、この等差数列に含まれる n 番目の
*  素数を返す。
*
*  TODO: この nth_prime 関数を実装せよ。必要であれば他に関数や
*  ファイルを作成せよ。
*/
/* -------------------------------------------------------------- */

bool IsPrime(int num)
{
	if (num < 2) return false;
	else if (num == 2) return true;
	else if (num % 2 == 0) return false;

	double sqrtNum = sqrt(num);
	for (int i = 3; i <= sqrtNum; i += 2)
	{
		if (num % i == 0)
		{
			return false;
		}
	}
	return true;
}

int nth_prime(unsigned int a, unsigned int d, unsigned int n)
{
	int g, count = 0;
	for (int i = 0; i < CPP2_PRIME_UPPER_LIMIT; i++)
	{
		g = a + (i * d);
		if (IsPrime(g))
		{
			count++;
		}
		if (count == n)
		{
			break;
		}
	}
	return g;
}


int main() {
	std::cout << nth_prime(367, 186, 151) << std::endl;
	// 以下、同様に、入出力例通りになるか確認せよ。
	std::cin.get();
	return 0;
}