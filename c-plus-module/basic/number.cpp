#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    int i, j;

    // 设置种子
    srand((unsigned) time(NULL));

    // 生成10个随机数
    for (i = 0; i < 10; i++)
    {
        // 生成实际的随机数
        j = rand();
        cout << j << endl;
    }

    return 0;
}