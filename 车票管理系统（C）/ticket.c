#include <stdio.h>
#include <string.h>
#include <time.h>
void buyticket()  /** ��Ʊϵͳ **/
{
	time_t current = time(NULL);//��ȡ��ǰϵͳʱ�� 
	struct tm *ptr;
	char date_time[21];
	int hour;
	strftime(date_time, sizeof(date_time), "%H��%M\n", localtime(&current));
	
    char name3[100];
    char name4[100];
    int flag=0;
    int a,i,j;
    struct ticket
    {
        int a;   //����
        char time1[100];  //����ʱ��
        char name1[100];   //ʼ��վ
        char name2[100];   //�յ�վ
        float time2;      //�г�ʱ��
        int biggest;    //��ؿ���
        int people;     //�Ѷ�Ʊ����
    } ticket[50];
    fflush(stdin);
    printf("\n\n\n\n\n");
    printf("\t\t\t������������ʼվ��");
    scanf("%s",&name3);
    fflush(stdin);
    printf("\t\t\t�����������յ�վ��");
    scanf("%s",&name4);
    fflush(stdin);
    FILE *file1=fopen("ticket.txt","rb");
      if (file1==NULL)
        {
            printf("File no found\n"); //�ļ�����ʧ�����
            return -1;
        }
    for(i=0;!feof(file1);i++)
    {
    	fread(&ticket[i],sizeof(struct ticket),1,file1);
        if((strcmp(ticket[i].name1,name3)==0)&&(strcmp(ticket[i].name2,name4)==0))
        {
        	printf("\t\t\t������Ϣ���£�\n\n");
        	flag=1;
        	printf("\t\t\t*****************************************************************************************************************************************************\n\n");
        	printf("\t\t\t����:%d\t\t����ʱ��:%s\t\tʼ��վ:%s\t\t�յ�վ:%s\t\t�г�ʱ��:%.1f\t\t��ؿ���:%d\t\t�Ѷ�Ʊ����:%d\n\n",ticket[i].a,ticket[i].time1,ticket[i].name1,ticket[i].name2,ticket[i].time2,ticket[i].biggest,ticket[i].people);
            printf("\t\t\t*****************************************************************************************************************************************************\n\n");
        }
    }
    if(flag==0)
        {
            printf("\t\t\t�Բ���δ��ѯ����س�����Ϣ��");
			system("pause");
        }
    fclose(file1);
    
    if(flag==1)
    {
        FILE *file1=fopen("ticket.txt","rb");
          if (file1==NULL)
        {
            printf("File no found\n"); //�ļ�����ʧ�����
            return -1;
        }
        printf("\n\t\t\t��ǰʱ��Ϊ%s\n",date_time);
        printf("\t\t\t���������빺��ĳ�����ţ�");
        scanf("%d",&a);
        for(i=0;!feof(file1);i++)
        {
            fread(&ticket[i],sizeof(struct ticket),1,file1);
            if(a==ticket[i].a)
            {
            	if(strcmp(date_time,ticket[i].time1)>=0)//�жϵ�ǰϵͳʱ���뷢��ʱ�� 
				{
					printf("\n\t\t\t�ܱ�Ǹ���˰��ѷ�����������Ʊ��");
					system("pause");
					fclose(file1);
					goto L; 
				}
				if(ticket[i].biggest==ticket[i].people)
				{
			        printf("\n\n\t\t\t�ܱ�Ǹ,Ʊ��ȫ���۳���\n\t\t");
					system("pause");
					fclose(file1);
					goto L; 
				}
            	ticket[i].people=ticket[i].people+1;
            }            
        }
        fclose(file1);
        FILE *file2=fopen("ticket.txt","w+");
          if (file2==NULL)
        {
            printf("File no found\n"); //�ļ�����ʧ�����
            return -1;
        }
	    for(j=0;j<i;j++)
		{
			fwrite(&ticket[j],sizeof(struct ticket),1,file2);
		}
		fclose(file2);
		printf("\n\t\t\t��Ʊ�ɹ���");
		system("pause"); 
    }
    L:;
}

void refundticket()  /** ��Ʊϵͳ **/
{
	time_t current = time(NULL);
	struct tm *ptr;
	char date_time[21];
	int hour;
	strftime(date_time, sizeof(date_time), "%H��%M\n", localtime(&current));
	
    char name3[100];
    char name4[100];
    int flag=0;
    int a,i,j;
    struct ticket
    {
        int a;   //����
        char time1[100];  //����ʱ��
        char name1[100];   //ʼ��վ
        char name2[100];   //�յ�վ
        float time2;      //�г�ʱ��
        int biggest;    //��ؿ���
        int people;     //�Ѷ�Ʊ����
    } ticket[50];
    fflush(stdin);
    printf("\n\n\n\n\n");
    printf("\t\t\t������������ʼվ��");
    scanf("%s",&name3);
    fflush(stdin);
    printf("\t\t\t�����������յ�վ��");
    scanf("%s",&name4);
    fflush(stdin);
    FILE *file1=fopen("ticket.txt","rb");
      if (file1==NULL)
        {
            printf("File no found\n"); //�ļ�����ʧ�����
            return -1;
        }
    for(i=0;!feof(file1);i++)
    {
    	fread(&ticket[i],sizeof(struct ticket),1,file1);
        if((strcmp(ticket[i].name1,name3)==0)&&(strcmp(ticket[i].name2,name4)==0))
        {
        	printf("\t\t\t������Ϣ���£�\n\n");
        	flag=1;
        	printf("\t\t\t*****************************************************************************************************************************************************\n\n");
        	printf("\t\t\t����:%d\t\t����ʱ��:%s\t\tʼ��վ:%s\t\t�յ�վ:%s\t\t�г�ʱ��:%.1f\t\t��ؿ���:%d\t\t�Ѷ�Ʊ����:%d\n\n",ticket[i].a,ticket[i].time1,ticket[i].name1,ticket[i].name2,ticket[i].time2,ticket[i].biggest,ticket[i].people);
            printf("\t\t\t*****************************************************************************************************************************************************\n\n");
        }
    }
    if(flag==0)
        {
            printf("\t\t\t�Բ���δ��ѯ����س�����Ϣ��");
			system("pause");
        }
    fclose(file1);
    
    if(flag==1)
    {
        FILE *file1=fopen("ticket.txt","rb");
        printf("\n\t\t\t��ǰʱ��Ϊ%s\n",date_time);
        printf("\t\t\t�����������˻��ĳ�����ţ�");
        scanf("%d",&a);
        for(i=0;!feof(file1);i++)
        {
            fread(&ticket[i],sizeof(struct ticket),1,file1);
            if(a==ticket[i].a)
            {
            	if(strcmp(date_time,ticket[i].time1)>=0)//�жϵ�ǰϵͳʱ���뷢��ʱ�� 
				{
					printf("\n\t\t\t�ܱ�Ǹ���˰��ѷ�����������Ʊ��");
					system("pause");
					fclose(file1);
					goto L; 
				}
            	ticket[i].people=ticket[i].people-1;
            }            
        }
        fclose(file1);
        FILE *file2=fopen("ticket.txt","w+");
          if (file2==NULL)
        {
            printf("File no found\n"); //�ļ�����ʧ�����
            return -1;
        }
	    for(j=0;j<i;j++)
		{
			fwrite(&ticket[j],sizeof(struct ticket),1,file2);
		}
		fclose(file2);
		printf("\n\t\t\t��Ʊ�ɹ���");
		system("pause"); 
    }
    L:;
}
