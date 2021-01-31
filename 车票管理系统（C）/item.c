#include <stdio.h>
#include <string.h>
void administer(){	
	char a;
	while(1){
		system("cls");
		printf("\n\n\n\n\n\n\n\n");
		printf("\t\t\t\t\t\t\t\t  ******************************************************\n");    // 服务界面 
		printf("\t\t\t\t\t\t\t\t  *                     请选择服务                     *\n");
		printf("\t\t\t\t\t\t\t\t  ******************************************************\n");
		printf("\t\t\t\t\t\t\t\t  *                   1.录入班次信息                   *\n");
		printf("\t\t\t\t\t\t\t\t  *                   2.浏览班次信息                   *\n");
		printf("\t\t\t\t\t\t\t\t  *                   3.查询路线                       *\n");
		printf("\t\t\t\t\t\t\t\t  *                   4.售票                           *\n");
		printf("\t\t\t\t\t\t\t\t  *                   5.退票                           *\n");
		printf("\t\t\t\t\t\t\t\t  *                   6.退出                           *\n");
		printf("\t\t\t\t\t\t\t\t  ******************************************************\n\n");
		fflush(stdin);
		printf("\t\t\t\t\t\t\t\t\t请输入: ");
		scanf("%s",&a);//选择功能 
		fflush(stdin);
		system("cls");
		//进行判断 
		if(a=='1'){ 
			addticket();  //录入班次信息 
			continue;
		}
		else if(a=='2'){
			browse();
			fflush(stdin);  //浏览班次信息 
			continue;
		}
		else if(a=='3'){
			research();  //查询路线 
			fflush(stdin);
			continue;
		}
		else if(a=='4'){
			buyticket();  //售票 
			continue;
		}
		else if(a=='5'){
			refundticket();  //退票 
			fflush(stdin);
			continue;
		}
		else if(a=='6'){
			system("cls");
			break;  //退出 
		}
		else {
			fflush(stdin);
			printf("\n\n\t\t\t\t\t\t\t\t  输入错误，请重新输入\n");
			system("pause");
		}
	}
}

void tourist(){
	char a;
	while(1){
		system("cls");
		printf("\n\n\n\n");
		printf("\t\t\t\t\t\t\t\t  ******************************************************\n");    // 服务界面
		printf("\t\t\t\t\t\t\t\t  *                     请选择服务                     *\n");
		printf("\t\t\t\t\t\t\t\t  ******************************************************\n");
		printf("\t\t\t\t\t\t\t\t  *                   1.浏览班次信息                   *\n");
		printf("\t\t\t\t\t\t\t\t  *                   2.查询路线                       *\n");
		printf("\t\t\t\t\t\t\t\t  *                   3.售票                           *\n");
		printf("\t\t\t\t\t\t\t\t  *                   4.退票                           *\n");
		printf("\t\t\t\t\t\t\t\t  *                   5.退出                           *\n");
		printf("\t\t\t\t\t\t\t\t  ******************************************************\n\n");	
		printf("\t\t\t\t\t\t\t\t  请输入: ");
		scanf("%s",&a);//选择功能 
		fflush(stdin);
		system("cls");
		//进行判断 
		if(a=='1'){ 
			browse();  //浏览班次信息 
			fflush(stdin);
			continue;
		}
		else if(a=='2'){
			research();  //查询路线 
			fflush(stdin);
			continue;
		}
		else if(a=='3'){
			buyticket();  //售票 
			fflush(stdin);
			continue;
		}
		else if(a=='4'){
			refundticket();  //退票 
			fflush(stdin);
			continue;
		}
		else if(a=='5'){
			system("cls");
			break;  //退票 
		}
		else {
			fflush(stdin);
			printf("\n\n\t\t\t\t\t\t\t\t  输入错误，请重新输入\n");
			system("pause");
			continue;
		}
	}	
}


