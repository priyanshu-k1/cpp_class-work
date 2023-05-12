#include<iostream>
using namespace std;


class Matrix1{
public:
    int first_matrix[2][2];
    int val;
    void matrix1_create(){
        for(int i= 0;i<2;i++){
            for(int j= 0;j<2;j++){
                cout<<"Enter the value of 1st matrix:";
                cin>>val;
                cout<<endl;
               first_matrix[i][j]=val; 
            }
        }
    }
};
class Matrix2{
public:
    int second_matrix[2][2];
    int val;
    void matrix2_create(){
        for(int i= 0;i<2;i++){
            for(int j= 0;j<2;j++){
                cout<<"Enter the value of 2nd matrix:";
                cin>>val;
                cout<<endl;
               second_matrix[i][j]=val; 
            }
        }
    }
};
class Sum_matrix:public Matrix1,public Matrix2{
public:
    int sum_up[2][2];
    void sum_matrix(){
        for(int i= 0;i<2;i++){
            for(int j= 0;j<2;j++){
                sum_up[i][j]=first_matrix[i][j]+second_matrix[i][j];
            }}}
    void display_matrix(){
        for(int i= 0;i<2;i++){
            for(int j= 0;j<2;j++){
                cout<<sum_up[i][j]<<"  ";
            }
            cout<<endl;
    }
}
};
int main(){
    Sum_matrix arr;
    arr.matrix1_create();
    arr.matrix2_create();
    arr.sum_matrix();
    arr.display_matrix();
   
return 0;
}