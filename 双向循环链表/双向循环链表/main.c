/*
copyright:ZhaoZhan
time��20230308
fun��˫������Ļ������ܲ��ԣ�two-way-circular-linked-list.cΪ��Ҫ���ܺ����ļ�
*/
#include"my_list.h"
int main() {
	//��ʼ��һ��ͷ���,���Գ�ʼ������
	struct CircularList* l = InitList();
	//printf("%p\n", l);
	/*
	printf("%p\n", l);//�鿴��ַ
	printf("%p\n", l->next);
	printf("%p\n", l->prior);
	*/
	InsertEle(l, 1, 1);
	InsertEle(l, 2,2);
	//printf("%d", l->next->next->data);
	InsertEle(l, 3, 3);
	InsertEle(l, 3, 4);
	printf("%d\n", LengthList(l));//�����󳤶Ⱥ���
	Print(l);
	//�����쳣
	//printf("%d",InsertEle(l, 5, 1));
	//����ɾ������
	//printf("%p\n", l->prior);
	//printf("%p\n", l->next->next);
	DelEle(l, 3);
	//printf("%d %d %d", l->next->data, l->next->next->data, l->next->next->next->data);
	Print(l);
	printf("%d\n", GetInedx(l, 3));//���Բ���λ��
	printf("%d\n", GetEle(l, 3));//���Բ���Ԫ��
	//������պ���
	//ClearList(l);
	//printf("%d\n", LengthList(l));
	//�������ٺ���
	printf("%d\n", Destory(l));
	return 0;
}