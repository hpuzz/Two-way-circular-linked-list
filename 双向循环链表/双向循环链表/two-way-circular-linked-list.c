#include"my_list.h"
//��ʼ����������ʼ��һ��ͷ��㣡
struct CircularList* InitList( ) {
	struct CircularList* l = (struct CircularList*)malloc(sizeof(struct CircularList));//Ϊͷ�������һ����̬�ռ�
	l->prior = l;
	l->next = l;
	return l;
}
//�󳤶Ⱥ���
int LengthList(struct CircularList* l) {
	struct CircularList* p = l;
	int len = 0;
	while (p->next != l) {
		len++; 
		p=p->next;
	}
	if (!l) {
		return 0;
	}
	return len;
}
//��պ���,ע��ͷ����nextָ���Լ�
int ClearList(struct CircularList* l) {
	struct CircularList* p = l->next;
	while (p!=l)
	{
		struct CircularList* q = p;
		p=p->next;
		free(q); 
	}
	l->next = l;
	l->prior = l;
	return OK;
}
//���ٺ���
int Destory(struct CircularList* l) {
	struct CircularList* p = l;
	while (p->next != l) {
		struct CircularList* q = p;
		p=p->next;
		free(q);
	}
	free(p);
	return OK;
}
//����ָ��λ��Ԫ��ֵ
int GetEle(struct CircularList* l, int i) {
	int j = 1;
	struct CircularList* p = l->next;
	while (j<i&&p->next!=l)
	{
		j++;
		p=p->next;
	}
	if (i < 1 || p->next ==l->next)
		return ERROR;
	return p->data;
}
//����ָ��Ԫ��λ��
int GetInedx(struct CircularList* l, int x) {
	struct CircularList* p = l->next;
	int j = 1;
	while (p->next != l->next)
	{
			if (x == p->data)
				return j;
			j++;
			p=p->next;
	}
		return ERROR;
}
//������
int  InsertEle(struct CircularList* l, int i, int x) {
	int j = 0;
	struct CircularList* q = l;
	struct CircularList* p = (struct CircularList*)malloc(sizeof(struct CircularList));
	p->data = x;
	while (j < i -1&&q->next!=l) {
		j++;
		q=q->next;
	}
	if (i < 1 || (j+1!=i))
		return ERROR;
	if (j + 1 == i && q->next == l) {
		p->prior = q;
		p->next = q->next;
		q->next->prior = p;
		q->next = p;
		return OK;
	}
	p->prior = q;
	p->next = q->next;
	q->next->prior = p;
	q->next = p;
	return OK;
}
//ɾ��һ��Ԫ��
int DelEle(struct CircularList* l, int i) {
	int j = 1;
	struct CircularList* q = l->next;
	struct CircularList* p = q->next;
	while (j < i - 1 && q->next != l) {
		j++;
		q=q->next;
		p = q->next;
	}
	if (i < 1||j+1!=i)
		return ERROR;
	if (j + 1 == i && q->next == l) {
		q->next = l;
		l->prior = p;
		free(p);
		return OK;
	}
	q->next->next->prior = q;
	q->next = p->next;
	free(p);
	//printf("wai");
	return OK;
}
//��ӡ��������Ԫ��
void Print(struct CircularList* l) {
	struct CircularList* p = l;
	while (p ->next!= l) {
		printf("%d ", p->next->data);
		p=p->next;
	}
}