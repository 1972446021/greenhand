#include <stdio.h>
#include <string.h>
void research()  /** 查询路线 **/
{
    char ch;
    int flag1=0,flag2=0;
    int i;
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
    
    struct research
    {
        int b;
        char name[5];
    }resea;
    
    printf("\n\n\n\n\n");
    printf("\t\t\t\t\t\t\t\t  请输入查询方式(1.班次查询,2.终点站查询): ");
    FILE *file1=fopen("ticket.txt","rb");
      if (file1==NULL)
        {
            printf("File no found\n"); //文件申请失败输出
            return -1;
        }
    scanf("%c",&ch);
    fflush(stdin);
    if(ch=='1')
    {
        printf("\t\t\t\t\t\t\t\t  请输入你乘坐的班次：");
        scanf("%d",&resea.b);
        fflush(stdin);
        for(i=1;!feof(file1);i++)
        {
            fread(&ticket[i],sizeof(struct ticket),1,file1);
            fflush(stdin);
            if(ticket[i].a==resea.b)
            {
                printf("\t\t\t\t\t\t\t\t  您的车次信息如下：\n\n");
                printf("\t\t*****************************************************************************************************************************************************\n\n");
                printf("\t\t车次:%d\t\t发车时间:%s\t\t始发站:%s\t\t终点站:%s\t\t行车时间:%.1f\t\t额定载客量:%d\t\t已订票人数:%d\n\n",ticket[i].a,ticket[i].time1,ticket[i].name1,ticket[i].name2,ticket[i].time2,ticket[i].biggest,ticket[i].people);
				printf("\t\t*****************************************************************************************************************************************************\n");
				flag1=1;
				break;
            }
        }
        fclose(file1);
		if(flag1==0)
        {
            printf("\t\t\t\t\t\t\t\t  对不起，未查询到相关的车次信息！");
        }
        system("pause");
	}
	if(ch=='2')
	{
	    printf("\t\t\t\t\t\t\t\t  请输入你乘坐车次的终点站：");
	    scanf("%s",resea.name);
	    fflush(stdin);
	    for(i=1;!feof(file1);i++)
        {
            fread(&ticket[i],sizeof(struct ticket),1,file1);
            fflush(stdin);
            if(strcmp(ticket[i].name2,resea.name)==0)
            {
            	if(flag2==0)
                	printf("\t\t\t\t\t\t\t\t  您的车次信息如下：\n\n");
                printf("\t\t*****************************************************************************************************************************************************\n\n");
                printf("\t\t车次:%d\t\t发车时间:%s\t\t始发站:%s\t\t终点站:%s\t\t行车时间:%.1f\t\t额定载客量:%d\t\t已订票人数:%d\n\n",ticket[i].a,ticket[i].time1,ticket[i].name1,ticket[i].name2,ticket[i].time2,ticket[i].biggest,ticket[i].people);
				printf("\t\t*****************************************************************************************************************************************************\n");
				flag2=1;
            }
        }      
	    fclose(file1);
	    if(flag2==0)
	    {
	        printf("\t\t\t\t\t\t\t\t  对不起，未查询到相关的车次信息！");
	    }
	    system("pause");  
	}
}

void browse() /** 浏览路线 **/
{	
	int i;
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
	FILE *file1=fopen("ticket.txt","rb");
	  if (file1==NULL)
        {
            printf("File no found\n"); //文件申请失败输出
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
        printf("\n\t\t车次:%d\t\t发车时间:%s\t\t始发站:%s\t\t终点站:%s\t\t行车时间:%.1f\t\t额定载客量:%d\t\t已订票人数:%d\n\n",ticket[i].a,ticket[i].time1,ticket[i].name1,ticket[i].name2,ticket[i].time2,ticket[i].biggest,ticket[i].people);  
    }
    printf("\t\t*****************************************************************************************************************************************************");
    printf("\n\t\t");
	system("pause");
}
