#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
#include<windows.h>
#include<time.h>
#define f1 "数据.txt" //文件路径
struct student
{
    int ssh;//宿舍号
    char *name;//姓名
    char sex;//性别
    int cwh;//床位号
    int fjh;//房间号
    int ID;//学号
    long dhhm;//电话号码
}stu[100];
struct subscriber
{
    int yhzh;//用户帐号
    char *password;
    int qxdj;//权限等级
}user[10];
void cxzs();
void gxxx();
void xcxx();
void get();
void writetofile();
void srxx();
void sczh();
void reset_password();
void menu_select1();
void menu_select2();
int N = 2;//表示目前有多少学生
int M = 3;//表示目前有多少账户

void welcome()
{
	printf("\n");
	printf("\n                               欢迎进入宿舍管理系统                    \n ");
	printf("\n       *******************************************************************\n");
	printf(" \n                                 1.管理员系统                              \n");
	printf("\n       *******************************************************************\n");
	printf("\n                                  2.普通用户系统                             \n");
	printf("\n       *******************************************************************\n");
	printf("\n                                  0.退出系统                             \n");
	printf("\n       *******************************************************************\n");
}




int main()
{
int choice;
int i;
int id;
int password;
    printf("%s\n",__TIME__);
while(1)
{

	welcome();
	printf("        请输入您的选择：");
	scanf("%d",&choice);
	switch(choice)
{
	case 1:	

	printf("********************************************\n");
	printf("     请输入管理员账号:\n");
	scanf("%d",&id);
	printf("********************************************\n");
	printf("     请输入管理员密码:\n");
	scanf("%d",&password);
	if((id==0)&&(password==000))
	menu_select1();
	else
	printf("用户名或密码错误，请重新输入!\n");
	exit(0);
	case 2:
	printf("********************************************\n");
	printf("     请输入普通用户账号:\n");
	scanf("%d",&id);
	printf("********************************************\n");
	printf("     请输入普通用户密码:\n");
	scanf("%d",&password);
	if((id==1)&&(password==123))
	menu_select2();
	else
	printf("用户名或密码错误，请重新输入!\n");
	exit(0);
	case 0:
	printf("谢谢您使用本系统，欢迎您再次使用，再见。。。\n");exit(0);
	default:
	printf("输入有误！请重新输入：\n");
	main();
	}				
}
	return 0;
}


void menu_select2()
{
    int b;
    while(2);
    {
        system("cls");
        printf("\n\n\t\t----------------------信息管理----------------------\n\n");
        printf("\t\t 1. 用户信息管理                        \n\n");
        printf("\t\t 2. 查询学生信息                        \n\n");
        printf("\t\t 0. 退出系统                           \n\n");
        printf("\t\t------------------------------------------------------------\n");
        printf("\t请选择您要运行的选项按(0-3):");
        scanf("%d",&b);
    }
    {
        switch(b)
        {

            case 1:reset_password(user);break;
            case 2:cxzs(stu);break;
            default :printf(" 你输入的指令错误，请重新输入");menu_select2();
        }
    }
}


void menu_select1()
{
    int a;
    while(1);
    {
        system("cls");
        printf("\n\n\t\t----------------------信息管理----------------------\n\n");
        printf("请选择功能：（如果您是第一次进入，请先输入学生住宿信息）\n");
        printf("\t\t 1. 输入学生住宿信息                     \n\n");
        printf("\t\t 2. 创建普通账号                        \n\n");
        printf("\t\t 3. 删除普通账号                        \n\n");
        printf("\t\t 4. 查询学生信息                        \n\n");
        printf("\t\t 0. 退出系统                           \n\n");
        printf("\t\t------------------------------------------------------------\n");
        printf("\t请选择您要运行的选项按(0-4):");
        scanf("%d",&a);
    }
    {
        switch(a)
        {

            case 1:srxx(stu);break;
            case 2:xcxx(stu);break;
            case 3:sczh(user);break;
            case 4:cxzs(stu);break;
            default :printf(" 你输入的指令错误，请重新输入");menu_select1();
        }
    }
}


void writetofile()
{   int i=0;
    FILE *fp = fopen(f1,"w");
    while(i<M)
    {
        fprintf(fp,"%d %s %d\n",user[i].yhzh,user[i].password,user[i].qxdj);
        i++;
    }

    fclose(fp);
}


void srxx(struct student *a)
{
    int i;
    i=M;
    char xingming[20];
    printf("\t\t宿舍号:");
    scanf("%d",&a[M].ssh);
    printf("\t\t姓名:");
    scanf("%s",&a[M].name);
    printf("\t\t性别:");
    scanf("%s",&a[M].sex);
    printf("\t\t床位号:");
    scanf("%d",&a[M].cwh);
    printf("\t\t房间号:");
    scanf("%d",&a[M].fjh);
    printf("\t\t学号:");
    scanf("%d",&a[M].ID);
    printf("\n");
    getchar();
    gets(xingming);
    stu[i].name = (char*)malloc(sizeof(char)*(strlen(xingming)+1));
    strcpy(stu[i].name,xingming);
    FILE *fp=fopen(f1,"a+");
    fprintf(fp,"%d %d %d %d %s %s\n",stu[i].ssh,stu[i].fjh,stu[i].cwh,stu[i].ID,stu[i].name,stu[i].sex);
    fclose(fp);
    printf("\n创建成功\n");
    system("pause");
}


void sczh(struct subscriber *a)//删除普通用户帐号
{
    int p;
    int i;
    printf("请输入要删除的账户的帐号：\n");
    scanf("%d",&p);
    for( i=1;i<M;i++)//i从1开始，管理员帐号不能删除
    {
        if(a[i].yhzh == p) {break ;}//找到删除的帐号是数组第i个元素
    }
    if(i==M) {printf("您输入的帐号不存在\n");
        system("pause");
        return;

    }
    for(;i<M-1;i++) {user[i] = user[i+1];}
    M--;
    writetofile();
    printf("/n删除成功/n");
    system("pause");
}


void cx(struct student *a)//查询学生信息
{
    int p,i;
    printf("请选择查询方式：\n");
    printf("1.按宿舍号查询\t2.按住宿学生学号查询\n");
    scanf("%d",&p);
    if(p == 1)
    {
        int dorm1;
        printf("请输入宿舍号：");scanf("%d",&dorm1);
        for(i=0;i<N;i++)
        {
            if(a[i].ssh == dorm1) {break;}
        }
        if(i == N){printf("您输入的宿舍号不存在\n");system("pause");return ;}
    }
    else if(p == 2)
    {
        long myID;
        printf("请输入学生学号：");
        scanf("%ld",&myID);
        for(i=0;i<N;i++)
        {
            if(a[i].ID == myID) {system("pause");break ;}
        }
        if(i == N) {printf("您输入的学号不存在\n");return ;}
    }
    printf("查询成功，学生信息如下：\n");
    printf("宿舍号：%d\n",a[i].ssh);
    printf("姓名：%s\n",a[i].name);
    printf("性别：%s\n",a[i].sex);
    printf("床位号：%d\n",a[i].cwh);
    printf("房间号：%d\n",a[i].fjh);
    printf("学号：%ld\n",a[i].ID);
    printf("电话号码：%ld\n",a[i].dhhm);
    system("pause");
}


void reset_password(struct subscriber *a)//重置普通用户帐号密码
{
    int p;
    int i;
    char newpassword[15];
    printf("请输入要重置的账户的帐号：\n");
    scanf("%d",&p);
    for(i=1;i<M;i++)//i从1开始，管理员帐号不能重置
    {
        if(a[i].yhzh == p) {break ;}//找到重置的帐号是数组第i个元素
    }
    if(i==M) {printf("您输入的帐号不存在\n");system("pause");return ;}
    printf("请输入账户的新密码：\n");
    getchar();//输入p时最后一个换行符也作为字符会被新密码读入，此函数用于吃掉换行符
    gets(newpassword);
    a[i].password = newpassword;
    writetofile();
    printf("/n重置成功/n");
    system("pause");
}


void cxzs(struct student*a)//查询住宿信息
{
    int p,i;
    printf("请选择查询方式：\n");
    printf("1.按宿舍号查询\t2.按住宿学生信息查询\n");
    scanf("%d",&p);
    if(p == 1)
    {
        int dorm1;
        printf("请输入宿舍号：");scanf("%d",&dorm1);
        for(i=0;i<N;i++)
        {
            if(a[i].ssh == dorm1) {break;}
        }
        if(i == N){printf("您输入的宿舍号不存在\n");system("pause");return ;}
    }
    else if(p == 2)
    {
        long myID;
        printf("请输入学生学号：");
        scanf("%ld",&myID);
        for(i=0;i<N;i++)
        {
            if(a[i].ID == myID) {system("pause");break ;}
        }
        if(i == N) {printf("您输入的学号不存在\n");return ;}
    }
    printf("查询成功，学生信息如下：\n");
    printf("宿舍号：%d\n",a[i].ssh);
    printf("床位号：%d\n",a[i].cwh);
    printf("姓名：%s\n",a[i].name);
    printf("学号：%ld\n",a[i].ID);
    printf("电话号码：%ld\n",a[i].dhhm);
    printf("性别：%s\n",a[i].sex);
    printf("房间号：%d\n",a[i].fjh);
    system("pause");
}

