#include <stdio.h>
#include <string.h>
void addticket() /** ¼���γ��� **/
{
	system("cls");
	printf("\n\n\n\n");
	char b;
	int i=0,j,k=0;
	struct ticket
	{
		int a; //����
		char time1[100]; //����ʱ��
		char name1[100]; //���վ
		char name2[100]; //�յ�վ
		float time2; //�г�ʱ��
		int biggest; //��ؿ���
		int people; //�Ѷ�Ʊ����
	} ticket[50];
	
	fflush(stdin);
	FILE *file1=fopen("��Ʊ.txt","a+");
	  if (file1==NULL)
        {
            printf("File no found\n"); //�ļ�����ʧ�����
            return -1;
        }
	while(1)
	{
		printf("\n\t\t\t\t\t\t\t\t  ����: ");//���복�� 
		scanf("%d",&ticket[k].a);
		fflush(stdin);
		fprintf(file1,"%d\t\t",ticket[k].a);
		fflush(file1);
		
		printf("\t\t\t\t\t\t\t\t  ����ʱ�䣺");//���뷢��ʱ�� 
		gets(ticket[k].time1);
		fflush(stdin);
		fprintf(file1,"%s\t\t",ticket[k].time1);
		fflush(file1);
		
		printf("\t\t\t\t\t\t\t\t  ���վ��");//�������վ 
		gets(ticket[k].name1);
		fflush(stdin);
		fprintf(file1,"%s\t\t",ticket[k].name1);
		fflush(file1);
		
		printf("\t\t\t\t\t\t\t\t  �յ�վ��");//�����յ�վ 
		gets(ticket[k].name2);
		fflush(stdin);
		fprintf(file1,"%s\t\t",ticket[k].name2);
		fflush(file1);
		
		printf("\t\t\t\t\t\t\t\t  �г�ʱ�䣺");//�����г�ʱ�� 
		scanf("%f",&ticket[k].time2);
		fflush(stdin);
		fprintf(file1,"%f\t\t",ticket[k].time2);
		fflush(file1);
		
		printf("\t\t\t\t\t\t\t\t  ��ؿ�����");//�����ؿ��� 
		scanf("%d",&ticket[k].biggest);
		fflush(stdin);
		fprintf(file1,"%d\t\t\n",ticket[k].biggest);
		fflush(file1);
		
		printf("\t\t\t\t\t\t\t\t  �Ѷ�Ʊ������");//�����Ѷ�Ʊ���� 
		scanf("%d",&ticket[k].people);
		fflush(stdin);
		fflush(file1);
		
		FILE *file2=fopen("ticket.txt","a+");
		fwrite(&ticket[k],sizeof(struct ticket),1,file2);
		fclose(file2);
		printf("\t\t\t\t\t\t\t\t  ����ɹ���");
		
		while(1)
		{
			printf("\n\t\t\t\t\t\t\t\t  �Ƿ��������[Y/N]: ");
			scanf("%c",&b);
			if(b=='n'||b=='N'){
				goto L;  //�˳� 
			}
			else if(b=='y'||b=='Y'){
				fflush(stdin);
				printf("\n");
				break;  //�������� 
				}
			else if(b!='y'&&b!='Y'){
				printf("\t\t\t\t\t\t\t\t  �����������������");
				fflush(stdin);
				system("pause");}
		}
	}
	L:fclose(file1);
	system("pause");
}
