#include<iostream>
using namespace std;
class vech{
    int reg;
    static int count;
    public:
    void setregno(){
        cout<<"please enter the your car/bike reg no\n";
        cin>>reg;
    }
    void getregno(){
        cout<<"the vehicle reg no is "<<reg<<endl;
    }
    static void cnt(){
        count++;
        cout<<"the vehicle count is "<<count<<endl;
    }
    static void descnt(){
        
        cout<<"the vehicle count is "<<count<<endl;
        count--;
    }
    vech(){
        setregno();
        getregno();
        cnt();
        cout<<"-----------------\n";
        }
        ~vech(){
            descnt();
        }
};
int vech:: count=0;
int main(){
    int n;
    cout<<"please enter the number of vehicle you want registration of\n";
    cin>>n;
    vech a[n];
    return 0;
}