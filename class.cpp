#include<stdio.h>

using namespace std;


class Demo
{
 public:
        int no1;
	int no2;
	int ans;
        Demo(int no1,int no2 );	
	void Add();
        Demo();  
	~Demo(); 
	Demo(Demo &);	
};

void Demo::Add()
{
printf("\n*********This is calling Function from obj************* :");
ans=no1+no2;
printf("\n\nAddition of two number is:%d",ans);
}


Demo::Demo()
{
printf("\n******************This is Default Constructor****************:");
}


Demo::Demo(Demo &x)
{
no1=x.no1;

printf("\n**************** Inside Copy Constructor*******************");
printf("\n\n X value is %d",no1);
}



Demo::Demo(int x,int y)
{
printf("\n***************This is Parameterized Constructor:****************");
no1=x;
no2=y;
ans=0;

printf("\n\nValue of X and Y is %d :%d",x,y);
}

Demo::~Demo()
{
printf("\n@@@@ #Destuctor is Here : ");
}	

int main()
{
int x=3,y=4;
Demo obj1(x,y);
Demo obj3(obj1);
obj1.Add();
  
return 0;	  
}	
