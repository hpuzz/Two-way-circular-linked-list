#ifndef _my_list_h
#define _my_list_h
#include<stdio.h>
#include<stdlib.h>
#define OK 1
#define ERROR 0
typedef int DataType;
//定义双向循环链表结构体，有一个数据域，两个指针域，其中头结点的prior指向尾结点，尾结点的next指向头结点！
typedef struct CircularList {
	DataType data;
	struct CircularList* prior;
	struct CircularList* next;
};
/*
该函数用于初始化一个头结点该头结点的前驱和后继都为自身
返回值为结构体指针即该头结点的地址
*/
struct CircularList* InitList();
/*
用于清空一个双向链表，保留头结点，参数为链表地址
*/
int ClearList(struct CircularList* l);
/*
销毁链表，参数为链表地址
*/
int Destory(struct CircularList* l);
/*
用于返回指定位置的元素数据，参数一为链表地址，参数二为位置
返回值为指定位置的元素值，若不存在则返回-1！
*/
int GetEle(struct CircularList* l, int i);
/*
用于返回指定元素的位置，参数一为链表地址，参数二为元素值
返回值为元素位置，若不存在则返回-1！
*/
int GetInedx(struct CircularList* l, int x);
/*
插入一个结点，参数一为链表地址，参数二为插入位置，参数三为插入元素值
*/
int  InsertEle(struct CircularList* l, int i, int x);
/*
删除一个结点，参数一为链表地址，参数二为删除位置
*/
int DelEle(struct CircularList* l, int i);
/*
用于打印链表中元素数据
*/
void Print(struct CircularList* l);
#endif // !_my_list_h


