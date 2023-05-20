/*利用指针作函数参数，可以修改实参的值*/
#include <iostream>

void swap1(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}
void swap2(int *p1, int *p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

int main()
{
	using namespace std;
	int a = 10;
	int b = 20;
	// swap1(a, b);
	swap2(&a, &b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	return 0;
}
