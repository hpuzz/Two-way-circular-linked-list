/*
copyright:ZhaoZhan
time：20230308
fun：双向链表的基本功能测试，two-way-circular-linked-list.c为主要功能函数文件
*/
#include"my_list.h"
int main() {
	//初始化一个头结点,测试初始化函数
	struct CircularList* l = InitList();
	//printf("%p\n", l);
	/*
	printf("%p\n", l);//查看地址
	printf("%p\n", l->next);
	printf("%p\n", l->prior);
	*/
	InsertEle(l, 1, 1);
	InsertEle(l, 2,2);
	//printf("%d", l->next->next->data);
	InsertEle(l, 3, 3);
	InsertEle(l, 3, 4);
	printf("%d\n", LengthList(l));//测试求长度函数
	Print(l);
	//测试异常
	//printf("%d",InsertEle(l, 5, 1));
	//测试删除函数
	//printf("%p\n", l->prior);
	//printf("%p\n", l->next->next);
	DelEle(l, 3);
	//printf("%d %d %d", l->next->data, l->next->next->data, l->next->next->next->data);
	Print(l);
	printf("%d\n", GetInedx(l, 3));//测试查找位置
	printf("%d\n", GetEle(l, 3));//测试查找元素
	//测试清空函数
	//ClearList(l);
	//printf("%d\n", LengthList(l));
	//测试销毁函数
	printf("%d\n", Destory(l));
	return 0;
}