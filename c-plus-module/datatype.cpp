#include <iostream>
#include <limits>

using namespace std;

int main()
{
    // bool
    cout << "boot: " << sizeof(bool) << endl;
    cout << "max value: " << numeric_limits<bool>::max() << endl;
    cout << "min value: " << numeric_limits<bool>::min() << endl;
    cout << endl;

    // char
    cout << "char: " << sizeof(char) << endl;
    cout << "max value: " << numeric_limits<char>::max() << endl;
    cout << "min value: " << numeric_limits<char>::min() << endl;
    cout << endl;

    // signed char
    cout << "signed char: " << sizeof(signed char) << endl;
    cout << "max value: " << numeric_limits<signed char>::max() << endl;
    cout << "min value: " << numeric_limits<signed char>::min() << endl;
    cout << endl;

    // unsigned char
    cout << "unsigned char: " << sizeof(unsigned char) << endl;
    cout << "max value: " << numeric_limits<unsigned char>::max() << endl;
    cout << "min value: " << numeric_limits<unsigned char>::min() << endl;
    cout << endl;

    // wchar_t
    cout << "wchar_t: " << sizeof(wchar_t) << endl;
    cout << "max value: " << numeric_limits<wchar_t>::max() << endl;
    cout << "min value: " << numeric_limits<wchar_t>::min() << endl;
    cout << endl;

    // short
    cout << "short: " << sizeof(short) << endl;
    cout << "max value: " << numeric_limits<short>::max() << endl;
    cout << "min value: " << numeric_limits<short>::min() << endl;
    cout << endl;

    // int
    cout << "int: " << sizeof(int) << endl;
    cout << "max value: " << numeric_limits<int>::max() << endl;
    cout << "min value: " << numeric_limits<int>::min() << endl;
    cout << endl;

    // unsigned
    cout << "unsigned: " << sizeof(unsigned) << endl;
    cout << "max value: " << numeric_limits<unsigned>::max() << endl;
    cout << "min value: " << numeric_limits<unsigned>::min() << endl;
    cout << endl;

    // long
    cout << "long: " << sizeof(long) << endl;
    cout << "max value: " << numeric_limits<long>::max() << endl;
    cout << "min value: " << numeric_limits<long>::min() << endl;
    cout << endl;

    // unsigned long
    cout << "unsigned long: " << sizeof(unsigned long) << endl;
    cout << "max value: " << numeric_limits<unsigned long>::max() << endl;
    cout << "min value: " << numeric_limits<unsigned long>::min() << endl;
    cout << endl;

    // double
    cout << "double: " << sizeof(double) << endl;
    cout << "max value: " << numeric_limits<double>::max() << endl;
    cout << "min value: " << numeric_limits<double>::min() << endl;
    cout << endl;

    // long double
    cout << "long double: " << sizeof(long double) << endl;
    cout << "max value: " << numeric_limits<long double>::max() << endl;
    cout << "min value: " << numeric_limits<long double>::min() << endl;
    cout << endl;

    // float
    cout << "float: " << sizeof(float) << endl;
    cout << "max value: " << numeric_limits<float>::max() << endl;
    cout << "min value: " << numeric_limits<float>::min() << endl;
    cout << endl;

    // size_t
    cout << "size_t: " << sizeof(size_t) << endl;
    cout << "max value: " << numeric_limits<size_t>::max() << endl;
    cout << "min value: " << numeric_limits<size_t>::min() << endl;
    cout << endl;

    // string
    cout << "string: " << sizeof(string) << endl;
    cout << endl;

    return 0;
}