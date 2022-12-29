#include <iostream>
#include "Log.h"

void Increment(int *value)
{
    (*value)++;
}

// int Multiply(int a, int b)
//{
//	return a * b;
// }
//
// void MultiplyAndLog(int a, int b)
//{
//	int result = Multiply(a, b);
//	std::cout << result << std::endl;
// }
// int main()
//{
//	int x = 5;
//	bool comparisonResult = x == 5;
//
//	if (comparisonResult)
//	{
//		Log("Hello World!");
//	}
//
//	std::cin.get();
//	return 0;
// }
int main()
{
    /*int i = 0;*/
    // bool condition = true;
    // for (; condition;)
    //{
    //	Log("Hello World!");
    //	i++;
    //	if (!(i < 5))
    //	{
    //		condition = false;
    //	}
    // }
    // for (int i = 0; i < 5; i++)
    //{
    //	if (i > 2)
    //	{
    //		continue;
    //	}
    //	Log("Hello World!");
    //	std::cout << i << std::endl;
    // }

    // Log("=========================================");
    //
    // int i = 0;
    // while (i < 5)
    //{
    //	Log("Hello World!");
    //	i++;
    // }

    // Log("=========================================");

    // bool condition = false;
    // do
    //{
    //	Log("Hello World!");
    //	i++;
    // } while (condition);

    // int var = 8;
    // int* prt = &var;
    //*prt = 10;
    // std::cout << var << std::endl;

    // char* buffer = new char[8];
    // memset(buffer, 10, 8);

    // char** ptr = &buffer;
    // delete[] buffer;

    int a = 5;
    /*int& ref = a;
    ref = 2;*/
    Increment(&a);
    LOG(a);
    std::cin.get();
}