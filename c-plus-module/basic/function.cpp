#include <iostream>

using namespace std;

// 函数声明
int max(int num1, int num2);
int sum(int num1, int num2 = 20);

int main()
{
    // 局部变量声明
    int a = 100;
    int b = 200;
    int ret;

    // 调用函数来获取最大值
    ret = max(a, b);
    cout << ret << endl;

    cout << sum(a, b) << endl;
    cout << sum(a) << endl;

    return 0;
}

// 函数返回两个数中较大的那个数
int max(int num1, int num2)
{
    // 局部变量声明
    return num1 > num2 ? num1 : num2;    
}

int sum(int a, int b)
{
    return a + b;
}