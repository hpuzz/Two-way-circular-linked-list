#ifndef _my_list_h
#define _my_list_h
#include<stdio.h>
#include<stdlib.h>
#define OK 1
#define ERROR 0
typedef int DataType;
//����˫��ѭ������ṹ�壬��һ������������ָ��������ͷ����priorָ��β��㣬β����nextָ��ͷ��㣡
typedef struct CircularList {
	DataType data;
	struct CircularList* prior;
	struct CircularList* next;
};
/*
�ú������ڳ�ʼ��һ��ͷ����ͷ����ǰ���ͺ�̶�Ϊ����
����ֵΪ�ṹ��ָ�뼴��ͷ���ĵ�ַ
*/
struct CircularList* InitList();
/*
�������һ��˫����������ͷ��㣬����Ϊ�����ַ
*/
int ClearList(struct CircularList* l);
/*
������������Ϊ�����ַ
*/
int Destory(struct CircularList* l);
/*
���ڷ���ָ��λ�õ�Ԫ�����ݣ�����һΪ�����ַ��������Ϊλ��
����ֵΪָ��λ�õ�Ԫ��ֵ�����������򷵻�-1��
*/
int GetEle(struct CircularList* l, int i);
/*
���ڷ���ָ��Ԫ�ص�λ�ã�����һΪ�����ַ��������ΪԪ��ֵ
����ֵΪԪ��λ�ã����������򷵻�-1��
*/
int GetInedx(struct CircularList* l, int x);
/*
����һ����㣬����һΪ�����ַ��������Ϊ����λ�ã�������Ϊ����Ԫ��ֵ
*/
int  InsertEle(struct CircularList* l, int i, int x);
/*
ɾ��һ����㣬����һΪ�����ַ��������Ϊɾ��λ��
*/
int DelEle(struct CircularList* l, int i);
/*
���ڴ�ӡ������Ԫ������
*/
void Print(struct CircularList* l);
#endif // !_my_list_h


