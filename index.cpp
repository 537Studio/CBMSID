#include <iostream>
#include <cstdio>
#include <algorithm>
#include <time.h>
#include <stdio.h>
#include <windows.h> 
using namespace std;
int n[5]={};
void num(int a,int b,int c){
	if(a==3){
		for(int j=0;j<b;j++){
			for(int i=0;i<5;i++){
				if(c==29){
					c=30;
				}else if(c==20){
					c=21;
				}else if(c==47){
					c=1;
				}else if(c==22){
					c=23;
				} 
				n[i]=c;
				c++;
			}
		}
	}else if(a==4){
		for(int j=0;j<(23+b);j++){
			for(int i=0;i<5;i++){
				if(c==29){
					c=30;
				}else if(c==20){
					c=21;
				}else if(c==47){
					c=1;
				}else if(c==22){
					c=23;
				}
				n[i]=c;
				c++;
			}
		}
	}else if(a==5){
		for(int j=0;j<(43+b);j++){
			for(int i=0;i<5;i++){
				if(c==29){
					c=30;
				}else if(c==20){
					c=21;
				}else if(c==47){
					c=1;
				}else if(c==22){
					c=23;
				}
				n[i]=c;
				c++;
			}
		}
	}else if(a==6){
		for(int j=0;j<(66+b);j++){
			for(int i=0;i<5;i++){
				if(c==29){
					c=30;
				}else if(c==20){
					c=21;
				}else if(c==47){
					c=1;
				}else if(c==22){
					c=23;
				}
				n[i]=c;
				c++;
			}
		}
	}
	
}
int main(){
	int yue=0,ri=0,ri1=0,x=0;
	MessageBox(NULL,"���ڴ����Ϸֱ�������Ӧ�����ڡ�","�����Ͱͬѧ",MB_OK+64);
	cout<<"Ӧ�����������Ͱѧ�� 	Version 1.3.1	�������ڣ�2023��3��20��"<<endl; 
	cout<<"�����ˣ�������"<<endl; 
	cout<<"����Ϊ2023��3��1�յ�2023��6��30�ա�δ����20�š�22�ź�29�š�"<<endl; 
	cout<<"�������·ݣ�";
	cin>>yue;
	for(int i=0;yue<3 or yue>6;i=0){
		if(yue<3 or yue>6){
			MessageBox(NULL,"��������Ч���·ݣ�","Warning��", MB_OK+16);
			cout<<"��������Ч���·ݣ�";
			cin>>yue; 
		}
	}
	cout<<"���������ڣ�";
	cin>>ri;
	for(int i=0;i<10001;i++){
		if(yue==3){
			if(ri==4 or ri==5 or ri==11 or ri==12 or ri==18 or ri==19 or ri==25 or ri==26){
				MessageBox(NULL,"��������Ч�����ڣ�","Warning��", MB_OK+16);
				cout<<"��������Ч�����ڣ�";
				cin>>ri; 
			}
		}else if(yue==4){
			if(ri==1 or ri==2 or ri==8 or ri==9 or ri==15 or ri==16 or ri==22 or ri==23 or ri==29 or ri==30){
				MessageBox(NULL,"��������Ч�����ڣ�","Warning��", MB_OK+16);
				cout<<"��������Ч�����ڣ�";
				cin>>ri; 
			}
		}else if(yue==5){
			if(ri==6 or ri==7 or ri==13 or ri==14 or ri==20 or ri==21 or ri==27 or ri==28){
				MessageBox(NULL,"��������Ч�����ڣ�","Warning��", MB_OK+16);
				cout<<"��������Ч�����ڣ�";
				cin>>ri; 
			}
		}else if(yue==6){
			if(ri==3 or ri==4 or ri==10 or ri==11 or ri==17 or ri==18 or ri==24 or ri==25){
				MessageBox(NULL,"��������Ч�����ڣ�","Warning��", MB_OK+16);
				cout<<"��������Ч�����ڣ�";
				cin>>ri; 
			}
		}
	}
	ri1=ri;
	if(yue==3){
		if(ri>=6 && ri<=10){
			ri=ri-2;
		}else if(ri>=13 && ri<=17){
			ri=ri-4;
		}else if(ri>=20 && ri<=24){
			ri=ri-6;
		}else if(ri>=27 && ri<=31){
			ri=ri-8;
		}
	}else if(yue==4){
		if(ri>=3 && ri<=7){
			ri=ri-2;
		}else if(ri>=10 && ri<=14){
			ri=ri-4;
		}else if(ri>=17 && ri<=21){
			ri=ri-6;
		}else if(ri>=24 && ri<=28){
			ri=ri-8;
		}
	}else if(yue==5){
		if(ri>=1 && ri<=5){
			ri=ri-2;
		}else if(ri>=8 && ri<=12){
			ri=ri-4;
		}else if(ri>=15 && ri<=19){
			ri=ri-6;
		}else if(ri>=22 && ri<=26){
			ri=ri-8;
		}else if(ri>=29 && ri<=31){
			ri=ri-10;
		}
	}else if(yue==6){
		if(ri>=5 && ri<=9){
			ri=ri-2;
		}else if(ri>=12 && ri<=16){
			ri=ri-4;
		}else if(ri>=19 && ri<=23){
			ri=ri-6;
		}else if(ri>=26 && ri<=30){
			ri=ri-8;
		}
	}
	freopen("./data/x.in","r",stdin);
	cin>>x;
	num(yue,ri,x);
	cout<<"��Ҫ��Ͱ��ͬѧѧ�ţ�";
	for(int i=0;i<5;i++){
		cout<<n[i]<<" ";
	}
	if(MessageBox(NULL,"������ɣ������Ƿ���а�Ͱ�˲飿","��Ͱ��Ա����",MB_OKCANCEL+32)==2){
		FILE *fp = NULL;
    	time_t timep;
    	char name[256] = {0};
		time(&timep);//��ȡ��1970������˶����룬����time_t���͵�timep
		strftime( name, sizeof(name), "./data/��־/%Y.%m.%d %H-%M-%S.txt",localtime(&timep) ); //���һ����������localtime������ת��Ϊstruct tm�ṹ��
		printf("������־�ļ�����Ϊ��%s\n", name);
    	if((fp = fopen(name, "w")) == NULL)
        	perror("");
		fclose(fp);
		freopen(name,"w",stdout);
		time_t now = time(0);
		tm *ltm = localtime(&now);
		cout << "ʱ��: "<< 1900 + ltm->tm_year << "/"<< 1 + ltm->tm_mon<< "/"<< ltm->tm_mday<< " "<<  ltm->tm_hour << ":"<< 1 + ltm->tm_min << ":"<< 1 + ltm->tm_sec <<endl;
		cout<<"�������ݣ�"<<yue<<" "<<ri1<<endl;
		cout<<"ʱ��ת����"<<ri<<endl;
		cout<<"�����"<<n[0]<<" "<<n[1]<<" "<<n[2]<<" "<<n[3]<<" "<<n[4];
		cout<<endl;
		cout<<"ѡ����������Ͱ�˲顣"<<endl; 
		cout<<"�ɹ�����index.exe�����"<<name<<endl;
		cout<<"���������"<<endl;
		cout<<endl;
		fclose(stdout);
		MessageBox(NULL,"��ѡ���ˡ�ȡ�������˳�����","��Ͱ��Ա����",MB_OK+64);
		return 0;
	}
	cout<<endl;
	cout<<"δ��Ͱ��Ա��"<<endl;
	int num[5]={0,0,0,0,0};
	for(int j=1;j!=num[0] or j!=num[1] or j!=num[2] or j!=num[3] or j!=num[4];j=1){
		time_t now = time(0);
		tm *ltm = localtime(&now);
		cout <<1900 + ltm->tm_year << "/"<< 1 + ltm->tm_mon<< "/"<< ltm->tm_mday<< " "<<  ltm->tm_hour << ":"<< 1 + ltm->tm_min << ":"<< 1 + ltm->tm_sec <<"    ";
		for(int i=0;i<5;i++){
			if(num[i]==0){
				if(i==0){
					if(MessageBox(NULL,"��һλͬѧ��Ͱ����","�Ƿ��Ͱ", MB_YESNO+32)==6){
						num[i]=1;
					}else{
						cout<<n[i]<<" ";
					}
				}else if(i==1){
					if(MessageBox(NULL,"�ڶ�λͬѧ��Ͱ����","�Ƿ��Ͱ", MB_YESNO+32)==6){
						num[i]=1;
					}else{
						cout<<n[i]<<" ";
					}
				}else if(i==2){
					if(MessageBox(NULL,"����λͬѧ��Ͱ����","�Ƿ��Ͱ", MB_YESNO+32)==6){
						num[i]=1;
					}else{
						cout<<n[i]<<" ";
					}
				}else if(i==3){
					if(MessageBox(NULL,"����λͬѧ��Ͱ����","�Ƿ��Ͱ", MB_YESNO+32)==6){
						num[i]=1;
					}else{
						cout<<n[i]<<" ";
					}
				}else if(i==4){
					if(MessageBox(NULL,"����λͬѧ��Ͱ����","�Ƿ��Ͱ", MB_YESNO+32)==6){
						num[i]=1;
					}else{
						cout<<n[i]<<" ";
					}
				}
			}
		}
		if(num[0]==0 or num[1]==0 or num[2]==0 or num[3]==0 or num[4]==0){
			MessageBox(NULL,"�غϽ�����������δ��Ͱ��","�����Ͱͬѧ", MB_OK+64); 	
		}else{
			cout<<"��";
		}
		cout<<endl;
	}
	
	FILE *fp = NULL;
    time_t timep;
    char name[256] = {0};
	time(&timep);//��ȡ��1970������˶����룬����time_t���͵�timep
	strftime( name, sizeof(name), "./data/��־/%Y.%m.%d %H-%M-%S.txt",localtime(&timep) ); //���һ����������localtime������ת��Ϊstruct tm�ṹ��
	printf("������־�ļ�����Ϊ��%s\n", name);
    if((fp = fopen(name, "w")) == NULL)
        perror("");
	fclose(fp);
	freopen(name,"w",stdout);
	time_t now = time(0);
	tm *ltm = localtime(&now);
	cout << "ʱ��: "<< 1900 + ltm->tm_year << "/"<< 1 + ltm->tm_mon<< "/"<< ltm->tm_mday<< " "<<  ltm->tm_hour << ":"<< 1 + ltm->tm_min << ":"<< 1 + ltm->tm_sec <<endl;
	cout<<"�������ݣ�"<<yue<<" "<<ri1<<endl;
	cout<<"ʱ��ת����"<<ri<<endl;
	cout<<"�����"<<n[0]<<" "<<n[1]<<" "<<n[2]<<" "<<n[3]<<" "<<n[4];
	cout<<endl;
	cout<<"ѡ���˰�Ͱ�˲顣"<<endl;
	cout<<"�ɹ�����index.exe�����"<<name<<endl;
	cout<<"���������"<<endl;
	cout<<endl;
	fclose(stdout);
	MessageBox(NULL,"ȫ����Ͱ�������ȷ�����˳�����","�����Ͱͬѧ", MB_OK+64);
	return 0; 
}

