#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main()
{
    string str1 = "runnoob";
    string str2 = "google";
    string str3;
    int len;

    // 复制str1到str3
    str3 = str1;
    cout << str3 << endl;

    // 连接str1和str2
    str3 = str1 + str2;
    cout << str3 << endl;

    // 连接后，str3的总长度
    cout << str3.size() << endl;

    return 0;
}