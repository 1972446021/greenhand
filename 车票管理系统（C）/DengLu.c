#include <stdio.h>
#include <string.h>
#include "item.h"
void DengLu(){
	char a[10]={0},b[10]={0},c[10]={'1'},d[10]={'2'},ID[10]={'1','2','3','4','5','6'},Password[15]={'6','5','4','3','2','1'};
	while(1){
		printf("\n\n\n\n\n\n\n\n"); 
		printf("\t\t\t\t\t\t\t\t  ******************************************************\n");    //登陆界面 
		printf("\t\t\t\t\t\t\t\t  *****************欢迎使用车票管理系统*****************\n");
		printf("\t\t\t\t\t\t\t\t  ******************************************************\n");
		printf("\t\t\t\t\t\t\t\t  ******************************************************\n");
		printf("\t\t\t\t\t\t\t\t  *                   请选择登录方式                   *\n");
		printf("\t\t\t\t\t\t\t\t  *                                                    *\n");
		printf("\t\t\t\t\t\t\t\t  *                     1.游客登陆                     *\n");
		printf("\t\t\t\t\t\t\t\t  *                    2.管理员登陆                    *\n");
		printf("\t\t\t\t\t\t\t\t  *                                                    *\n");
		printf("\t\t\t\t\t\t\t\t  ******************************************************\n");
		printf("\t\t\t\t\t\t\t\t  ******************************************************\n\n");
		printf("\t\t\t\t\t\t\t\t  请输入登录方式：");
		gets(a);    //输入登陆方式 
		fflush(stdin); 
		if(strcmp(a,c)==0){    //进行判断 
			fflush(stdin);
			tourist();
			break;
		}
		else if(strcmp(a,d)==0){
			fflush(stdin);
			while(1){
				printf("\t\t\t\t\t\t\t\t  请输入管理员用户名: ");
				gets(b);
				if(strcmp(b,ID)==0){
					printf("\t\t\t\t\t\t\t\t  请输入管理员密码: ");
					gets(c);
					if(strcmp(c,Password)==0){
						fflush(stdin);
						administer();
						break;
					}
					else{ 
					printf("\t\t\t\t\t\t\t\t  密码输入错误，请再次输入\n");
					system("pause");
					system("cls");
					break;
					}
				} 
				else{ 
					printf("\t\t\t\t\t\t\t\t  用户名输入错误，请再次输入\n");
					system("pause");
					system("cls");
					break;
				}
				} 
				break;
			} 
		else{
			fflush(stdin);
			printf("\t\t\t\t\t\t\t\t  输入错误，请重新输入\n");
			system("pause");
			system("cls");
		}
	}
} 
