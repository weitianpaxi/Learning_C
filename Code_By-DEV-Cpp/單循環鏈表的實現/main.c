#include "LinList.h"
typedef int DataType;					//定义数据为int类型 

int main(void)
{
	SCLNode *head;
	int i,x;
	
	SCLLInitiate(&head);				//初始化 
	
	for(i = 0;i < 10;++i)				//插入法建立循环单链表 
	{
		ListInsert(head,i,i + 1);		//插入10个元素 
	}
	
	printf("建立的链表为：\n") ; 
	
	ListShow(head);						//输出显示 
	
	printf("\n"); 
	
	printf("删除元素“ 5 ”后：\n"); 
	ListDelete(head,4,&x);				//删除数据元素5 
	
	ListShow(head);						//输出显示  
	
	printf("\n");
	
	printf("插入数据元素“ 99 ”后：\n");
	ListInsert(head,4,99); 

	
	ListShow(head);						//输出显示 
	
	Destroy(&head);						//撤销单循环链表 
		
	return 0; 
}
