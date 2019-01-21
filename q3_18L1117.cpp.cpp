#include <iostream>
using namespace std;
int main()
{
int x=8;
int y=10;
int* p= nullptr;
int* q=nullptr;
p=&x;
q=&y;
cout<<"value of x = "<<x<<endl;
cout<<"value of y = "<<y<<endl;
cout<<"value of p = "<<p<<endl;
cout<<"value of q = "<<q<<endl;
cout<<"value of pointer p = "<<*p<<endl;
cout<<"value of pointer q = "<<*q<<endl;
//swapping
int z=0;
cin>>x;
cin>>y;
cin>>z;
int temp=0;
temp=z;
z=x;
x=y;
y=temp;
cout<<"value of x"<<x<<endl;
cout<<"value of y"<<y<<endl;
cout<<"value of z"<<z<<endl;
cout<<"value of p"<<p<<endl;
cout<<"value of q"<<q<<endl;
cout<<"value of *p"<<*p<<endl;
cout<<"value of *q"<<*q<<endl;
//swapping using pointer
int *temp2=nullptr;
int *r=nullptr;
r=new int(2);
temp2=r;
r=p;
p=q;
q=temp2;
cout<<"value of x"<<x<<endl;
cout<<"value of y"<<y<<endl;
cout<<"value of z"<<z<<endl;
cout<<"value of p"<<p<<endl;
cout<<"value of q"<<q<<endl;
cout<<"value of *p"<<*p<<endl;
cout<<"value of *q"<<*q<<endl;
cout<<"value of *r"<<*r<<endl;
	return 0;
}