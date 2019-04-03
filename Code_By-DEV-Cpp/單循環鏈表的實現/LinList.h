#include <stdio.h>
#include <malloc.h>
typedef int DataType;

typedef struct node
{
	DataType data;
	struct node *next;
}SCLNode;

//初始化
void SCLLInitiate(SCLNode **head)
{
	*head = (SCLNode *)malloc(sizeof(SCLNode));
	(*head)->next = *head;
}

//求当前数据元素个数
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

//插入数据
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
		printf("插入元素位置错误!");
		return 0; 
	}
	
	q = (SCLNode *)malloc(sizeof(SCLNode));
	q->data = x;
	
	q->next = p->next;
	p->next = q;
	
	return 1;
}

//删除某个数据元素
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
		printf("删除元素位置错误!");
		return 0; 
	}
	
	s = p->next;
	*x = s->data;
	p->next = p->next->next;
	free(s);
	
	return 1; 
}

//取数据元素
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
		printf("取元素位置错误!");
		return 0; 
	}
	
	*x = p->data;
	
	return 1; 
}

//打印链表内容
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

//撤销单循环链表
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
