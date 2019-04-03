#include <stdio.h>
#include <malloc.h>
typedef int DataType;

typedef struct node
{
	DataType data;
	struct node *next;
}SCLNode;

//��ʼ��
void SCLLInitiate(SCLNode **head)
{
	*head = (SCLNode *)malloc(sizeof(SCLNode));
	(*head)->next = *head;
}

//��ǰ����Ԫ�ظ���
int ListLength(SCLNode *head)
{
	SCLNode *p;
	p = head;
	int size = 0;
	
	while(p->next != head)
	{
		p = p->next;
		size++;
	}
	
	return size;
}

//��������
int ListInsert(SCLNode *head,int i,DataType x)
{
	SCLNode *p;
	SCLNode *q;
	int j;
	
	p = head;
	j = -1;
	
	while(p->next != head && j < i - 1)
	{
		p = p->next;
		j++;
	}
	
	if(j != i-1)
	{
		printf("����Ԫ��λ�ô���!");
		return 0; 
	}
	
	q = (SCLNode *)malloc(sizeof(SCLNode));
	q->data = x;
	
	q->next = p->next;
	p->next = q;
	
	return 1;
}

//ɾ��ĳ������Ԫ��
int ListDelete(SCLNode *head,int i,DataType *x)
{
	SCLNode *p;
	SCLNode *s;
	int j;
	
	p = head;
	j = -1;
	
	while(p->next != head && p->next->next != head && j < i - 1)
	{
		p = p->next;
		j++;
	}
	
	if(j != i - 1)
	{
		printf("ɾ��Ԫ��λ�ô���!");
		return 0; 
	}
	
	s = p->next;
	*x = s->data;
	p->next = p->next->next;
	free(s);
	
	return 1; 
}

//ȡ����Ԫ��
int ListGet(SCLNode *head,int i,DataType *x)
{
	SCLNode *p;
	int j;
	
	p = head;
	j = -1;
	
	while(p->next != head && j < i)
	{
		p = p->next;
		j++;
	}
	
	if(j != i)
	{
		printf("ȡԪ��λ�ô���!");
		return 0; 
	}
	
	*x = p->data;
	
	return 1; 
}

//��ӡ��������
void ListShow(SCLNode *head)
{
	int i;
	DataType x;
	for(i = 0; i < ListLength(head);++i)
	{
		ListGet(head,i,&x);		
		printf("%d\t",x);		
	}
}

//������ѭ������
void Destroy(SCLNode **head)
{
	SCLNode *p;
	SCLNode *p1;
	
	p = *head;
	
	while(p != *head)
	{
		p1 = p;
		p = p->next;
		free(p1);
	}
	
	*head = NULL;
}
