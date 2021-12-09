#include <iostream> 
#include <math.h>
#include <string>

#define CPP2_PRIME_UPPER_LIMIT 1000000 //探索する値の上限値。
#define print(x)((x == -1) ? std::cout << "illegal argumet" << std::endl : std::cout << x << std::endl);

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



int nth_prime(unsigned int one, unsigned int two)
{
	return -1;
}


int nth_prime(unsigned int one)
{
	return -1;
}

int nth_prime()
{
	return -1;
}


int main() {
	// 以下、同様に、入出力例通りになるか確認せよ。
	print(nth_prime(367, 186, 151))
	print(nth_prime(179, 10, 203))
	print(nth_prime(271, 37, 39))
	print(nth_prime(103, 230, 1))
	print(nth_prime(27, 104, 185))
	print(nth_prime(253, 50, 85))
	print(nth_prime(1, 1, 1))
	print(nth_prime(9075, 337, 210))
	print(nth_prime(307, 24, 79))
	print(nth_prime(331, 221, 177))
	print(nth_prime(259, 170, 40))
	print(nth_prime(269, 58, 102))
	print(nth_prime(2, 1))
	print(nth_prime(3000))
	print(nth_prime())
	std::cin.get();
	return 0;
}