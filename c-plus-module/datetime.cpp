#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    // 基于当前系统的当前日期/时间
    time_t now = time(0);

    // 把now转换为字符串形式
    char* dt = ctime(&now);
    cout << dt;

    // 把now转换为tm结构
    tm* gmtm = gmtime(&now);
    cout << asctime(gmtm);

    // 1970到目前经过的秒数
    cout << now << endl;

    // 输出tm结构的各个组成部分
    tm* ltm = localtime(&now);
    cout << "年：" << 1900 + ltm->tm_year << endl;
    cout << "月：" << 1 + ltm->tm_mon << endl;
    cout << "日：" << ltm->tm_mday << endl;
    cout << "时间：" << ltm->tm_hour << ":" << ltm->tm_min << ":" << ltm->tm_sec << endl;

    return 0;
}