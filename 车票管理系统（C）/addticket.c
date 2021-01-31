#include <stdio.h>
#include <string.h>
void addticket() /** 录入班次车次 **/
{
	system("cls");
	printf("\n\n\n\n");
	char b;
	int i=0,j,k=0;
	struct ticket
	{
		int a; //车次
		char time1[100]; //发车时间
		char name1[100]; //起点站
		char name2[100]; //终点站
		float time2; //行车时间
		int biggest; //额定载客量
		int people; //已订票人数
	} ticket[50];
	
	fflush(stdin);
	FILE *file1=fopen("车票.txt","a+");
	  if (file1==NULL)
        {
            printf("File no found\n"); //文件申请失败输出
            return -1;
        }
	while(1)
	{
		printf("\n\t\t\t\t\t\t\t\t  车次: ");//输入车次 
		scanf("%d",&ticket[k].a);
		fflush(stdin);
		fprintf(file1,"%d\t\t",ticket[k].a);
		fflush(file1);
		
		printf("\t\t\t\t\t\t\t\t  发车时间：");//输入发车时间 
		gets(ticket[k].time1);
		fflush(stdin);
		fprintf(file1,"%s\t\t",ticket[k].time1);
		fflush(file1);
		
		printf("\t\t\t\t\t\t\t\t  起点站：");//输入起点站 
		gets(ticket[k].name1);
		fflush(stdin);
		fprintf(file1,"%s\t\t",ticket[k].name1);
		fflush(file1);
		
		printf("\t\t\t\t\t\t\t\t  终点站：");//输入终点站 
		gets(ticket[k].name2);
		fflush(stdin);
		fprintf(file1,"%s\t\t",ticket[k].name2);
		fflush(file1);
		
		printf("\t\t\t\t\t\t\t\t  行车时间：");//输入行车时间 
		scanf("%f",&ticket[k].time2);
		fflush(stdin);
		fprintf(file1,"%f\t\t",ticket[k].time2);
		fflush(file1);
		
		printf("\t\t\t\t\t\t\t\t  额定载客量：");//输入额定载客量 
		scanf("%d",&ticket[k].biggest);
		fflush(stdin);
		fprintf(file1,"%d\t\t\n",ticket[k].biggest);
		fflush(file1);
		
		printf("\t\t\t\t\t\t\t\t  已订票人数：");//输入已订票人数 
		scanf("%d",&ticket[k].people);
		fflush(stdin);
		fflush(file1);
		
		FILE *file2=fopen("ticket.txt","a+");
		fwrite(&ticket[k],sizeof(struct ticket),1,file2);
		fclose(file2);
		printf("\t\t\t\t\t\t\t\t  保存成功！");
		
		while(1)
		{
			printf("\n\t\t\t\t\t\t\t\t  是否继续输入[Y/N]: ");
			scanf("%c",&b);
			if(b=='n'||b=='N'){
				goto L;  //退出 
			}
			else if(b=='y'||b=='Y'){
				fflush(stdin);
				printf("\n");
				break;  //继续输入 
				}
			else if(b!='y'&&b!='Y'){
				printf("\t\t\t\t\t\t\t\t  输入错误，请重新输入");
				fflush(stdin);
				system("pause");}
		}
	}
	L:fclose(file1);
	system("pause");
}
