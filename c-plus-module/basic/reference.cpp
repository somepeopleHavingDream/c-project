#include <iostream>

using namespace std;

int main()
{
    // 声明简单的变量
    int i;
    double d;

    // 声明引用变量
    int& r = i;
    double& s = d;

    i = 5;
    cout << i << endl;
    cout << r << endl;

    d = 11.7;
    cout << d << endl;
    cout << s << endl;

    return 0;
}