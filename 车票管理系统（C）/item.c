#include <stdio.h>
#include <string.h>
void administer(){	
	char a;
	while(1){
		system("cls");
		printf("\n\n\n\n\n\n\n\n");
		printf("\t\t\t\t\t\t\t\t  ******************************************************\n");    // ������� 
		printf("\t\t\t\t\t\t\t\t  *                     ��ѡ�����                     *\n");
		printf("\t\t\t\t\t\t\t\t  ******************************************************\n");
		printf("\t\t\t\t\t\t\t\t  *                   1.¼������Ϣ                   *\n");
		printf("\t\t\t\t\t\t\t\t  *                   2.��������Ϣ                   *\n");
		printf("\t\t\t\t\t\t\t\t  *                   3.��ѯ·��                       *\n");
		printf("\t\t\t\t\t\t\t\t  *                   4.��Ʊ                           *\n");
		printf("\t\t\t\t\t\t\t\t  *                   5.��Ʊ                           *\n");
		printf("\t\t\t\t\t\t\t\t  *                   6.�˳�                           *\n");
		printf("\t\t\t\t\t\t\t\t  ******************************************************\n\n");
		fflush(stdin);
		printf("\t\t\t\t\t\t\t\t\t������: ");
		scanf("%s",&a);//ѡ���� 
		fflush(stdin);
		system("cls");
		//�����ж� 
		if(a=='1'){ 
			addticket();  //¼������Ϣ 
			continue;
		}
		else if(a=='2'){
			browse();
			fflush(stdin);  //��������Ϣ 
			continue;
		}
		else if(a=='3'){
			research();  //��ѯ·�� 
			fflush(stdin);
			continue;
		}
		else if(a=='4'){
			buyticket();  //��Ʊ 
			continue;
		}
		else if(a=='5'){
			refundticket();  //��Ʊ 
			fflush(stdin);
			continue;
		}
		else if(a=='6'){
			system("cls");
			break;  //�˳� 
		}
		else {
			fflush(stdin);
			printf("\n\n\t\t\t\t\t\t\t\t  �����������������\n");
			system("pause");
		}
	}
}

void tourist(){
	char a;
	while(1){
		system("cls");
		printf("\n\n\n\n");
		printf("\t\t\t\t\t\t\t\t  ******************************************************\n");    // �������
		printf("\t\t\t\t\t\t\t\t  *                     ��ѡ�����                     *\n");
		printf("\t\t\t\t\t\t\t\t  ******************************************************\n");
		printf("\t\t\t\t\t\t\t\t  *                   1.��������Ϣ                   *\n");
		printf("\t\t\t\t\t\t\t\t  *                   2.��ѯ·��                       *\n");
		printf("\t\t\t\t\t\t\t\t  *                   3.��Ʊ                           *\n");
		printf("\t\t\t\t\t\t\t\t  *                   4.��Ʊ                           *\n");
		printf("\t\t\t\t\t\t\t\t  *                   5.�˳�                           *\n");
		printf("\t\t\t\t\t\t\t\t  ******************************************************\n\n");	
		printf("\t\t\t\t\t\t\t\t  ������: ");
		scanf("%s",&a);//ѡ���� 
		fflush(stdin);
		system("cls");
		//�����ж� 
		if(a=='1'){ 
			browse();  //��������Ϣ 
			fflush(stdin);
			continue;
		}
		else if(a=='2'){
			research();  //��ѯ·�� 
			fflush(stdin);
			continue;
		}
		else if(a=='3'){
			buyticket();  //��Ʊ 
			fflush(stdin);
			continue;
		}
		else if(a=='4'){
			refundticket();  //��Ʊ 
			fflush(stdin);
			continue;
		}
		else if(a=='5'){
			system("cls");
			break;  //��Ʊ 
		}
		else {
			fflush(stdin);
			printf("\n\n\t\t\t\t\t\t\t\t  �����������������\n");
			system("pause");
			continue;
		}
	}	
}


