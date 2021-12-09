#include <iostream> 
#include <math.h>
#include <string>

#define CPP2_PRIME_UPPER_LIMIT 1000000 //�T������l�̏���l�B
#define print(x)((x == -1) ? std::cout << "illegal argumet" << std::endl : std::cout << x << std::endl);

/* --------------------------------------------------------------- */
/*
*  nth_prime
*
*  �^����ꂽ������ a �� d �� n �ɑ΂��āA���̓�������Ɋ܂܂�� n �Ԗڂ�
*  �f����Ԃ��B
*
*  TODO: ���� nth_prime �֐�����������B�K�v�ł���Α��Ɋ֐���
*  �t�@�C�����쐬����B
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
	// �ȉ��A���l�ɁA���o�͗�ʂ�ɂȂ邩�m�F����B
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