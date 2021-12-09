#include<iostream>
using namespace std;
class complex{
    int real,img;
    public:
    void setdata(int a,int b){
        real=a;
        img=b;
    }
    void getdata(){
        cout<<real<<" +"<<img<<"i"<<endl;
    }
    complex add(int a,complex s2){
        complex s3;
        s3.real=a+s2.real;
        s3.img=s2.img;
        return s3;
    }
    complex add(complex s2,complex s1){
        complex s4;
        s4.real=s2.real+s1.real;
        s4.img=s1.img+s2.img;
        return s4;
    }
};
int main(){
    complex s1,s2,s6,s7;
    s1.setdata(12,23);
    s2.setdata(15,78);
    s1.getdata();
    s2.getdata();
    s6=s2.add(9,s2);
    s7=s1.add(s1,s2);
    s6.getdata();
    s7.getdata();
    return 0;

}