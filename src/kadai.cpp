#include <iostream> 
#include <math.h>

#define CPP2_PRIME_UPPER_LIMIT 1000000 //�T������l�̏���l�B 


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


int main() {
	std::cout << nth_prime(367, 186, 151) << std::endl;
	// �ȉ��A���l�ɁA���o�͗�ʂ�ɂȂ邩�m�F����B
	std::cin.get();
	return 0;
}