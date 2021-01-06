// formore.cpp -- for ������ ���� ����
#include <iostream>
const int ArSize = 20; // �ܺ� ������ ��
int main()
{
	long long factorials[ArSize];
	factorials[1] = factorials[0] = 1LL;
	// n! = n * (n-1)!
	for (int i = 2; i < ArSize; i++)
		factorials[i] = i * factorials[i - 1];
	for (int i = 0; i < ArSize; i++)
		std::cout << i << "! = " << factorials[i] << std::endl;
	return 0;
}