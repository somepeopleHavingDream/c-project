#include <iostream>
#include <iomanip>

using namespace std;
using std::setw;

int main()
{
    // n是一个包含10个整数的数组
    int n[10];

    // 初始化数组元素
    for (int i = 0; i < 10; i++)
    {
        // 设置元素i为i+100
        n[i] = i + 100;
    }

    // 输出数组中每个元素的值
    for (int j = 0; j < 10; j++)
    {
        cout << setw(7) << j << setw(13) << n[j] << endl;
    }

    return 0;
}
