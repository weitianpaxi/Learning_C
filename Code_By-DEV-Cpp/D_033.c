#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
#include<windows.h>
#include<time.h>
#define f1 "����.txt" //�ļ�·��
struct student
{
    int ssh;//�����
    char *name;//����
    char sex;//�Ա�
    int cwh;//��λ��
    int fjh;//�����
    int ID;//ѧ��
    long dhhm;//�绰����
}stu[100];
struct subscriber
{
    int yhzh;//�û��ʺ�
    char *password;
    int qxdj;//Ȩ�޵ȼ�
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
int N = 2;//��ʾĿǰ�ж���ѧ��
int M = 3;//��ʾĿǰ�ж����˻�

void welcome()
{
	printf("\n");
	printf("\n                               ��ӭ�����������ϵͳ                    \n ");
	printf("\n       *******************************************************************\n");
	printf(" \n                                 1.����Աϵͳ                              \n");
	printf("\n       *******************************************************************\n");
	printf("\n                                  2.��ͨ�û�ϵͳ                             \n");
	printf("\n       *******************************************************************\n");
	printf("\n                                  0.�˳�ϵͳ                             \n");
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
	printf("        ����������ѡ��");
	scanf("%d",&choice);
	switch(choice)
{
	case 1:	

	printf("********************************************\n");
	printf("     ���������Ա�˺�:\n");
	scanf("%d",&id);
	printf("********************************************\n");
	printf("     ���������Ա����:\n");
	scanf("%d",&password);
	if((id==0)&&(password==000))
	menu_select1();
	else
	printf("�û����������������������!\n");
	exit(0);
	case 2:
	printf("********************************************\n");
	printf("     ��������ͨ�û��˺�:\n");
	scanf("%d",&id);
	printf("********************************************\n");
	printf("     ��������ͨ�û�����:\n");
	scanf("%d",&password);
	if((id==1)&&(password==123))
	menu_select2();
	else
	printf("�û����������������������!\n");
	exit(0);
	case 0:
	printf("лл��ʹ�ñ�ϵͳ����ӭ���ٴ�ʹ�ã��ټ�������\n");exit(0);
	default:
	printf("�����������������룺\n");
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
        printf("\n\n\t\t----------------------��Ϣ����----------------------\n\n");
        printf("\t\t 1. �û���Ϣ����                        \n\n");
        printf("\t\t 2. ��ѯѧ����Ϣ                        \n\n");
        printf("\t\t 0. �˳�ϵͳ                           \n\n");
        printf("\t\t------------------------------------------------------------\n");
        printf("\t��ѡ����Ҫ���е�ѡ�(0-3):");
        scanf("%d",&b);
    }
    {
        switch(b)
        {

            case 1:reset_password(user);break;
            case 2:cxzs(stu);break;
            default :printf(" �������ָ���������������");menu_select2();
        }
    }
}


void menu_select1()
{
    int a;
    while(1);
    {
        system("cls");
        printf("\n\n\t\t----------------------��Ϣ����----------------------\n\n");
        printf("��ѡ���ܣ���������ǵ�һ�ν��룬��������ѧ��ס����Ϣ��\n");
        printf("\t\t 1. ����ѧ��ס����Ϣ                     \n\n");
        printf("\t\t 2. ������ͨ�˺�                        \n\n");
        printf("\t\t 3. ɾ����ͨ�˺�                        \n\n");
        printf("\t\t 4. ��ѯѧ����Ϣ                        \n\n");
        printf("\t\t 0. �˳�ϵͳ                           \n\n");
        printf("\t\t------------------------------------------------------------\n");
        printf("\t��ѡ����Ҫ���е�ѡ�(0-4):");
        scanf("%d",&a);
    }
    {
        switch(a)
        {

            case 1:srxx(stu);break;
            case 2:xcxx(stu);break;
            case 3:sczh(user);break;
            case 4:cxzs(stu);break;
            default :printf(" �������ָ���������������");menu_select1();
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
    printf("\t\t�����:");
    scanf("%d",&a[M].ssh);
    printf("\t\t����:");
    scanf("%s",&a[M].name);
    printf("\t\t�Ա�:");
    scanf("%s",&a[M].sex);
    printf("\t\t��λ��:");
    scanf("%d",&a[M].cwh);
    printf("\t\t�����:");
    scanf("%d",&a[M].fjh);
    printf("\t\tѧ��:");
    scanf("%d",&a[M].ID);
    printf("\n");
    getchar();
    gets(xingming);
    stu[i].name = (char*)malloc(sizeof(char)*(strlen(xingming)+1));
    strcpy(stu[i].name,xingming);
    FILE *fp=fopen(f1,"a+");
    fprintf(fp,"%d %d %d %d %s %s\n",stu[i].ssh,stu[i].fjh,stu[i].cwh,stu[i].ID,stu[i].name,stu[i].sex);
    fclose(fp);
    printf("\n�����ɹ�\n");
    system("pause");
}


void sczh(struct subscriber *a)//ɾ����ͨ�û��ʺ�
{
    int p;
    int i;
    printf("������Ҫɾ�����˻����ʺţ�\n");
    scanf("%d",&p);
    for( i=1;i<M;i++)//i��1��ʼ������Ա�ʺŲ���ɾ��
    {
        if(a[i].yhzh == p) {break ;}//�ҵ�ɾ�����ʺ��������i��Ԫ��
    }
    if(i==M) {printf("��������ʺŲ�����\n");
        system("pause");
        return;

    }
    for(;i<M-1;i++) {user[i] = user[i+1];}
    M--;
    writetofile();
    printf("/nɾ���ɹ�/n");
    system("pause");
}


void cx(struct student *a)//��ѯѧ����Ϣ
{
    int p,i;
    printf("��ѡ���ѯ��ʽ��\n");
    printf("1.������Ų�ѯ\t2.��ס��ѧ��ѧ�Ų�ѯ\n");
    scanf("%d",&p);
    if(p == 1)
    {
        int dorm1;
        printf("����������ţ�");scanf("%d",&dorm1);
        for(i=0;i<N;i++)
        {
            if(a[i].ssh == dorm1) {break;}
        }
        if(i == N){printf("�����������Ų�����\n");system("pause");return ;}
    }
    else if(p == 2)
    {
        long myID;
        printf("������ѧ��ѧ�ţ�");
        scanf("%ld",&myID);
        for(i=0;i<N;i++)
        {
            if(a[i].ID == myID) {system("pause");break ;}
        }
        if(i == N) {printf("�������ѧ�Ų�����\n");return ;}
    }
    printf("��ѯ�ɹ���ѧ����Ϣ���£�\n");
    printf("����ţ�%d\n",a[i].ssh);
    printf("������%s\n",a[i].name);
    printf("�Ա�%s\n",a[i].sex);
    printf("��λ�ţ�%d\n",a[i].cwh);
    printf("����ţ�%d\n",a[i].fjh);
    printf("ѧ�ţ�%ld\n",a[i].ID);
    printf("�绰���룺%ld\n",a[i].dhhm);
    system("pause");
}


void reset_password(struct subscriber *a)//������ͨ�û��ʺ�����
{
    int p;
    int i;
    char newpassword[15];
    printf("������Ҫ���õ��˻����ʺţ�\n");
    scanf("%d",&p);
    for(i=1;i<M;i++)//i��1��ʼ������Ա�ʺŲ�������
    {
        if(a[i].yhzh == p) {break ;}//�ҵ����õ��ʺ��������i��Ԫ��
    }
    if(i==M) {printf("��������ʺŲ�����\n");system("pause");return ;}
    printf("�������˻��������룺\n");
    getchar();//����pʱ���һ�����з�Ҳ��Ϊ�ַ��ᱻ��������룬�˺������ڳԵ����з�
    gets(newpassword);
    a[i].password = newpassword;
    writetofile();
    printf("/n���óɹ�/n");
    system("pause");
}


void cxzs(struct student*a)//��ѯס����Ϣ
{
    int p,i;
    printf("��ѡ���ѯ��ʽ��\n");
    printf("1.������Ų�ѯ\t2.��ס��ѧ����Ϣ��ѯ\n");
    scanf("%d",&p);
    if(p == 1)
    {
        int dorm1;
        printf("����������ţ�");scanf("%d",&dorm1);
        for(i=0;i<N;i++)
        {
            if(a[i].ssh == dorm1) {break;}
        }
        if(i == N){printf("�����������Ų�����\n");system("pause");return ;}
    }
    else if(p == 2)
    {
        long myID;
        printf("������ѧ��ѧ�ţ�");
        scanf("%ld",&myID);
        for(i=0;i<N;i++)
        {
            if(a[i].ID == myID) {system("pause");break ;}
        }
        if(i == N) {printf("�������ѧ�Ų�����\n");return ;}
    }
    printf("��ѯ�ɹ���ѧ����Ϣ���£�\n");
    printf("����ţ�%d\n",a[i].ssh);
    printf("��λ�ţ�%d\n",a[i].cwh);
    printf("������%s\n",a[i].name);
    printf("ѧ�ţ�%ld\n",a[i].ID);
    printf("�绰���룺%ld\n",a[i].dhhm);
    printf("�Ա�%s\n",a[i].sex);
    printf("����ţ�%d\n",a[i].fjh);
    system("pause");
}

