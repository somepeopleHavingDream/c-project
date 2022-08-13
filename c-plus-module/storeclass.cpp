#include <iostream>

// 函数声明
void func(void);

// 全局变量
static int count = 10;

// 函数定义
void func(void)
{
    // 局部静态变量
    static int i = 5;
    i++;

    std::cout << "变量i为：" << i << " ";
    std::cout << "变量count为：" << count << std::endl;
}

int main()
{
    while (count--)
    {
        func();
    }

    return 0;
}