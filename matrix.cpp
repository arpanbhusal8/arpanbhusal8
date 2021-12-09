#include<iostream>
using namespace std;
class matrix{
    int mat[10][10];
    int row,col;
    friend void transpose(matrix &obj1){
for(int i=0;i<obj1.row;i++){
    for(int j=0;j<obj1.col;j++){
        obj1.mat[i][j]=obj1.mat[j][i];
    }
}
    }
    public:
    void setdata()
    {
        cout<<"enter the row and colum you want in a matrix\n";
        cin>>row>>col;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                cout<<"enter the elements in the matrix\n";
                cin>>mat[i][j];
            }
        }
    }
    void getdata(){
                cout<<"the elements in the matrix is \n";
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                cout<<mat[i][j]<<" ";
            }
            cout<<endl;
        }
    }
};
int main(){
    matrix obj1;
    obj1.setdata();
    obj1.getdata();
    transpose( obj1);
    obj1.getdata();
}