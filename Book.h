
#include<iostream>
#include<conio.h> //控制台数据输入输出的函数
#include<fstream>//文件流
#include<iomanip> //控制数据输出格式
#include<string>
#include <cstring>
using namespace std;
class Drug 
{//图书类，实现对图书的描述，图书的编号，书名，借出，还入等功能
private: 
int tag; //删除标记 1:已删 0:未删
int no; //图书编号
char name[20]; //书名 
char author[20];//作者
char fenlei[20];//分类号
char cbs[20]; //出版社
int cbtime;//出版时间
double drugprice;//图书价格
int onshelf; //是否再架 1:再架 2:已借 
public: 
Drug(){;} 
char *getname()
{//获取书名
 return name; 
} 
char *getauthorname() 
{//获取作者名
 return author;
} 
 
char *getfenlei()
{//获取分类号
 return fenlei;
}
char *getcbsname()
{//获取出版社名 
 return cbs; 
} 
int getcbtime()
{//获取出版时间
 return cbtime;
}
double getdrugprice()
{//获取图书价格
 return drugprice;
}
int getno()
{//获取图书编号
 return no; 
}
int gettag()
{//获取删除标记 
 return tag; 
}
 
void setname(char na[]) 
{//设置书名
 strcpy(name,na); 
} 
void setauthorname(char aa[])
{//设置作者名
strcpy(author,aa);
}
void setfenlei(char fe[])
{//设置分类号
 strcpy(fenlei,fe);
}
void setcbs(char ca[])
{//设置出版社
 strcpy(cbs,ca);
}
 
void setcbtime(int time) 
{//设置时间
 cbtime=time;
} 
void setdrugprice(double price)
{//设置图书价格
 drugprice=price;
}
void setonshelf(int oa) 
{
 onshelf=oa;
} 
void deldrug()
{//删除图书
 char i;
 cout<<"确定删除吗？Y/N ?"<<endl;
 cin>>i;
 if(i=='y'||i=='Y')
 tag=1;
} 
void adddrug(int n,char *na,char *aa,char *fe,char *ca,int time,double price,int oa) 
{//增加图书 
 tag=0; 
 no=n; 
 strcpy(name,na);
 strcpy(author,aa);
 strcpy(cbs,ca);
 strcpy(fenlei,fe);
 cbtime=time;
 drugprice=price;
 onshelf=oa; 
} 
int borrowdrug() 
{//借书操作 
 if (onshelf>0) 
 { 
 onshelf--;
 return 1; 
 } 
 return 0; 
} 
void retdrug()
{//还书操作
 onshelf++; 
} 
void disp() 
{//输出图书 
 cout<<setw(3)<<no<<setw(10)<<name<<setw(10)<<author<<setw(10)<<fenlei<<setw(15)<<cbs<<setw(10)<<cbtime<<setw(10)<<drugprice<<setw(10)<<onshelf<<endl; 
} 
}; 