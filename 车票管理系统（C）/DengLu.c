#include <stdio.h>
#include <string.h>
#include "item.h"
void DengLu(){
	char a[10]={0},b[10]={0},c[10]={'1'},d[10]={'2'},ID[10]={'1','2','3','4','5','6'},Password[15]={'6','5','4','3','2','1'};
	while(1){
		printf("\n\n\n\n\n\n\n\n"); 
		printf("\t\t\t\t\t\t\t\t  ******************************************************\n");    //��½���� 
		printf("\t\t\t\t\t\t\t\t  *****************��ӭʹ�ó�Ʊ����ϵͳ*****************\n");
		printf("\t\t\t\t\t\t\t\t  ******************************************************\n");
		printf("\t\t\t\t\t\t\t\t  ******************************************************\n");
		printf("\t\t\t\t\t\t\t\t  *                   ��ѡ���¼��ʽ                   *\n");
		printf("\t\t\t\t\t\t\t\t  *                                                    *\n");
		printf("\t\t\t\t\t\t\t\t  *                     1.�ο͵�½                     *\n");
		printf("\t\t\t\t\t\t\t\t  *                    2.����Ա��½                    *\n");
		printf("\t\t\t\t\t\t\t\t  *                                                    *\n");
		printf("\t\t\t\t\t\t\t\t  ******************************************************\n");
		printf("\t\t\t\t\t\t\t\t  ******************************************************\n\n");
		printf("\t\t\t\t\t\t\t\t  �������¼��ʽ��");
		gets(a);    //�����½��ʽ 
		fflush(stdin); 
		if(strcmp(a,c)==0){    //�����ж� 
			fflush(stdin);
			tourist();
			break;
		}
		else if(strcmp(a,d)==0){
			fflush(stdin);
			while(1){
				printf("\t\t\t\t\t\t\t\t  ���������Ա�û���: ");
				gets(b);
				if(strcmp(b,ID)==0){
					printf("\t\t\t\t\t\t\t\t  ���������Ա����: ");
					gets(c);
					if(strcmp(c,Password)==0){
						fflush(stdin);
						administer();
						break;
					}
					else{ 
					printf("\t\t\t\t\t\t\t\t  ��������������ٴ�����\n");
					system("pause");
					system("cls");
					break;
					}
				} 
				else{ 
					printf("\t\t\t\t\t\t\t\t  �û�������������ٴ�����\n");
					system("pause");
					system("cls");
					break;
				}
				} 
				break;
			} 
		else{
			fflush(stdin);
			printf("\t\t\t\t\t\t\t\t  �����������������\n");
			system("pause");
			system("cls");
		}
	}
} 
