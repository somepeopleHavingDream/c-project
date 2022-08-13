#include <iostream>
#include <cstring>

using namespace std;

// 声明一个结构体类型Book
typedef struct Book
{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
} Book;

void print_book(Book *book);

int main()
{
    // 定义结构体类型的变量
    Book Book1;

    // Book1详述
    strcpy(Book1.title, "C++教程");
    strcpy(Book1.author, "Runnoob");
    strcpy(Book1.subject, "编程语言");
    Book1.book_id = 12345;

    // 输出Book信息
    print_book(&Book1);

    return 0;
}

void print_book(Book *book)
{
    cout << book->title << endl;
    cout << book->author << endl;
    cout << book->subject << endl;
    cout << book->book_id << endl;
};