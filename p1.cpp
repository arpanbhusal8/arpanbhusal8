#include<iostream>
#include<string.h>
using namespace std;
class employee{
char name[100];
float basic;
float da=0.52;
float it=0.3;
float net_sal;
public:
void setdata()
{ 
cout<<"enter the name of the employee\n";
cin>>name;
cout<<"enter the basic salary of the employee\n";
cin>>basic;
}
void getdata(){
    net_sal=basic +(basic*da)-(basic*it);
    cout<<"the basic salary of the employee "<<name<<"is "<<net_sal<<endl;
}};
int main(){
    employee a[3];
    for(int i=0;i<3;i++){
        a[i].setdata();
    }
    for(int i=0;i<3;i++){
        a[i].getdata();
    }
    return 0;
}