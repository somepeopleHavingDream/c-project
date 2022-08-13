#include <iostream>

using namespace std;

// 这个程序演示了有符号和无符号整数之间的差别
int main()
{
    // 有符号短整数
    short int i;
    // 无符号短整数
    short unsigned int j;

    j = 50000;
    i = j;

    cout << i << " " << j << endl;

    return 0;
}