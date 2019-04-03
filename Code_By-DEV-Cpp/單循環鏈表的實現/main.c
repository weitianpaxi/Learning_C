#include "LinList.h"
typedef int DataType;					//��������Ϊint���� 

int main(void)
{
	SCLNode *head;
	int i,x;
	
	SCLLInitiate(&head);				//��ʼ�� 
	
	for(i = 0;i < 10;++i)				//���뷨����ѭ�������� 
	{
		ListInsert(head,i,i + 1);		//����10��Ԫ�� 
	}
	
	printf("����������Ϊ��\n") ; 
	
	ListShow(head);						//�����ʾ 
	
	printf("\n"); 
	
	printf("ɾ��Ԫ�ء� 5 ����\n"); 
	ListDelete(head,4,&x);				//ɾ������Ԫ��5 
	
	ListShow(head);						//�����ʾ  
	
	printf("\n");
	
	printf("��������Ԫ�ء� 99 ����\n");
	ListInsert(head,4,99); 

	
	ListShow(head);						//�����ʾ 
	
	Destroy(&head);						//������ѭ������ 
		
	return 0; 
}
