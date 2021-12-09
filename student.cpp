#include<iostream>
using namespace std;
class stud{
    int t1,t2,t3;
    float avg;
    public:
    void setdata(){
        cout<<"1. phy \n2.chem \n3.bio \n4.dsc \n5.oops \n6.ops\n";
        cout<<"please enter your mark for test 1 as in the above list\n";
        cin>>t1;
        cout<<"please enter your mark for test 2 as in the above list\n";
        cin>>t2;
        cout<<"please enter your mark for test 3 as in the above list\n";
        cin>>t3;
        
    }
    void getdata(){

        cout<<"t1 = "<<t1<<"t2= "<<t2<<"t3= "<<t3<<endl;
    }
    void avg1(){
        if(t1>=t2 &&t1>=t3){
            if(t2>=t3){
                avg=(float)(t1+t2)/2;

            }
            else
            avg=(float)(t1+t3)/2;
        }
        if(t2>=t1 &&t2>=t3){
            if(t1>=t3){
                avg=(float)(t1+t2)/2;

            }
            else
            avg=(float)(t2+t3)/2;
        }
        if(t3>=t1 &&t3>=t2){
            if(t1>=t2){
                avg=(float)(t1+t3)/2;

            }
            else
            avg=(float)(t2+t3)/2;
        }
    }
    void avgdis(){
        // cout<<"1. phy \n2.chem \n3.bio \n4.dsc \n5.oops \n6.ops\n-------------------------\n";
        cout<<"the avg mark is "<<avg<<endl;
    }
};
int main(){
    stud sub[3];
    cout<<"1. phy \n2.chem \n3.bio \n4.dsc \n5.oops \n6.ops\n-------------\n";
    for(int i=0;i<3;i++){
        sub[i].setdata();
        cout<<"-------------\n";
        sub[i].avg1();
    }
    for(int i=0;i<3;i++){
        sub[i].getdata();
    }
    for(int i=0;i<3;i++){
        sub[i].avgdis();
    }
}