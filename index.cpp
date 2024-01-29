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
	MessageBox(NULL,"请在窗口上分别输入相应的日期。","计算搬桶同学",MB_OK+64);
	cout<<"应用名：计算搬桶学号 	Version 1.3.1	更新日期：2023年3月20日"<<endl; 
	cout<<"制作人：吴少荃"<<endl; 
	cout<<"数据为2023年3月1日到2023年6月30日。未计入20号、22号和29号。"<<endl; 
	cout<<"请输入月份：";
	cin>>yue;
	for(int i=0;yue<3 or yue>6;i=0){
		if(yue<3 or yue>6){
			MessageBox(NULL,"请输入有效的月份！","Warning！", MB_OK+16);
			cout<<"请输入有效的月份：";
			cin>>yue; 
		}
	}
	cout<<"请输入日期：";
	cin>>ri;
	for(int i=0;i<10001;i++){
		if(yue==3){
			if(ri==4 or ri==5 or ri==11 or ri==12 or ri==18 or ri==19 or ri==25 or ri==26){
				MessageBox(NULL,"请输入有效的日期！","Warning！", MB_OK+16);
				cout<<"请输入有效的日期：";
				cin>>ri; 
			}
		}else if(yue==4){
			if(ri==1 or ri==2 or ri==8 or ri==9 or ri==15 or ri==16 or ri==22 or ri==23 or ri==29 or ri==30){
				MessageBox(NULL,"请输入有效的日期！","Warning！", MB_OK+16);
				cout<<"请输入有效的日期：";
				cin>>ri; 
			}
		}else if(yue==5){
			if(ri==6 or ri==7 or ri==13 or ri==14 or ri==20 or ri==21 or ri==27 or ri==28){
				MessageBox(NULL,"请输入有效的日期！","Warning！", MB_OK+16);
				cout<<"请输入有效的日期：";
				cin>>ri; 
			}
		}else if(yue==6){
			if(ri==3 or ri==4 or ri==10 or ri==11 or ri==17 or ri==18 or ri==24 or ri==25){
				MessageBox(NULL,"请输入有效的日期！","Warning！", MB_OK+16);
				cout<<"请输入有效的日期：";
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
	cout<<"需要搬桶的同学学号：";
	for(int i=0;i<5;i++){
		cout<<n[i]<<" ";
	}
	if(MessageBox(NULL,"计算完成！下面是否进行搬桶核查？","搬桶人员计算",MB_OKCANCEL+32)==2){
		FILE *fp = NULL;
    	time_t timep;
    	char name[256] = {0};
		time(&timep);//获取从1970至今过了多少秒，存入time_t类型的timep
		strftime( name, sizeof(name), "./data/日志/%Y.%m.%d %H-%M-%S.txt",localtime(&timep) ); //最后一个参数是用localtime将秒数转化为struct tm结构体
		printf("创建日志文件名称为：%s\n", name);
    	if((fp = fopen(name, "w")) == NULL)
        	perror("");
		fclose(fp);
		freopen(name,"w",stdout);
		time_t now = time(0);
		tm *ltm = localtime(&now);
		cout << "时间: "<< 1900 + ltm->tm_year << "/"<< 1 + ltm->tm_mon<< "/"<< ltm->tm_mday<< " "<<  ltm->tm_hour << ":"<< 1 + ltm->tm_min << ":"<< 1 + ltm->tm_sec <<endl;
		cout<<"输入内容："<<yue<<" "<<ri1<<endl;
		cout<<"时间转化："<<ri<<endl;
		cout<<"输出："<<n[0]<<" "<<n[1]<<" "<<n[2]<<" "<<n[3]<<" "<<n[4];
		cout<<endl;
		cout<<"选择了跳过搬桶核查。"<<endl; 
		cout<<"成功编译index.exe，输出"<<name<<endl;
		cout<<"程序结束。"<<endl;
		cout<<endl;
		fclose(stdout);
		MessageBox(NULL,"你选择了“取消”，退出程序。","搬桶人员计算",MB_OK+64);
		return 0;
	}
	cout<<endl;
	cout<<"未搬桶人员："<<endl;
	int num[5]={0,0,0,0,0};
	for(int j=1;j!=num[0] or j!=num[1] or j!=num[2] or j!=num[3] or j!=num[4];j=1){
		time_t now = time(0);
		tm *ltm = localtime(&now);
		cout <<1900 + ltm->tm_year << "/"<< 1 + ltm->tm_mon<< "/"<< ltm->tm_mday<< " "<<  ltm->tm_hour << ":"<< 1 + ltm->tm_min << ":"<< 1 + ltm->tm_sec <<"    ";
		for(int i=0;i<5;i++){
			if(num[i]==0){
				if(i==0){
					if(MessageBox(NULL,"第一位同学搬桶了吗？","是否搬桶", MB_YESNO+32)==6){
						num[i]=1;
					}else{
						cout<<n[i]<<" ";
					}
				}else if(i==1){
					if(MessageBox(NULL,"第二位同学搬桶了吗？","是否搬桶", MB_YESNO+32)==6){
						num[i]=1;
					}else{
						cout<<n[i]<<" ";
					}
				}else if(i==2){
					if(MessageBox(NULL,"第三位同学搬桶了吗？","是否搬桶", MB_YESNO+32)==6){
						num[i]=1;
					}else{
						cout<<n[i]<<" ";
					}
				}else if(i==3){
					if(MessageBox(NULL,"第四位同学搬桶了吗？","是否搬桶", MB_YESNO+32)==6){
						num[i]=1;
					}else{
						cout<<n[i]<<" ";
					}
				}else if(i==4){
					if(MessageBox(NULL,"第五位同学搬桶了吗？","是否搬桶", MB_YESNO+32)==6){
						num[i]=1;
					}else{
						cout<<n[i]<<" ";
					}
				}
			}
		}
		if(num[0]==0 or num[1]==0 or num[2]==0 or num[3]==0 or num[4]==0){
			MessageBox(NULL,"回合结束，还有人未搬桶。","计算搬桶同学", MB_OK+64); 	
		}else{
			cout<<"无";
		}
		cout<<endl;
	}
	
	FILE *fp = NULL;
    time_t timep;
    char name[256] = {0};
	time(&timep);//获取从1970至今过了多少秒，存入time_t类型的timep
	strftime( name, sizeof(name), "./data/日志/%Y.%m.%d %H-%M-%S.txt",localtime(&timep) ); //最后一个参数是用localtime将秒数转化为struct tm结构体
	printf("创建日志文件名称为：%s\n", name);
    if((fp = fopen(name, "w")) == NULL)
        perror("");
	fclose(fp);
	freopen(name,"w",stdout);
	time_t now = time(0);
	tm *ltm = localtime(&now);
	cout << "时间: "<< 1900 + ltm->tm_year << "/"<< 1 + ltm->tm_mon<< "/"<< ltm->tm_mday<< " "<<  ltm->tm_hour << ":"<< 1 + ltm->tm_min << ":"<< 1 + ltm->tm_sec <<endl;
	cout<<"输入内容："<<yue<<" "<<ri1<<endl;
	cout<<"时间转化："<<ri<<endl;
	cout<<"输出："<<n[0]<<" "<<n[1]<<" "<<n[2]<<" "<<n[3]<<" "<<n[4];
	cout<<endl;
	cout<<"选择了搬桶核查。"<<endl;
	cout<<"成功编译index.exe，输出"<<name<<endl;
	cout<<"程序结束。"<<endl;
	cout<<endl;
	fclose(stdout);
	MessageBox(NULL,"全部搬桶，点击“确定”退出程序。","计算搬桶同学", MB_OK+64);
	return 0; 
}

