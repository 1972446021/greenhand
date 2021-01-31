#include <stdio.h>
#include <string.h>
#include <time.h>
void buyticket()  /** 售票系统 **/
{
	time_t current = time(NULL);//获取当前系统时间 
	struct tm *ptr;
	char date_time[21];
	int hour;
	strftime(date_time, sizeof(date_time), "%H：%M\n", localtime(&current));
	
    char name3[100];
    char name4[100];
    int flag=0;
    int a,i,j;
    struct ticket
    {
        int a;   //车次
        char time1[100];  //发车时间
        char name1[100];   //始发站
        char name2[100];   //终点站
        float time2;      //行车时间
        int biggest;    //额定载客量
        int people;     //已订票人数
    } ticket[50];
    fflush(stdin);
    printf("\n\n\n\n\n");
    printf("\t\t\t请输入您的起始站：");
    scanf("%s",&name3);
    fflush(stdin);
    printf("\t\t\t请输入您的终点站：");
    scanf("%s",&name4);
    fflush(stdin);
    FILE *file1=fopen("ticket.txt","rb");
      if (file1==NULL)
        {
            printf("File no found\n"); //文件申请失败输出
            return -1;
        }
    for(i=0;!feof(file1);i++)
    {
    	fread(&ticket[i],sizeof(struct ticket),1,file1);
        if((strcmp(ticket[i].name1,name3)==0)&&(strcmp(ticket[i].name2,name4)==0))
        {
        	printf("\t\t\t车次信息如下：\n\n");
        	flag=1;
        	printf("\t\t\t*****************************************************************************************************************************************************\n\n");
        	printf("\t\t\t车次:%d\t\t发车时间:%s\t\t始发站:%s\t\t终点站:%s\t\t行车时间:%.1f\t\t额定载客量:%d\t\t已订票人数:%d\n\n",ticket[i].a,ticket[i].time1,ticket[i].name1,ticket[i].name2,ticket[i].time2,ticket[i].biggest,ticket[i].people);
            printf("\t\t\t*****************************************************************************************************************************************************\n\n");
        }
    }
    if(flag==0)
        {
            printf("\t\t\t对不起，未查询到相关车次信息！");
			system("pause");
        }
    fclose(file1);
    
    if(flag==1)
    {
        FILE *file1=fopen("ticket.txt","rb");
          if (file1==NULL)
        {
            printf("File no found\n"); //文件申请失败输出
            return -1;
        }
        printf("\n\t\t\t当前时间为%s\n",date_time);
        printf("\t\t\t请输入您想购买的车次序号：");
        scanf("%d",&a);
        for(i=0;!feof(file1);i++)
        {
            fread(&ticket[i],sizeof(struct ticket),1,file1);
            if(a==ticket[i].a)
            {
            	if(strcmp(date_time,ticket[i].time1)>=0)//判断当前系统时间与发车时间 
				{
					printf("\n\t\t\t很抱歉，此班已发出，不能售票。");
					system("pause");
					fclose(file1);
					goto L; 
				}
				if(ticket[i].biggest==ticket[i].people)
				{
			        printf("\n\n\t\t\t很抱歉,票已全部售出。\n\t\t");
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
            printf("File no found\n"); //文件申请失败输出
            return -1;
        }
	    for(j=0;j<i;j++)
		{
			fwrite(&ticket[j],sizeof(struct ticket),1,file2);
		}
		fclose(file2);
		printf("\n\t\t\t售票成功！");
		system("pause"); 
    }
    L:;
}

void refundticket()  /** 退票系统 **/
{
	time_t current = time(NULL);
	struct tm *ptr;
	char date_time[21];
	int hour;
	strftime(date_time, sizeof(date_time), "%H：%M\n", localtime(&current));
	
    char name3[100];
    char name4[100];
    int flag=0;
    int a,i,j;
    struct ticket
    {
        int a;   //车次
        char time1[100];  //发车时间
        char name1[100];   //始发站
        char name2[100];   //终点站
        float time2;      //行车时间
        int biggest;    //额定载客量
        int people;     //已订票人数
    } ticket[50];
    fflush(stdin);
    printf("\n\n\n\n\n");
    printf("\t\t\t请输入您的起始站：");
    scanf("%s",&name3);
    fflush(stdin);
    printf("\t\t\t请输入您的终点站：");
    scanf("%s",&name4);
    fflush(stdin);
    FILE *file1=fopen("ticket.txt","rb");
      if (file1==NULL)
        {
            printf("File no found\n"); //文件申请失败输出
            return -1;
        }
    for(i=0;!feof(file1);i++)
    {
    	fread(&ticket[i],sizeof(struct ticket),1,file1);
        if((strcmp(ticket[i].name1,name3)==0)&&(strcmp(ticket[i].name2,name4)==0))
        {
        	printf("\t\t\t车次信息如下：\n\n");
        	flag=1;
        	printf("\t\t\t*****************************************************************************************************************************************************\n\n");
        	printf("\t\t\t车次:%d\t\t发车时间:%s\t\t始发站:%s\t\t终点站:%s\t\t行车时间:%.1f\t\t额定载客量:%d\t\t已订票人数:%d\n\n",ticket[i].a,ticket[i].time1,ticket[i].name1,ticket[i].name2,ticket[i].time2,ticket[i].biggest,ticket[i].people);
            printf("\t\t\t*****************************************************************************************************************************************************\n\n");
        }
    }
    if(flag==0)
        {
            printf("\t\t\t对不起，未查询到相关车次信息！");
			system("pause");
        }
    fclose(file1);
    
    if(flag==1)
    {
        FILE *file1=fopen("ticket.txt","rb");
        printf("\n\t\t\t当前时间为%s\n",date_time);
        printf("\t\t\t请输入您想退还的车次序号：");
        scanf("%d",&a);
        for(i=0;!feof(file1);i++)
        {
            fread(&ticket[i],sizeof(struct ticket),1,file1);
            if(a==ticket[i].a)
            {
            	if(strcmp(date_time,ticket[i].time1)>=0)//判断当前系统时间与发车时间 
				{
					printf("\n\t\t\t很抱歉，此班已发出，不能退票。");
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
            printf("File no found\n"); //文件申请失败输出
            return -1;
        }
	    for(j=0;j<i;j++)
		{
			fwrite(&ticket[j],sizeof(struct ticket),1,file2);
		}
		fclose(file2);
		printf("\n\t\t\t退票成功！");
		system("pause"); 
    }
    L:;
}
