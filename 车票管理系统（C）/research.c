#include <stdio.h>
#include <string.h>
void research()  /** ��ѯ·�� **/
{
    char ch;
    int flag1=0,flag2=0;
    int i;
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
    
    struct research
    {
        int b;
        char name[5];
    }resea;
    
    printf("\n\n\n\n\n");
    printf("\t\t\t\t\t\t\t\t  �������ѯ��ʽ(1.��β�ѯ,2.�յ�վ��ѯ): ");
    FILE *file1=fopen("ticket.txt","rb");
      if (file1==NULL)
        {
            printf("File no found\n"); //�ļ�����ʧ�����
            return -1;
        }
    scanf("%c",&ch);
    fflush(stdin);
    if(ch=='1')
    {
        printf("\t\t\t\t\t\t\t\t  ������������İ�Σ�");
        scanf("%d",&resea.b);
        fflush(stdin);
        for(i=1;!feof(file1);i++)
        {
            fread(&ticket[i],sizeof(struct ticket),1,file1);
            fflush(stdin);
            if(ticket[i].a==resea.b)
            {
                printf("\t\t\t\t\t\t\t\t  ���ĳ�����Ϣ���£�\n\n");
                printf("\t\t*****************************************************************************************************************************************************\n\n");
                printf("\t\t����:%d\t\t����ʱ��:%s\t\tʼ��վ:%s\t\t�յ�վ:%s\t\t�г�ʱ��:%.1f\t\t��ؿ���:%d\t\t�Ѷ�Ʊ����:%d\n\n",ticket[i].a,ticket[i].time1,ticket[i].name1,ticket[i].name2,ticket[i].time2,ticket[i].biggest,ticket[i].people);
				printf("\t\t*****************************************************************************************************************************************************\n");
				flag1=1;
				break;
            }
        }
        fclose(file1);
		if(flag1==0)
        {
            printf("\t\t\t\t\t\t\t\t  �Բ���δ��ѯ����صĳ�����Ϣ��");
        }
        system("pause");
	}
	if(ch=='2')
	{
	    printf("\t\t\t\t\t\t\t\t  ��������������ε��յ�վ��");
	    scanf("%s",resea.name);
	    fflush(stdin);
	    for(i=1;!feof(file1);i++)
        {
            fread(&ticket[i],sizeof(struct ticket),1,file1);
            fflush(stdin);
            if(strcmp(ticket[i].name2,resea.name)==0)
            {
            	if(flag2==0)
                	printf("\t\t\t\t\t\t\t\t  ���ĳ�����Ϣ���£�\n\n");
                printf("\t\t*****************************************************************************************************************************************************\n\n");
                printf("\t\t����:%d\t\t����ʱ��:%s\t\tʼ��վ:%s\t\t�յ�վ:%s\t\t�г�ʱ��:%.1f\t\t��ؿ���:%d\t\t�Ѷ�Ʊ����:%d\n\n",ticket[i].a,ticket[i].time1,ticket[i].name1,ticket[i].name2,ticket[i].time2,ticket[i].biggest,ticket[i].people);
				printf("\t\t*****************************************************************************************************************************************************\n");
				flag2=1;
            }
        }      
	    fclose(file1);
	    if(flag2==0)
	    {
	        printf("\t\t\t\t\t\t\t\t  �Բ���δ��ѯ����صĳ�����Ϣ��");
	    }
	    system("pause");  
	}
}

void browse() /** ���·�� **/
{	
	int i;
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
	FILE *file1=fopen("ticket.txt","rb");
	  if (file1==NULL)
        {
            printf("File no found\n"); //�ļ�����ʧ�����
            return -1;
        }
	printf("\n\n\n\n\n");
	for(i=0;!feof(file1);i++)
    {
    	fread(&ticket[i],sizeof(struct ticket),1,file1);
    	if(ticket[i].a==0)
    		{
    			break;
			}
		printf("\t\t*****************************************************************************************************************************************************\n");
        printf("\n\t\t����:%d\t\t����ʱ��:%s\t\tʼ��վ:%s\t\t�յ�վ:%s\t\t�г�ʱ��:%.1f\t\t��ؿ���:%d\t\t�Ѷ�Ʊ����:%d\n\n",ticket[i].a,ticket[i].time1,ticket[i].name1,ticket[i].name2,ticket[i].time2,ticket[i].biggest,ticket[i].people);  
    }
    printf("\t\t*****************************************************************************************************************************************************");
    printf("\n\t\t");
	system("pause");
}
